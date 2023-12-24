#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "user_birth.h"
#include "theme.h"
#include "Lesson.h"
#include "userInfo.h"
#include "flower_shop.h"

int main() {

    struct userInfo user1 = greeting();

    while (1) {
        // 사용자 메뉴 출력 및 선택
        printf("\n---------------------------------------------------\n\n");
        printf("1. %s님의 탄생화를 출력해드릴게요!\n", user1.name);
        printf("2. %s님의 상황에 맞는 꽃을 추천해드릴게요!\n", user1.name);
        printf("3. %s님의 오늘의 운세와 명언을 보여드릴게요!\n", user1.name);
        printf("4. %s님의 근처 꽃집을 알려드릴게요!\n", user1.name);;
        printf("5. 프로그램을 종료합니다.\n\n");
        printf("---------------------------------------------------\n\n");

        // 사용자의 선택을 받아서 적절한 작업을 수행하는 코드 추가
        int choice;
        printf("원하는 기능을 선택해주세요: ");
        scanf_s("%d", &choice);

        if (choice == 1) {
            int month, day;
            do {
                printf("생일을 입력하세요 (월 일): ");
                scanf_s("%d월 %d일", &month, &day);

                if (month >= 1 && month <= 12) {
                    if (day >= 1 && day <= 31) {
                        findBirthFlower(month, day, user1.file_name, user1.name);
                        break; // 올바른 입력일 경우 반복문 탈출
                    }
                    else {
                        printf("올바른 일을 입력해주세요.\n");
                    }
                }
                else {
                    printf("올바른 월을 입력해주세요.\n");
                }
            } while (1); // 무한 루프를 돌면서 사용자가 올바른 입력을 할 때까지 계속 반복
        }
        else if (choice == 2) {
            int user_theme;
            do {
                printf("\n\n --------------------------------------------------------------------------------------\n\n");
                printf("1.우정\n2.사랑\n3.응원\n4.감사\n5.격려\n 총 5가지 테마중 선물할 꽃의 분위기에 맞는 테마를 골라 주세요!: ");
                scanf_s("%d", &user_theme);
                getchar();

                if (user_theme <= 5 && user_theme >= 1) {
                    comeuser_theme(user_theme, user1.file_name, user1.name);
                    break; // 올바른 입력일 경우 반복문 탈출
                }
                else {
                    printf("잘못입력하셨습니다. 다시 입력해주세요: ");
                }
            } while (1); // 무한 루프를 돌면서 사용자가 올바른 입력을 할 때까지 계속 반복
        }
        else if (choice == 3) {
            char user_lesson;
            do {
                printf("\n\n ---------------------------------------------------\n\n");
                printf("오늘의 꽃 명언을 보시겠어요? (좋으면 \"Y\", 싫으면 \"N\"): ");
                scanf_s(" %c", &user_lesson, 1);

                if (user_lesson == 'Y') {
                    LessonList(user1.name, user1.file_name); 
                    break; // 올바른 입력일 경우 반복문 탈출
                }
                else if (user_lesson == 'N') {
                    printf("괜찮아요 ! 그런 날도 있는 걸요!");
                    break; // 올바른 입력일 경우 반복문 탈출
                }
                else {
                    printf("잘못입력하셨습니다. 다시 입력해주세요.\n");
                }
            } while (1); // 무한 루프를 돌면서 사용자가 올바른 입력을 할 때까지 계속 반복
        }
        else if (choice == 4) {
            provideFlowerShop(user1.name, user1.file_name);
            getchar();
        }
        else if (choice == 5) {
            break; // 프로그램 종료
        }
        else {
            printf("잘못된 선택입니다.\n");
        }
    }

    return 0;
}