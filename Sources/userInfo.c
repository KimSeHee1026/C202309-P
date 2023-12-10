#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "userInfo.h"

void initializeUser(struct userInfo* user) {
    while (getchar() != '\n');

    printf("������� �̸��� �Է����ּ���: ");
    scanf_s("%29[^\n]", user->name, );

    printf("%s���� ���� �̸��� �Է����ּ���: ", user->name);
    scanf_s("%29s", user->file_name); 
}

struct userInfo* getUserInfoArray(int num_people) { 
    struct userInfo* users = (struct userInfo*)malloc(num_people * sizeof(struct userInfo)) ;

    if (users == NULL) {
        fprintf(stderr, "�޸� �Ҵ� ����\n");
        exit(1);
    }

    for (int i = 0; i < num_people; ++i) {
        printf("\n%d��° ����� ���� �Է�\n", i + 1);
        initializeUser(&users[i]);
    }

    return users;
}