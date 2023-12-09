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
    //�λ�
    printf("-------------------------------------------\n");
    printf("'û���� �ɰ� �Բ�' ���α׷��� ���Ű��� ȯ���մϴ�.'\n");
    printf("���α׷��� ����� ����ڴ��� ���Ͽ� uesr.txt���Ϸ� ����˴ϴ�.\n");
    printf("-------------------------------------------\n\n\n");

    //����� �̸� �Է¹ޱ�
    char uesr_name;
    printf("����ڴ��� �̸��� �Է����ּ���!");
    while (1) {
        printf("1. ����ڴ��� ź��ȭ�� ����ص帱����!"); 
        printf("2. ����ڴ��� ��Ȳ�� �´� ���� ��õ�ص帱����!"); 
        printf("3. ����ڴ��� ������ ��� ����� �����帱����!");
        printf("4. ����ڴ��� ��ó ������ �˷��帱����!");
        printf("5. ��ü ����� ������ѵ帱�Կ�!");
    }

 
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
    }
    else {
        printf("�ùٸ� ���� �Է����ּ���.\n");
    }

    // ����ڰ� ���ϴ� �׸��� ��� ������ ���� ��õ���ִ� ���
    int user_theme;
    printf("""\n\n --------------------------------------------------------------------------------------\n\n");
    printf("1.����\n2.���\n3.����\n4.����\n5.�ݷ�\n \" �� 5���� �׸��� ������ ���� �����⿡ �´� �׸��� ��� �ּ���!: ");
    scanf_s("%d", &user_theme);

    if (user_theme <= 5 && user_theme >= 1) {
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
