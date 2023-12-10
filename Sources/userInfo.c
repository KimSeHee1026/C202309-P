#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "userInfo.h"

void initializeUser(struct userInfo* user) {
    while (getchar() != '\n');

    printf("사용자의 이름을 입력해주세요: ");
    scanf_s("%29[^\n]", user->name, );

    printf("%s님의 파일 이름을 입력해주세요: ", user->name);
    scanf_s("%29s", user->file_name); 
}

struct userInfo* getUserInfoArray(int num_people) { 
    struct userInfo* users = (struct userInfo*)malloc(num_people * sizeof(struct userInfo)) ;

    if (users == NULL) {
        fprintf(stderr, "메모리 할당 실패\n");
        exit(1);
    }

    for (int i = 0; i < num_people; ++i) {
        printf("\n%d번째 사용자 정보 입력\n", i + 1);
        initializeUser(&users[i]);
    }

    return users;
}