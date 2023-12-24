#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void LessonList(const char* user_name, const char* filename) {
	const char* Lessons[] = {
			"꽃을 손에 들고 정말 바라보면 잠시나마 너의 세상이다. - 조지아 오키프",
			"꽃을 보고자 하는 사람에겐 어디에나 꽃이 피어있다. - 앙리 마티스",
			"인생은 꽃과 같고 사랑은 그 속의 꿀과 같다. - 빅토르 휴고",
			"튤립은 누구에게도 깊은 인상을 주려고 애쓰지 않습니다. 장미와 달라지기 위해 애쓰지 않습니다.",
			"꽃은 꽃이 되라고 하지 않았고 나도 내가 되라고 하지 않았다. - 커트 보네거트",
			"모든 꽃을 자를 수는 있지만 봄이 오는 것을 막을 순 없습니다. - 파블로 네루다"
	};

	// 랜덤 수를 뽄는 함수 아직 안배움 --> 미리 4로 배정
	srand((unsigned int)time(NULL)); 
	int randomnum = rand() % 6; 
	const char* Lesson = Lessons[randomnum]; 
	printf("\n%s\n", Lesson);


	FILE* file;

	if (fopen_s(&file, filename, "a") == 0) {
		int result = fprintf(file, "\n<%s님의 꽃과 관련된 명언>\n- %s\n", user_name, Lesson);

		if (result < 0) {
			printf("파일에 쓰는 중 오류가 발생했습니다.\n");
			fclose(file);
			return;
		}
	}

}