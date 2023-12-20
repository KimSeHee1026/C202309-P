#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REGION_LENGTH 20
#define MAX_FLOWER_SHOPS_PER_REGION 3
#define MAX_REGIONS 3
#define MAX_FLOWER_SHOPS (MAX_FLOWER_SHOPS_PER_REGION * MAX_REGIONS)

typedef struct {
    char* name;
    char* location;
} FlowerShop;

FlowerShop flowerShopsData[] = { 
     {"�ƶ㸮����ȭ [�嵿�� 1 �嵿�� 1���� 1��]", "����"},
    {"�÷η� [ ����� 26���� 15-1 1��]", "����"},
    {"�ɵ� [����� 35 1��]", "����"},
    {"���̺��ö�� [ ���Ϸ� 24���� 17 1��]", "����"},
    {"Bloomsbury [ ��ȭ���� 3���� 6 ]", "����"},
    {"�������� [ ��û�� 27 1�� 101ȣ ]", "����"},
    {"���ö�� [ �ӹ���� 330 ����Ÿ�� 105ȣ ]", "���걸"},
    {"���̺� [ ���Ϸ� 9���� 18 ]", "���걸"},
    {"�󷹺� [ ��ŷ� 20���ȱ� 2 ]", "���걸"},
    {"��� [ ����1�� 112 ��� ]", "����"},
    {"�ö�������� [ �鼭�� 71 1�� ]", "����"},
    {"������[ȸ��� 1290 - 1 2��]", "����"},
    {"������ [ ���׷� 258 1�� ]", "�ϱ�"},
    {"�����ִ��� [ ÷�ܿ��ŷ� 133���� 4ȣ�� 2���� ]", "�ϱ�"},
    {"���Ǿ [ ��ġ�� 88 - 1 1�� ]", "�ϱ�"} };


//�����޸� 
void getNearbyFlowerShops(const char* region, FlowerShop nearbyShops[MAX_FLOWER_SHOPS_PER_REGION]) {
    int count = 0;
    for (int i = 0; i < MAX_FLOWER_SHOPS; ++i) {
        if (strcmp(region, flowerShopsData[i].location) == 0) {
            // �������� �޸� �Ҵ��ϰ� ����
            nearbyShops[count].name = _strdup(flowerShopsData[i].name);
            nearbyShops[count].location = _strdup(flowerShopsData[i].location);

            // TODO: ������ ���õ� �ʿ��� ���� �߰� ����
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

void provideFlowerShop(void) {
    char userRegion[MAX_REGION_LENGTH];
    FlowerShop nearbyShops[MAX_FLOWER_SHOPS_PER_REGION];

    printf("��� ������ �Է��ϼ��� (����, ����, ���걸, ����, �ϱ�): ");
    scanf_s("%s", userRegion, (unsigned)_countof(userRegion));

    getNearbyFlowerShops(userRegion, nearbyShops);

    printf("����� ���� ��õ ����Ʈ:\n");

    for (int i = 0; i < MAX_FLOWER_SHOPS_PER_REGION; ++i) {
        printf("%d. %s (%s)\n", i + 1, nearbyShops[i].name, nearbyShops[i].location);
        // TODO: ������ ���õ� �ʿ��� ���� ���
    }

    // �޸� ������ provideFlowerShop �Լ��� ����Ǳ� ���� ����
    freeFlowerShops(nearbyShops);
}
