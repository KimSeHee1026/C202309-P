#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "user_birth.h"
#include "theme.h"
#include "Lesson.h"

struct userInfo {
    char name[30];
    int birth_month;
    int birth_day;
};

int main() {
    //인삿말
    printf("-------------------------------------------\n");
    printf("'청춘을 꽃과 함께' 프로그램에 오신것을 환영합니다.'\n");
    printf("프로그램의 결과는 사용자님의 파일에 uesr.txt파일로 저장됩니다.\n");
    printf("-------------------------------------------\n\n\n");

    //사용자 이름 입력받기
    char uesr_name;
    printf("사용자님의 이름을 입력해주세요!");
    while (1) {
        printf("1. 사용자님의 탄생화를 출력해드릴께요!"); 
        printf("2. 사용자님의 상황에 맞는 꽃을 추천해드릴께요!"); 
        printf("3. 사용자님의 오늘의 운세와 명언을 보여드릴께요!");
        printf("4. 사용자님의 근처 꽃집을 알려드릴께요!");
        printf("5. 전체 기능을 실행시켜드릴게요!");
    }

 
    // 사용자의 탄생일에 맞는 탄생화를 알려주는 기능
    int month, day;
    printf("생일을 입력하세요 (월 일): ");
    scanf_s("%d월 %d일", &month, &day);

    if (month >= 1 && month <= 12) {
        if (day >= 1 && day <= 31) {
            findBirthFlower(month, day);
        }
        else {
            printf("올바른 일을 입력해주세요.\n");
        }
    }
    else {
        printf("올바른 월을 입력해주세요.\n");
    }

    // 사용자가 원하는 테마를 골라 선물할 꽃을 추천해주는 기능
    int user_theme;
    printf("""\n\n --------------------------------------------------------------------------------------\n\n");
    printf("1.우정\n2.사랑\n3.응원\n4.감사\n5.격려\n \" 총 5가지 테마중 선물할 꽃의 분위기에 맞는 테마를 골라 주세요!: ");
    scanf_s("%d", &user_theme);

    if (user_theme <= 5 && user_theme >= 1) {
        comeuser_theme(user_theme);
    }
    else {
        printf("잘못입력하셨습니다. 다시 입력해주세요: ");
    }


    // 꽃점 보는 기능
    char user_lesson;
    printf("\n\n ---------------------------------------------------\n\n");
    printf("오늘의 꽃점을 보시겠어요? (좋으면 \"Y\", 싫으면 \"N\"): ");
    scanf_s(" %c", &user_lesson, 1);

    if (user_lesson == 'Y') {
        LessonList();
    }
    else if (user_lesson == 'N') {
        printf("괜찮아요 ! 그런 날도 있는 걸요!");
    }
    else {
        printf("잘못입력하셨습니다.");
    }

    return 0;
}
