#include <stdlib.h>
#include <stdio.h>

int comeuser_theme(int user_theme, const char* filename, const char* user_name) {
    //�׸� ����Ʈ ����
    const char* theme_friend[][2] = {
   {"���϶�(�����)", "ģ���� ���, ���� ���� �߾�"},
   {"����", "���Ծ��� ����"},
   {"���(�����)", "����"},
   {"���̿÷�", "������ ����"}
    };
    const char* theme_love[][2] = {
        {"���þȼŽ�", "��ġ�ʴ� ���"},
        {"ƫ��(������)", "����� ����ϴ�"},
        {"�ұ�(�����)", "�� ������ �״뿡��"},
        {"���(������)", "������ ���"}
    };
    const char* theme_cheer[][2] = {
        {"��������(�����)", "����� ������ �����մϴ�"},
        {"���(�����)", "����"},
        {"�޸����(�����)", "�ݵ�� ����� �� �ູ"},
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

    //���� ����
    const char* theme_flower = NULL;
    const char* theme_meaning = NULL;

    //���� ���� 
    int random_num = rand() % 4;



    FILE* file;
    if (fopen_s(&file, filename, "a") == 0) {
        // (����)

        // �׸� �� Ȯ���ϴ� ���ǹ�
        if (user_theme == 1) {
            theme_flower = theme_friend[random_num][0];
            theme_meaning = theme_friend[random_num][1];
        }
        else if (user_theme == 2) {
            theme_flower = theme_love[random_num][0];
            theme_meaning = theme_love[random_num][1];
        }
        else if (user_theme == 3) {
            theme_flower = theme_cheer[random_num][0];
            theme_meaning = theme_cheer[random_num][1];
        }
        else if (user_theme == 4) {
            theme_flower = theme_thank[random_num][0];
            theme_meaning = theme_thank[random_num][1];
        }
        else if (user_theme == 5) {
            theme_flower = theme_sad[random_num][0];
            theme_meaning = theme_sad[random_num][1];
        }

        printf("%s��(��) �����? �ɸ��� %s �̶��ϴ�!", theme_flower, theme_meaning);
        fprintf(file, "\n<%s���� �׸�: ����>\n��õ ��: %s\n%s�� �ɸ�: %s\n", user_name, theme_flower, theme_flower, theme_meaning);
    }
    else {
        printf("������ �� �� �����ϴ�.\n");
        return 0;
    }

    fclose(file); // ������ ���� �κа� �ݴ� �κ��� �� ���� ȣ��Ǿ�� �մϴ�.
    return 1;
}