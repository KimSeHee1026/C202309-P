#include <stdlib.h>
#include <stdio.h>

void comeuser_theme(int user_theme) {
    //테마 리스트 정의
    const char* theme_friend[][2] = {
   {"라일락(보라색)", "친구의 사랑, 젊은 날의 추억"},
   {"측백", "변함없는 우정"},
   {"장미(노란색)", "우정"},
   {"바이올렛", "영원한 우정"}
    };
    const char* theme_love[][2] = {
        {"리시안셔스", "변치않는 사랑"},
        {"튤립(빨간색)", "사랑을 고백하다"},
        {"소국(보라색)", "내 모든것을 그대에게"},
        {"장미(빨간색)", "열렬한 사랑"}
    };
    const char* theme_cheer[][2] = {
        {"프리지아(노란색)", "당신의 시작을 응원합니다"},
        {"장미(노란색)", "응원"},
        {"메리골드(노란색)", "반드시 오고야 말 행복"},
        {"솔리다고", "성공을 기원합니다"}
    };
    const char* theme_thank[][2] = {
        {"장미(진핑크)", "깊은 감사드립니다!"},
        {"캄파눌라", "감사합니다"},
        {"장미(핑크)", "당신을 존경합니다"},
        {"초롱꽃", "은혜를 보답하려는 마음"}
    };
    const char* theme_sad[][2] = {
        {"양귀비", "위로, 위안"},
        {"크랜베리", "마음의 고통을 위로하다"},
        {"용담", "위로가 되어주는"},
        {"안개꽃", "슬픔"}
    };

    //변수 정의
    const char* theme_flower = NULL; 
    const char* theme_meaning = NULL;

    //랜덤 숫자 
    int random_num = rand() % 4;

    // 테마 별 확인하는 조건문
    if (user_theme == 1) {
        theme_flower = theme_friend[random_num][0];
        theme_meaning = theme_friend[random_num][1];
        printf("%s은(는) 어떠세요? 꽃말은 %s 이랍니다!", theme_flower, theme_meaning);
    }
    else if (user_theme == 2) {
        theme_flower = *theme_love[random_num][0];
        theme_meaning = *theme_love[random_num][1];
        printf("%s은(는) 어떠세요? 꽃말은 %s 이랍니다!", theme_flower, theme_meaning);
    }
    else if (user_theme == 3) {
        theme_flower = *theme_cheer[random_num][0];
        theme_meaning = *theme_cheer[random_num][1];
        printf("%s은(는) 어떠세요? 꽃말은 %s 이랍니다!", theme_flower, theme_meaning);
    }
    else if (user_theme == 4) {
        theme_flower = *theme_thank[random_num][0];
        theme_meaning = *theme_thank[random_num][1];
        printf("%s은(는) 어떠세요? 꽃말은 %s 이랍니다!", theme_flower, theme_meaning);
    }
    else if (user_theme == 5) {
        theme_flower = *theme_sad[random_num][0];
        theme_meaning = *theme_sad[random_num][1];
        printf("%s은(는) 어떠세요? 꽃말은 %s 이랍니다!", theme_flower, theme_meaning);
    }

    return 1;
}
