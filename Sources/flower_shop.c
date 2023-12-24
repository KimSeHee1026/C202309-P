#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REGION_LENGTH 20
#define MAX_FLOWER_SHOPS_PER_REGION 3
#define MAX_REGIONS 5
#define MAX_FLOWER_SHOPS (MAX_FLOWER_SHOPS_PER_REGION * MAX_REGIONS)

typedef struct {
    char* name;
    char* location;
} FlowerShop;

FlowerShop flowerShopsData[] = {
     {"아뜰리에온화 [장동로 1 장동로 1번길 1층]", "동구"},
    {"플로렌 [ 동명로 26번길 15-1 1층]", "동구"},
    {"꽃디 [동명로 35 1층]", "동구"},
    {"메이비플라워 [ 상일로 24번길 17 1층]", "서구"},
    {"Bloomsbury [ 상무화원로 3번길 6 ]", "서구"},
    {"오월꽃집 [ 시청로 27 1층 101호 ]", "서구"},
    {"민플라워 [ 임방울대로 330 애플타워 105호 ]", "광산구"},
    {"도이브 [ 수완로 9번길 18 ]", "광산구"},
    {"라레브 [ 장신로 20번안길 2 ]", "광산구"},
    {"들로 [ 봉선1로 112 들로 ]", "남구"},
    {"플라워오브유 [ 백서로 71 1층 ]", "남구"},
    {"딥가든[회재로 1290 - 1 2층]", "남구"},
    {"르로제 [ 설죽로 258 1층 ]", "북구"},
    {"꽃이있는집 [ 첨단연신로 133번길 4호반 2단지 ]", "북구"},
    {"꽃피어나 [ 우치로 88 - 1 1층 ]", "북구"} };


//동적메모리 
void getNearbyFlowerShops(const char* region, FlowerShop nearbyShops[MAX_FLOWER_SHOPS_PER_REGION]) {
    int count = 0;
    for (int i = 0; i < MAX_FLOWER_SHOPS; ++i) {
        if (strcmp(region, flowerShopsData[i].location) == 0) {
            // 동적으로 메모리 할당하고 복사
            nearbyShops[count].name = _strdup(flowerShopsData[i].name);
            nearbyShops[count].location = _strdup(flowerShopsData[i].location);
            count++;
            if (count == MAX_FLOWER_SHOPS_PER_REGION) {
                break;
            }
        }
    }
}

void freeFlowerShops(FlowerShop nearbyShops[MAX_FLOWER_SHOPS_PER_REGION]) {
    for (int i = 0; i < MAX_FLOWER_SHOPS_PER_REGION; ++i) {
        free(nearbyShops[i].name);
        free(nearbyShops[i].location);
    }
}

void provideFlowerShop(const char* user_name, const char* filename) {
    FILE* file;
    if (fopen_s(&file, filename, "a") != 0) {
        printf("파일을 열 수 없습니다.\n");
        return;
    }

    char userRegion[MAX_REGION_LENGTH];
    FlowerShop nearbyShops[MAX_FLOWER_SHOPS_PER_REGION];

    int isValidInput = 0; // 올바른 입력인지 여부를 나타내는 플래그

    do {
        printf("사는 지역을 입력하세요 (동구, 서구, 광산구, 남구, 북구): ");
        scanf_s("%s", userRegion, (unsigned)_countof(userRegion));

        for (int i = 0; i < MAX_REGIONS; ++i) {
            if (strcmp(userRegion, flowerShopsData[i * MAX_FLOWER_SHOPS_PER_REGION].location) == 0) {
                isValidInput = 1; // 올바른 입력이면 플래그를 설정하고 루프 탈출
                break;
            }
        }

        if (!isValidInput) {
            printf("올바른 지역을 입력해주세요.\n");
        }
    } while (!isValidInput);

    getNearbyFlowerShops(userRegion, nearbyShops);

    printf("가까운 꽃집 추천 리스트:\n");
    fprintf(file, "\n<%s님의 %s 가까운 꽃집 List>\n", user_name, userRegion);

    for (int i = 0; i < MAX_FLOWER_SHOPS_PER_REGION; ++i) {
        printf("%d. %s (%s)\n", i + 1, nearbyShops[i].name, nearbyShops[i].location);
        fprintf(file, "%d. %s (%s)\n", i + 1, nearbyShops[i].name, nearbyShops[i].location);
    }

    fclose(file);
    // 메모리 해제를 provideFlowerShop 함수가 종료되기 전에 수행
    freeFlowerShops(nearbyShops);
}