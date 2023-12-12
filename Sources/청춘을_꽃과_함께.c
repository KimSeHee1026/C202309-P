#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "user_birth.h"
#include "theme.h"
#include "Lesson.h"
#include "userInfo.h"

int main() {
    char userinformation =  char greeting(void);
    while (1) {
        // 사용자 메뉴 출력 및 선택
        printf("1. %s님의 탄생화를 출력해드릴게요!\n", user1.name);
        printf("2. %s님의 상황에 맞는 꽃을 추천해드릴게요!\n", user1.name);
        printf("3. %s님의 오늘의 운세와 명언을 보여드릴게요!\n", user1.name);
        printf("4. %s님의 근처 꽃집을 알려드릴게요!\n", user1.name);;
        printf("5. 전체 기능을 실행시켜드릴게요!\n");
        printf("6. 프로그램을 종료합니다.\n");

        // 사용자의 선택을 받아서 적절한 작업을 수행하는 코드 추가
        int choice;
        printf("원하는 기능을 선택해주세요: ");
        scanf_s("%d", &choice);

        // TODO: 선택에 따라 적절한 기능을 수행하는 코드 추가
        if (choice == 1) {
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
        }
        if (choice == 2) {
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
        if (choice == 3) {
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
        }
        if (choice == 4) {
            printf("제작중");
        }
        return 0;
        }
    }
}