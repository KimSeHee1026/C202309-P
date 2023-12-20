#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "userInfo.h"

struct userInfo greeting(void) {
    struct userInfo user1;

    //인삿말
    printf("-------------------------------------------\n");
    printf("'청춘을 꽃과 함께' 프로그램에 오신것을 환영합니다.'\n");
    printf("프로그램의 결과는 사용자님의 파일에 uesr.txt파일로 저장됩니다.\n");
    printf("-------------------------------------------\n\n\n");

    printf("사용자의 이름을 입력해주세요: ");
    scanf_s("%s", user1.name, (int)sizeof(user1.name));

    printf("%s님의 파일 이름을 입력해주세요: ", user1.name);
    scanf_s("%s", user1.file_name, (int)sizeof(user1.file_name));

    printf("\n%s파일로 결과를 출력해드릴께요!\n", user1.file_name);

    printf("-------------------------------------------\n");
    printf("★청춘을 꽃처럼★");

    return user1;
}