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
        // ����� �޴� ��� �� ����
        printf("\n---------------------------------------------------\n\n");
        printf("1. %s���� ź��ȭ�� ����ص帱�Կ�!\n", user1.name);
        printf("2. %s���� ��Ȳ�� �´� ���� ��õ�ص帱�Կ�!\n", user1.name);
        printf("3. %s���� ������ ��� ����� �����帱�Կ�!\n", user1.name);
        printf("4. %s���� ��ó ������ �˷��帱�Կ�!\n", user1.name);;
        printf("5. ���α׷��� �����մϴ�.\n\n");
        printf("---------------------------------------------------\n\n");

        // ������� ������ �޾Ƽ� ������ �۾��� �����ϴ� �ڵ� �߰�
        int choice;
        printf("���ϴ� ����� �������ּ���: ");
        scanf_s("%d", &choice);

        if (choice == 1) {
            int month, day;
            do {
                printf("������ �Է��ϼ��� (�� ��): ");
                scanf_s("%d�� %d��", &month, &day);

                if (month >= 1 && month <= 12) {
                    if (day >= 1 && day <= 31) {
                        findBirthFlower(month, day, user1.file_name, user1.name);
                        break; // �ùٸ� �Է��� ��� �ݺ��� Ż��
                    }
                    else {
                        printf("�ùٸ� ���� �Է����ּ���.\n");
                    }
                }
                else {
                    printf("�ùٸ� ���� �Է����ּ���.\n");
                }
            } while (1); // ���� ������ ���鼭 ����ڰ� �ùٸ� �Է��� �� ������ ��� �ݺ�
        }
        else if (choice == 2) {
            int user_theme;
            do {
                printf("\n\n --------------------------------------------------------------------------------------\n\n");
                printf("1.����\n2.���\n3.����\n4.����\n5.�ݷ�\n �� 5���� �׸��� ������ ���� �����⿡ �´� �׸��� ��� �ּ���!: ");
                scanf_s("%d", &user_theme);
                getchar();

                if (user_theme <= 5 && user_theme >= 1) {
                    comeuser_theme(user_theme, user1.file_name, user1.name);
                    break; // �ùٸ� �Է��� ��� �ݺ��� Ż��
                }
                else {
                    printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���: ");
                }
            } while (1); // ���� ������ ���鼭 ����ڰ� �ùٸ� �Է��� �� ������ ��� �ݺ�
        }
        else if (choice == 3) {
            char user_lesson;
            do {
                printf("\n\n ---------------------------------------------------\n\n");
                printf("������ �� ����� ���ðھ��? (������ \"Y\", ������ \"N\"): ");
                scanf_s(" %c", &user_lesson, 1);

                if (user_lesson == 'Y') {
                    LessonList(user1.name, user1.file_name); 
                    break; // �ùٸ� �Է��� ��� �ݺ��� Ż��
                }
                else if (user_lesson == 'N') {
                    printf("�����ƿ� ! �׷� ���� �ִ� �ɿ�!");
                    break; // �ùٸ� �Է��� ��� �ݺ��� Ż��
                }
                else {
                    printf("�߸��Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
                }
            } while (1); // ���� ������ ���鼭 ����ڰ� �ùٸ� �Է��� �� ������ ��� �ݺ�
        }
        else if (choice == 4) {
            provideFlowerShop(user1.name, user1.file_name);
            getchar();
        }
        else if (choice == 5) {
            break; // ���α׷� ����
        }
        else {
            printf("�߸��� �����Դϴ�.\n");
        }
    }

    return 0;
}