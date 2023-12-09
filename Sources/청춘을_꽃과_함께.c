#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "user_birth.h"
#include "theme.h"
#include "Lesson.h"

int main() {
  // ������� ź���Ͽ� �´� ź��ȭ�� �˷��ִ� ���
  int month, day;
  printf("������ �Է��ϼ��� (�� ��): ");
  scanf_s("%d�� %d��", &month, &day);

  if (month >= 1 && month <= 12) {
        if (day >= 1 && day <= 31) {
            findBirthFlower(month, day);
        }
        else {
          printf("�ùٸ� ���� �Է����ּ���.\n");
        }
  } else {
        printf("�ùٸ� ���� �Է����ּ���.\n");
  }

  // ����ڰ� ���ϴ� �׸��� ��� ������ ���� ��õ���ִ� ���
  int user_theme;
  printf("""\n\n --------------------------------------------------------------------------------------\n\n");
  printf("1.����\n2.���\n3.����\n4.����\n5.�ݷ�\n \" �� 5���� �׸��� ������ ���� �����⿡ �´� �׸��� ��� �ּ���!\n"); 
  scanf_s("%d", &user_theme);
  getchar();


  if (user_theme == 1 || user_theme == 2 || user_theme == 3 || user_theme == 4|| user_theme == 5) {
      comeuser_theme(user_theme);
  }
  else {
      printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���: ");
  } 


  // ���� ���� ���
  char user_lesson;
  printf("\n\n ---------------------------------------------------\n\n");
  printf("������ ������ ���ðھ��? (������ \"Y\", ������ \"N\"): ");
  scanf_s(" %c", &user_lesson, 1);

  if (user_lesson == 'Y') {
        LessonList();
  }
  else if (user_lesson == 'N') { 
      printf("�����ƿ� ! �׷� ���� �ִ� �ɿ�!");
  }
  else {
      printf("�߸��Է��ϼ̽��ϴ�.");
  }
        
  return 0;
}
