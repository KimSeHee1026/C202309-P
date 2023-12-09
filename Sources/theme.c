#include "theme.h"

void comeuser_theme(int user_theme) {
    int random_num = rand() % 4; //랜덤 함수 모르는 관계로 2로 미리 저장
    const char* flower = NULL;
    const char* meaning = NULL;

    // 테마 별 확인하는 조건문
    if (user_theme == 1) {
        flower = theme_friend[random_num][0];
        meaning = theme_friend[random_num][1];
        printf("%s은(는) 어떠세요? 꽃말은 %s 이랍니다!", flower, meaning);
    }
    else if (user_theme == 2) {
        flower = *theme_love[random_num][0];
        meaning = *theme_love[random_num][1];
        printf("%s은(는) 어떠세요? 꽃말은 %s 이랍니다!", flower, meaning);
    }
    else if (user_theme == 3) {
        flower = *theme_cheer[random_num][0];
        meaning = *theme_cheer[random_num][1];
        printf("%s은(는) 어떠세요? 꽃말은 %s 이랍니다!", flower, meaning);
    }
    else if (user_theme == 4) {
        flower = *theme_thank[random_num][0];
        meaning = *theme_thank[random_num][1];
        printf("%s은(는) 어떠세요? 꽃말은 %s 이랍니다!", flower, meaning);
    }
    else if (user_theme == 5) {
        flower = *theme_sad[random_num][0];
        meaning = *theme_sad[random_num][1];
        printf("%s은(는) 어떠세요? 꽃말은 %s 이랍니다!", flower, meaning);
    }
}
