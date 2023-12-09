#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "user_birth.h"
#include "theme.h"
#include "Lesson.h"

int main() {
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
  } else {
        printf("올바른 월을 입력해주세요.\n");
  }

  // 사용자가 원하는 테마를 골라 선물할 꽃을 추천해주는 기능
  int user_theme;
  printf("""\n\n --------------------------------------------------------------------------------------\n\n");
  printf("1.우정\n2.사랑\n3.응원\n4.감사\n5.격려\n \" 총 5가지 테마중 선물할 꽃의 분위기에 맞는 테마를 골라 주세요!\n"); 
  scanf_s("%d", &user_theme);
  getchar();


  if (user_theme == 1 || user_theme == 2 || user_theme == 3 || user_theme == 4|| user_theme == 5) {
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
