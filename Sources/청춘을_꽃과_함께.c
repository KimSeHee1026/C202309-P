#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "user_birth.h"
#include "theme.h"

//탄생화를 저장해놓은 2차원 배열

//꽃 관련 명언 리스트
const char *Lessons[] = {
    "꽃을 손에 들고 정말 바라보면 잠시나마 너의 세상이다. - 조지아 오키프",
    "꽃을 보고자 하는 사람에겐 어디에나 꽃이 피어있다. - 앙리 마티스", 
    "인생은 꽃과 같고 사랑은 그 속의 꿀과 같다. -빅토르 휴고"
    "튤립은 누구에게도 깊은 인상을 주려고 애쓰지 않습니다. 장미와 달라지기 위해 애쓰지 않습니다.",
    "꽃은 꽃이 되라고 하지 않았고 나도 내가 되라고 하지 않았다. -커트 보네거트",
    "모든 꽃을 자를 수는 있지만 봄이 오는 것을 막을 순 없습니다. - 파블로 네루다"};




void LessonList(void) { 
  // 랜덤 수를 뽄는 함수 아직 안배움 --> 미리 4로 배정
  int randomnum = 4;
  printf("-------------------------------------------\n\n\n");
  printf(" %s", Lessons[randomnum]);
  printf("\n\n\n-------------------------------------------");
}

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
  } //While문 미작용


  // 꽃점 보는 기능
  char user_lesson;
  printf("\n\n ---------------------------------------------------\n\n");
  printf("오늘의 꽃 교훈을 알려드릴까요? (좋으면 \"Y\", 싫으면 \"N\"): ");
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

//기능 1 사용자가 태어난 달에 탄생화를 알려줌
