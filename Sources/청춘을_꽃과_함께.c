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
        // ����� �޴� ��� �� ����
        printf("1. %s���� ź��ȭ�� ����ص帱�Կ�!\n", user1.name);
        printf("2. %s���� ��Ȳ�� �´� ���� ��õ�ص帱�Կ�!\n", user1.name);
        printf("3. %s���� ������ ��� ����� �����帱�Կ�!\n", user1.name);
        printf("4. %s���� ��ó ������ �˷��帱�Կ�!\n", user1.name);;
        printf("5. ��ü ����� ������ѵ帱�Կ�!\n");
        printf("6. ���α׷��� �����մϴ�.\n");

        // ������� ������ �޾Ƽ� ������ �۾��� �����ϴ� �ڵ� �߰�
        int choice;
        printf("���ϴ� ����� �������ּ���: ");
        scanf_s("%d", &choice);

        // TODO: ���ÿ� ���� ������ ����� �����ϴ� �ڵ� �߰�
        if (choice == 1) {
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
        }
        if (choice == 2) {
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
        if (choice == 3) {
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
        }
        if (choice == 4) {
            printf("������");
        }
        return 0;
        }
    }
}