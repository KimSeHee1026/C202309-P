#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "userInfo.h"

struct userInfo greeting(void) {
    struct userInfo user1;

    //�λ�
    printf("-------------------------------------------\n");
    printf("'û���� �ɰ� �Բ�' ���α׷��� ���Ű��� ȯ���մϴ�.'\n");
    printf("���α׷��� ����� ����ڴ��� ���Ͽ� uesr.txt���Ϸ� ����˴ϴ�.\n");
    printf("-------------------------------------------\n\n\n");

    printf("������� �̸��� �Է����ּ���: ");
    scanf_s("%s", user1.name, (int)sizeof(user1.name));

    printf("%s���� ���� �̸��� �Է����ּ���: ", user1.name);
    scanf_s("%s", user1.file_name, (int)sizeof(user1.file_name));

    printf("\n%s���Ϸ� ����� ����ص帱����!\n", user1.file_name);

    printf("-------------------------------------------\n");
    printf("��û���� ��ó����");

    return user1;
}