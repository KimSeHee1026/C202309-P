#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "user_birth.h"
#include "theme.h"
#include "Lesson.h"
#include "userInfo.h"

int main() {
    //�λ�
    printf("-------------------------------------------\n");
    printf("'û���� �ɰ� �Բ�' ���α׷��� ���Ű��� ȯ���մϴ�.'\n");
    printf("���α׷��� ����� ����ڴ��� ���Ͽ� uesr.txt���Ϸ� ����˴ϴ�.\n");
    printf("-------------------------------------------\n\n\n");

    //����� �̸� �ޱ� 

    while (1) {
        // ����� �޴� ��� �� ����
        printf("\n%d. %s���� ź��ȭ�� ����ص帱�Կ�!\n", username);
        printf("%d. %s���� ��Ȳ�� �´� ���� ��õ�ص帱�Կ�!\n", username);
        printf("%d. %s���� ������ ��� ����� �����帱�Կ�!\n", username);
        printf("%d. %s���� ��ó ������ �˷��帱�Կ�!\n", username);
        printf("5. ��ü ����� ������ѵ帱�Կ�!\n");
        printf("6. ���α׷��� �����մϴ�.\n");

        // ������� ������ �޾Ƽ� ������ �۾��� �����ϴ� �ڵ� �߰�
        int choice;
        printf("���ϴ� ����� �������ּ���: ");
        scanf("%d", &choice);

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
            while (getchar() != '\n');
        }

  
        return 0;
    }
}
