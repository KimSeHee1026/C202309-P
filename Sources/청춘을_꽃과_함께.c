#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//ź��ȭ�� �����س��� 2���� �迭
const char *januaryFlowers[][2] = {{"������", "���"},
                                   {"�������ȭ", "����� ���Ͽ�"},
                                   {"������", "��ȸ ���� û��"},
                                   {"���ƽŽ�", "���ƽŽ�"},
                                   {"����", "�γ�"},
                                   {"�������", "���������� ���"},
                                   {"ƫ��", "�ǿ�"},
                                   {"����� �����", "���"},
                                   {"��������", "������ ���"},
                                   {"ȸ���", "���� �ߵ���"},
                                   {"���鳪��", "�߰��� ����"},
                                   {"��� �˸���", "��� �̸�"},
                                   {"����ȭ", "�ź�"},
                                   {"��Ŭ���", "������ ����"},
                                   {"����", "����"},
                                   {"��� ���ƽŽ�", "�º�"},
                                   {"����", "ģ������"},
                                   {"������", "����"},
                                   {"�ҳ���", "�ҷ����"},
                                   {"�̳��������", "õ������"},
                                   {"�����̵���", "����"},
                                   {"�̳�", "�𼺾�"},
                                   {"�ε�", "����"},
                                   {"������", "������ ��"},
                                   {"����������", "����"},
                                   {"�̸��", "������ ����"},
                                   {"������", "�������� �𸣴� ����"},
                                   {"���� ���ö�", "���"},
                                   {"�̳�", "�𼺾�"},
                                   {"�Ž� �޶���", "�ݵ�� ������ �� �ູ"},
                                   {"��� ������", "û���� ȯ��"}};
const char *februaryFlowers[][2] = {{"����", "���� ������ ����"},
                                    {"���", "���"},
                                    {"Ȳ������", "�״뿡�� ��ģ��"},
                                    {"��������", "������ �ʴ� �Ƹ��ٿ�"},
                                    {"��ġ", "���������"},
                                    {"������", "���翡 �ٸ���"},
                                    {"������", "�� ���� ���ƿ�"},
                                    {"���Ǳ�", "������ ����"},
                                    {"����ȭ", "����� �ӻ���"},
                                    {"����", "����"},
                                    {"�Ḯ��", "����"},
                                    {"�㲿������", "���ù��� ��ġ"},
                                    {"��Ǯ", "����"},
                                    {"ī��з�", "���濡 ������ �ʴ� ������"},
                                    {"�ﳪ��", "�״븦 ���� ���"},
                                    {"�����", "����"},
                                    {"�߻�ȭ", "ģ���� �ڿ�"},
                                    {"�̳��������", "õ������"},
                                    {"��������", "���Ӽ��� ����"},
                                    {"Į�̾�", "Ŀ�ٶ� ���"},
                                    {"�׸��ʶ�", "�ֱ���"},
                                    {"����ȭ", "�̹��� �Ƹ��ٿ�"},
                                    {"�챸��", "�ư����� ������"},
                                    {"��ī", "��ſ� �߾�"},
                                    {"�������", "�������� ���"},
                                    {"�Ƶ��Ͻ�", "�߾�"},
                                    {"�ƶ����� ��", "����"},
                                    {"����", "��ġ�ܰ�"},
                                    {"�Ƹ��޸���", "���"}};
const char *marchFlowers[][2] = {{"����ȭ", "����"},
                                 {"�̳��������", "�Ƹ��ٿ� �ΰ�"},
                                 {"�ڿ", "���� �ູ"},
                                 {"��������", "����"},
                                 {"���ʱ�ȭ", "�ູ��"},
                                 {"������", "����"},
                                 {"Ȳ������", "�繫ġ�� �׸���"},
                                 {"���", "����"},
                                 {"������", "���"},
                                 {"��������", "������"},
                                 {"���ٱ�", "������"},
                                 {"�������", "����� ����"},
                                 {"�����ȭ", "����� ����"},
                                 {"�Ƹ��", "���"},
                                 {"�����", "������ �Ʊ��� ����"},
                                 {"����", "�̴�"},
                                 {"���", "�ݵ�� ������ �� �ູ"},
                                 {"�ƽ��Ķ�Ž�", "����ȭ"},
                                 {"ġ�ڳ���", "�Ѿ��� ��ſ�"},
                                 {"����� ƫ��", "������ ����"},
                                 {"���ɳ�", "�λ��� ���"},
                                 {"��ƿ�", "����"},
                                 {"�۶��÷���", "�������� ���"},
                                 {"�ݿ�ȭ", "���"},
                                 {"������ �Ĺ�", "�Ƹ��ٿ�"},
                                 {"�����", "ù���"},
                                 {"Į���ö󸮶�", "����"},
                                 {"�ɾ�ī�þƳ���", "ǰ��"},
                                 {"���", "�������� ���ƿ�"},
                                 {"����ȭ", "û��"},
                                 {"������", "�ޱ��� ����"}};
const char *aprilFlowers[][2] = {{"�Ƹ��", "������ ���"},
                                 {"�Ƴ׸��", "���"},
                                 {"���ȼ���ȭ", "����"},
                                 {"���� �Ƴ׸��", "�״븦 �����"},
                                 {"��ȭ��", "ǳ��"},
                                 {"�Ƶ��Ͻ�", "������ �ູ"},
                                 {"���۰��縮", "�Ÿ�"},
                                 {"����ȭ", "�ھ�"},
                                 {"������", "���Ź�"},
                                 {"��ī", "��ſ� �߾�"},
                                 {"�ɰ���", "���ּ���"},
                                 {"�����", "����� �뿹"},
                                 {"�丣�þ� ��ȭ", "�����"},
                                 {"���Ȳ�", "��ġ�� ���"},
                                 {"�� ��Ű��", "�Ǹ���"},
                                 {"ƫ��", "�Ƹ��ٿ� ������"},
                                 {"���� â��", "���� ��ȥ"},
                                 {"�ڿ", "��ȭ"},
                                 {"���������", "û��"},
                                 {"�質��", "��ȭ�� ����"},
                                 {"�������", "�� ������ ����"},
                                 {"����", "�������� ���"},
                                 {"������", "����ϰ� ������"},
                                 {"����", "���"},
                                 {"�߱� �и�", "����"},
                                 {"������", "��Ÿ�� ����"},
                                 {"����", "û���� ����"},
                                 {"���� ����", "���� �� ���� �Ƹ��ٿ�"},
                                 {"���鳪��", "�ŷ�"},
                                 {"�ݻ罽����", "���� �Ƹ��ٿ�"}};
const char *mayFlowers[][2] = {{"ī�콽�� ����", "���� ���� ����"},
                               {"�̳��������", "õ��������"},
                               {"�ε鷹", "��Ź"},
                               {"����", "���߰� ����"},
                               {"������", "������"},
                               {"����⳪����", "������ �Ƹ��ٿ�"},
                               {"����", "����� ����"},
                               {"����", "û���� ����"},
                               {"�㺢��", "����, �ܾ���"},
                               {"��â��", "����� ����"},
                               {"���", "��Ȥ"},
                               {"���϶�", "����� ��"},
                               {"��糪��", "������ ���"},
                               {"�Ź����", "�¸��� �ͼ�"},
                               {"������", "������ ���"},
                               {"���˳���", "����"},
                               {"��� ƫ��", "����� ǥ��"},
                               {"������ ����", "ù���"},
                               {"�Ƹ���ŸŸ", "�Ƹ��ٿ��� ������"},
                               {"���̹�", "������ ����"},
                               {"��ȫ�� ���������", "����"},
                               {"�Ͱ�����", "������ ����"},
                               {"Ǯ�� ��", "ù����� �߾�"},
                               {"�︮�������", "����̿� �����϶�"},
                               {"��������", "����"},
                               {"�ø��곪��", "��ȭ"},
                               {"������", "������ ����"},
                               {"����", "�̴�"},
                               {"�䳢Ǯ", "��Ȱ"},
                               {"������ ���϶�", "����� ���� Ʈ��"},
                               {"����", "���� ������"}};
const char *juneFlowers[][2] = {{"���", "���� ���� �״븸�� �Ƴ�"},
                                {"���� �Ź����", "����"},
                                {"�Ƹ�", "����"},
                                {"���", "�Ƹ���� ������ �� ���"},
                                {"�޶���", "������ ����"},
                                {"��� �ײ�", "�ϴ� ���� �ູ"},
                                {"����ƮƼ�Ƴ�", "����ϴ� ����"},
                                {"�罺��", "���������"},
                                {"����Ʈ��", "����� �߾�"},
                                {"�����з��̲�", "������"},
                                {"�߱��и�", "����"},
                                {"������ ������Ÿ", "�ŷ�"},
                                {"���Ż����", "���� ���� ����"},
                                {"�Ѳ�����", "�߻�"},
                                {"ī���̼�", "����"},
                                {"Ʃ�� �ε�", "������ ���"},
                                {"�䳢Ǯ", "��ȭ"},
                                {"�鸮��", "���"},
                                {"���� ���", "���"},
                                {"����Ǯ", "�޼�"},
                                {"�޸��̲�", "���������� ����"},
                                {"�����쳪��", "����� �������� ���ϴ�"},
                                {"���ò�", "������ ����"},
                                {"������", "������ ȭ��"},
                                {"���Ȳ�", "������ ���"},
                                {"�� ���϶�", "�Ƹ��ٿ� �ͼ�"},
                                {"�ð��", "�������� ���"},
                                {"����", "�״밡 �ֱ⿡ �ູ�� �ֳ�"},
                                {"���� ����", "�״밡 �־� ����� �ֳ�"},
                                {"�ε�", "����� �ο�"}};
const char *julyFlowers[][2] = {{"�ܾ羦������", "�¸�"},
                                {"�ݾ���", "���"},
                                {"��� ��ͺ�", "����"},
                                {"�ڸ��", "�ڿ���"},
                                {"�󺥴�", "ǳ���� ���"},
                                {"�عٶ��", "�޸�"},
                                {"��������䳪��", "����"},
                                {"����ǪƮ", "�ٽ� ���� ������"},
                                {"���̺� ����", "������ ����"},
                                {"�ʷղ�", "����"},
                                {"�ƽ�����", "���� ����� ��"},
                                {"�����Թ�ǳ��", "���� �� ����"},
                                {"������ ��", "�������� ���"},
                                {"�÷Ͻ�", "��ȭ"},
                                {"�����", "���������"},
                                {"�����ɹ�", "������ �Ƹ��ٿ�"},
                                {"������", "����"},
                                {"�̳� ���", "������"},
                                {"�����", "�Ƹ���� ������"},
                                {"����", "����"},
                                {"������", "�Ƹ��ٿ�"},
                                {"�з��̲�", "���"},
                                {"���", "�Ƹ��ٿ�"},
                                {"������", "������ ����"},
                                {"�����ܳ���", "����"},
                                {"�⾦", "��ȭ"},
                                {"����", "������ ����"},
                                {"�з��̲�", "������ ���"},
                                {"������", "��Ÿ�� ����"},
                                {"������ ������", "�κξ�"},
                                {"ȣ��", "������"}};
const char *augustFlowers[][2] = {{"���� ��ͺ�", "����"},
                                  {"���ʱ�ȭ", "�ູ"},
                                  {"����Ǯ", "�ư����� �Ƹ��ٿ� ����"},
                                  {"������", "�纸"},
                                  {"����ī", "����"},
                                  {"�ɼ�ȭ", "����"},
                                  {"����", "������ �Ƹ��ٿ�"},
                                  {"���޷�", "����� ��"},
                                  {"�ý��ͽ�", "�α�"},
                                  {"�̳�", "�𼺾�"},
                                  {"������������", "����"},
                                  {"���׵�", "����"},
                                  {"��� �ε�", "���"},
                                  {"���մ�", "���"},
                                  {"�عٶ��", "����"},
                                  {"Ÿ������", "��ġ"},
                                  {"ƫ������", "������ �ູ"},
                                  {"���ò�", "������ ���"},
                                  {"�λ� ķ�ǿ�", "����"},
                                  {"��������", "����"},
                                  {"¤�ų���", "����"},
                                  {"���Ǹ���", "���"},
                                  {"������ ������", "�κξ�"},
                                  {"����ȭ", "�̺��� ����"},
                                  {"�Ƚ���", "����� �����ϴ� ����"},
                                  {"�������ý� ������", "���� ã��"},
                                  {"����", "����"},
                                  {"��������", "��н��� ����"},
                                  {"�ɴ��", "�״��־� �ܷ��� �ʴ�"},
                                  {"���մ�", "���"},
                                  {"�䳢Ǯ", "���"}};
const char *septemberFlowers[][2] = {{"ȣ���̲�", "���� ����� �ּ���"},
                                     {"�߽�ĭ ���̺�", "��ȭ"},
                                     {"�ưŸ�Ʈ", "�����ӿ� ���� ���"},
                                     {"�칫", "������ ���"},
                                     {"��������", "�ŷ�"},
                                     {"�ѷ�", "�ֱ���"},
                                     {"������", "�������� ���"},
                                     {"��", "������"},
                                     {"��������", "�߾�"},
                                     {"��� ����", "�ϴ� ����"},
                                     {"�˷ο�", "�ɵ� �ٻ���"},
                                     {"Ŭ����Ƽ��", "������ �Ƹ��ٿ�"},
                                     {"���峪��", "����"},
                                     {"�������", "��Ȥ"},
                                     {"�پ˸���", "ȭ����"},
                                     {"���", "���� �״밡 ����"},
                                     {"����ī", "����"},
                                     {"������", "����"},
                                     {"����", "����"},
                                     {"����޸�", "���� �����ؿ�"},
                                     {"������", "��ȸ���� û��"},
                                     {"����ŷ �׶�", "���"},
                                     {"�ָ�", "������"},
                                     {"������", "�������� ���"},
                                     {"�ޱ͸�", "������ ������"},
                                     {"��", "�ڿ���"},
                                     {"��������", "����� ������"},
                                     {"����", "����"},
                                     {"���", "����"},
                                     {"�ﳪ��", "����"}};
const char *octoberFlowers[][2] = {{"���� ��ȭ", "���"},
                                   {"�챸", "�ư����� ������"},
                                   {"��ǳ����", "����"},
                                   {"ȩ", "���� ����"},
                                   {"��������", "�¸�"},
                                   {"���ϳ���", "ȭ��"},
                                   {"������", "������"},
                                   {"�Ľ���", "�¸�"},
                                   {"����", "����"},
                                   {"���", "����"},
                                   {"��ó��", "����� ����"},
                                   {"����", "���׽�"},
                                   {"���˳���", "������ ���"},
                                   {"��� ��ȭ", "����"},
                                   {"����Ʈ ����", "���� ���"},
                                   {"�̳����", "��������"},
                                   {"����", "�ŷ�"},
                                   {"�������", "������ ������ �����ϴ�"},
                                   {"���� ����ȭ", "�� �ǵ帮�� ������"},
                                   {"��", "���"},
                                   {"������", "����"},
                                   {"��Ǯ", "�ŷ�"},
                                   {"�򵶸�Ǯ", "���"},
                                   {"��ȭ", "������ ����"},
                                   {"��ǳ����", "����"},
                                   {"����", "����"},
                                   {"�����", "��"},
                                   {"����ȭ", "�̹��� �Ƹ��ٿ�"},
                                   {"�ش�ȭ", "�̲��ô� ���"},
                                   {"�κ�����", "����"},
                                   {"Į��", "����"}};
const char *novemberFlowers[][2] = {{"������", "������ ���"},
                                    {"���ǳʽ�", "�𼺾�"},
                                    {"�긮���Ͼ�", "����"},
                                    {"����縮", "������ ����"},
                                    {"�ܾ羦������", "����"},
                                    {"��񳪹�", "����"},
                                    {"�޸����", "�̺��� ����"},
                                    {"���µ��ڲ�", "����"},
                                    {"������ ��", "����"},
                                    {"�ο�", "������ �Ƹ��ٿ�"},
                                    {"�򵿹�", "��н��� ���"},
                                    {"����", "�������� �����"},
                                    {"���� ������", "�γ�"},
                                    {"�ҳ���", "�ҷ����"},
                                    {"Ȳ�ݽθ�", "���"},
                                    {"ũ�������� ����", "�߾�"},
                                    {"����", "����"},
                                    {"�곪��", "���"},
                                    {"���Ǳ�", "���"},
                                    {"��۶�", "����"},
                                    {"�ʷղ�", "����"},
                                    {"���ڳ���", "��ٷο�"},
                                    {"��ġ", "����"},
                                    {"�����쳪��", "����� �������� ���ϴ�"},
                                    {"���̳���", "����"},
                                    {"������Ǯ", "����"},
                                    {"�ӳ���", "�ž�"},
                                    {"����", "�߻�"},
                                    {"��ī����", "��ô"},
                                    {"���� ���� Ǯ", "������ ��ٸ�"}};
const char *decemberFlowers[][2] = {{"����ȭ", "��ȭ"},
                                    {"�̳�", "�𼺾�"},
                                    {"�󺥴�", "���"},
                                    {"����", "����"},
                                    {"�ں�νþ�", "�ູ�� ����"},
                                    {"������", "������ ���"},
                                    {"��ġ", "�ŷ�"},
                                    {"����", "���� ����"},
                                    {"��ȭ", "����"},
                                    {"���� ����", "������ �̼�"},
                                    {"�ܾ羦������", "�ֱ���"},
                                    {"��ȭ", "���"},
                                    {"��ȫ�� ��ȭ", "���"},
                                    {"�ҳ���", "�밨"},
                                    {"����", "�Ҹ�"},
                                    {"��������", "���"},
                                    {"������", "������ ��"},
                                    {"���� �÷���ũ", "�Ƹ��ٿ�"},
                                    {"���ξ���", "��������"},
                                    {"����", "��"},
                                    {"����ȫ", "�ູ"},
                                    {"�ö�Ÿ�ʽ�", "õ��"},
                                    {"�ܿ����", "���� �γ���"},
                                    {"����ȣ�����ó���", "��������"},
                                    {"ũ�������� ����", "�߾�"},
                                    {"��ȭ", "���� ����"},
                                    {"����", "������"},
                                    {"�ʸ�", "�ڿ���"},
                                    {"����", "�ھ�"},
                                    {"��۳���", "�Ҹ�"}};

//�� ���� ���� ����Ʈ
const char *Lessons[] = {
    "���� �տ� ��� ���� �ٶ󺸸� ��ó��� ���� �����̴�. - ������ ��Ű��",
    "���� ������ �ϴ� ������� ��𿡳� ���� �Ǿ��ִ�. - �Ӹ� ��Ƽ��", 
    "�λ��� �ɰ� ���� ����� �� ���� �ܰ� ����. -���丣 �ް�"
    "ƫ���� �������Ե� ���� �λ��� �ַ��� �־��� �ʽ��ϴ�. ��̿� �޶����� ���� �־��� �ʽ��ϴ�.",
    "���� ���� �Ƕ�� ���� �ʾҰ� ���� ���� �Ƕ�� ���� �ʾҴ�. -ĿƮ ���װ�Ʈ",
    "��� ���� �ڸ� ���� ������ ���� ���� ���� ���� �� �����ϴ�. - �ĺ��� �׷��"};

//�׸� ����Ʈ
const char* theme_friend[][2] = {
    {"���϶�(�����)", "ģ���� ���, ���� ���� �߾�"},
    {"����", "���Ծ��� ����"},
    {"���(�����)", "����"},
    {"���̿÷�", "������ ����"}
};
const char* theme_love[][2] = {
    {"���þȼŽ�", "��ġ�ʴ� ���"},
    {"ƫ��(������)", "����� �����ϴ�"},
    {"�ұ�(�����)", "�� ������ �״뿡��"},
    {"���(������)", "������ ���"}
};
const char* theme_cheer[][2] = {
    {"��������(�����)", "����� ������ �����մϴ�"},
    {"���(�����)", "����"},
    {"�޸����(�����)", "�ݵ�� ������ �� �ູ"},
    {"�ָ��ٰ�", "������ ����մϴ�"}
};
const char* theme_thank[][2] = {
    {"���(����ũ)", "���� ����帳�ϴ�!"},
    {"į�Ĵ���", "�����մϴ�"},
    {"���(��ũ)", "����� �����մϴ�"},
    {"�ʷղ�", "������ �����Ϸ��� ����"}
};
const char* theme_sad[][2] = {
    {"��ͺ�", "����, ����"},
    {"ũ������", "������ ������ �����ϴ�"},
    {"���", "���ΰ� �Ǿ��ִ�"},
    {"�Ȱ���", "����"}
};


void LessonList(void) { 
  // ���� ���� �ɴ� �Լ� ���� �ȹ�� --> �̸� 4�� ����
  int randomnum = 4;
  printf("-------------------------------------------\n\n\n");
  printf(" %s", Lessons[randomnum]);
  printf("\n\n\n-------------------------------------------");
}

void findBirthFlower(int month, int day) { 
    int arrayLength;
    const char *flower = NULL;
    const char *meaning = NULL;

    switch (month) {
        case 1:
        arrayLength = sizeof(januaryFlowers) / sizeof(januaryFlowers[0]);
          if (day >= 1 && day <= arrayLength) {
            flower = januaryFlowers[day - 1][0];
            meaning = januaryFlowers[day - 1][1];
            printf("%d�� %d�� ź��ȭ�� %s�̸� �ɸ��� %s �Դϴ�.!", month, day,
                   flower, meaning);
          }
          break;
        case 2:
          arrayLength = sizeof(februaryFlowers) / sizeof(februaryFlowers[0]);
          if (day >= 1 && day <= arrayLength) {
            flower = februaryFlowers[day - 1][0];
            meaning = februaryFlowers[day - 1][1];
            printf("%d�� %d�� ź��ȭ�� %s�̸� �ɸ��� %s �Դϴ�.!", month, day,
                   flower, meaning);
          }
          break;
        case 3:
          arrayLength = sizeof(marchFlowers) / sizeof(marchFlowers[0]);
          if (day >= 1 && day <= arrayLength) {
            flower = marchFlowers[day - 1][0];
            meaning = marchFlowers[day - 1][1];
            printf("%d�� %d�� ź��ȭ�� %s�̸� �ɸ��� %s �Դϴ�.!", month, day,
                   flower, meaning);
          }
          break;
        case 4:
          arrayLength = sizeof(aprilFlowers) / sizeof(aprilFlowers[0]);
          if (day >= 1 && day <= arrayLength) {
            flower = aprilFlowers[day - 1][0];
            meaning = aprilFlowers[day - 1][1];
            printf("%d�� %d�� ź��ȭ�� %s�̸� �ɸ��� %s �Դϴ�.!", month, day,
                   flower, meaning);
          }
          break;
        case 5:
          arrayLength = sizeof(mayFlowers) / sizeof(mayFlowers[0]);
          if (day >= 1 && day <= arrayLength) {
            flower = mayFlowers[day - 1][0];
            meaning = mayFlowers[day - 1][1];
            printf("%d�� %d�� ź��ȭ�� %s�̸� �ɸ��� %s �Դϴ�.!", month, day,
                   flower, meaning);
          }
          break;
        case 6:
          arrayLength = sizeof(juneFlowers) / sizeof(juneFlowers[0]);
          if (day >= 1 && day <= arrayLength) {
            flower = juneFlowers[day - 1][0];
            meaning = juneFlowers[day - 1][1];
            printf("%d�� %d�� ź��ȭ�� %s�̸� �ɸ��� %s �Դϴ�.!", month, day,
                   flower, meaning);
          }
          break;
        case 7:
          arrayLength = sizeof(julyFlowers) / sizeof(julyFlowers[0]);
          if (day >= 1 && day <= arrayLength) {
            flower = julyFlowers[day - 1][0];
            meaning = julyFlowers[day - 1][1];
            printf("%d�� %d�� ź��ȭ�� %s�̸� �ɸ��� %s �Դϴ�.!", month, day,
                   flower, meaning);
          }
          break;
        case 8:
          arrayLength = sizeof(augustFlowers) / sizeof(augustFlowers[0]);
          if (day >= 1 && day <= arrayLength) {
            flower = augustFlowers[day - 1][0];
            meaning = augustFlowers[day - 1][1];
            printf("%d�� %d�� ź��ȭ�� %s�̸� �ɸ��� %s �Դϴ�.!", month, day,
                   flower, meaning);
          }
          break;
        case 9:
          arrayLength = sizeof(septemberFlowers) / sizeof(septemberFlowers[0]);
          if (day >= 1 && day <= arrayLength) {
            flower = septemberFlowers[day - 1][0];
            meaning = septemberFlowers[day - 1][1];
            printf("%d�� %d�� ź��ȭ�� %s�̸� �ɸ��� %s �Դϴ�.!", month, day,
                   flower, meaning);
          }
          break;
        case 10:
          arrayLength = sizeof(octoberFlowers) / sizeof(octoberFlowers[0]);
          if (day >= 1 && day <= arrayLength) {
            flower = octoberFlowers[day - 1][0];
            meaning = octoberFlowers[day - 1][1];
            printf("%d�� %d�� ź��ȭ�� %s�̸� �ɸ��� %s �Դϴ�.!", month, day,
                   flower, meaning);
          }
          break;
        case 11:
          arrayLength = sizeof(novemberFlowers) / sizeof(novemberFlowers[0]);
          if (day >= 1 && day <= arrayLength) {
            flower = novemberFlowers[day - 1][0];
            meaning = novemberFlowers[day - 1][1];
            printf("%d�� %d�� ź��ȭ�� %s�̸� �ɸ��� %s �Դϴ�.!", month, day,
                   flower, meaning);
          }
          break;
        case 12:
          arrayLength = sizeof(decemberFlowers) / sizeof(decemberFlowers[0]);
          if (day >= 1 && day <= arrayLength) {
            flower = decemberFlowers[day - 1][0];
            meaning = decemberFlowers[day - 1][1];
            printf("%d�� %d�� ź��ȭ�� %s�̸� �ɸ��� %s �Դϴ�.!", month, day,
                   flower, meaning);
          }
          break;
    }
}
void comeuser_theme(int user_theme) {
        int random_num = rand() % 4; //���� �Լ� �𸣴� ����� 2�� �̸� ����
        const char* flower = NULL;
        const char* meaning = NULL;

        // �׸� �� Ȯ���ϴ� ���ǹ�
        if (user_theme == 1) {
            flower = theme_friend[random_num][0];
            meaning = theme_friend[random_num][1];
            printf("%s��(��) �����? �ɸ��� %s �̶��ϴ�!", flower, meaning);
        }
        else if (user_theme == 2) {
            flower = *theme_love[random_num][0];
            meaning = *theme_love[random_num][1];
            printf("%s��(��) �����? �ɸ��� %s �̶��ϴ�!", flower, meaning);
        }
        else if (user_theme == 3) {
            flower = *theme_cheer[random_num][0];
            meaning = *theme_cheer[random_num][1];
            printf("%s��(��) �����? �ɸ��� %s �̶��ϴ�!", flower, meaning);
        }
        else if (user_theme == 4) {
            flower = *theme_thank[random_num][0];
            meaning = *theme_thank[random_num][1];
            printf("%s��(��) �����? �ɸ��� %s �̶��ϴ�!", flower, meaning);
        }
        else if (user_theme == 5) {
            flower = *theme_sad[random_num][0];
            meaning = *theme_sad[random_num][1];
            printf("%s��(��) �����? �ɸ��� %s �̶��ϴ�!", flower, meaning);
        }
    }


int main() {
  // ������� ź���Ͽ� �´� ź��ȭ�� �˷��ִ� ���
  int month, day;

  printf("������ �Է��ϼ��� (�� ��): ");
  scanf_s("%d�� %d��", &month, &day);

  if (month >= 1 && month <= 12) {
        if (day >= 1 && day <= 31) {
          findBirthFlower(month, day);
        }
        else {
          printf("�ùٸ� ���� �Է����ּ���.\n");
        }
  } else {
        printf("�ùٸ� ���� �Է����ּ���.\n");
  }

  // ����ڰ� ���ϴ� �׸��� ��� ������ ���� ��õ���ִ� ���
  int user_theme;

  printf("""\n\n --------------------------------------------------------------------------------------\n\n");
  printf("1.����\n2.���\n3.����\n4.����\n5.�ݷ�\n \" �� 5���� �׸��� ������ ���� �����⿡ �´� �׸��� ��� �ּ���!\n"); 
  scanf_s("%d", &user_theme);
  getchar();


  if (user_theme == 1 || user_theme == 2 || user_theme == 3 || user_theme == 4|| user_theme == 5) {
      comeuser_theme(user_theme);
  }
  else {
      printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���: ");
  } //While�� ���ۿ�


  // ���� ���� ���
  char user_lesson;
  printf("\n\n ---------------------------------------------------\n\n");
  printf("������ �� ������ �˷��帱���? (������ \"Y\", ������ \"N\"): ");
  scanf_s(" %c", &user_lesson, 1);

  if (user_lesson == 'Y') {
        LessonList();
  }
  else if (user_lesson == 'N') { 
      printf("�����ƿ� ! �׷� ���� �ִ� �ɿ�!");
  }
  else {
      printf("�߸��Է��ϼ̽��ϴ�.");
  }
        
  return 0;
}

//��� 1 ����ڰ� �¾ �޿� ź��ȭ�� �˷���
