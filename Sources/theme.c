#include "theme.h"

void comeuser_theme(int user_theme) {
    int random_num = rand() % 4; //���� �Լ� �𸣴� ����� 2�� �̸� ����
    const char* flower = NULL;
    const char* meaning = NULL;

    // �׸� �� Ȯ���ϴ� ���ǹ�
    if (user_theme == 1) {
        flower = theme_friend[random_num][0];
        meaning = theme_friend[random_num][1];
        printf("%s��(��) �����? �ɸ��� %s �̶��ϴ�!", flower, meaning);
    }
    else if (user_theme == 2) {
        flower = *theme_love[random_num][0];
        meaning = *theme_love[random_num][1];
        printf("%s��(��) �����? �ɸ��� %s �̶��ϴ�!", flower, meaning);
    }
    else if (user_theme == 3) {
        flower = *theme_cheer[random_num][0];
        meaning = *theme_cheer[random_num][1];
        printf("%s��(��) �����? �ɸ��� %s �̶��ϴ�!", flower, meaning);
    }
    else if (user_theme == 4) {
        flower = *theme_thank[random_num][0];
        meaning = *theme_thank[random_num][1];
        printf("%s��(��) �����? �ɸ��� %s �̶��ϴ�!", flower, meaning);
    }
    else if (user_theme == 5) {
        flower = *theme_sad[random_num][0];
        meaning = *theme_sad[random_num][1];
        printf("%s��(��) �����? �ɸ��� %s �̶��ϴ�!", flower, meaning);
    }
}
