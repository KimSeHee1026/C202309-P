#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void LessonList(const char* user_name, const char* filename) {
	const char* Lessons[] = {
			"���� �տ� ��� ���� �ٶ󺸸� ��ó��� ���� �����̴�. - ������ ��Ű��",
			"���� ������ �ϴ� ������� ��𿡳� ���� �Ǿ��ִ�. - �Ӹ� ��Ƽ��",
			"�λ��� �ɰ� ���� ����� �� ���� �ܰ� ����. - ���丣 �ް�",
			"ƫ���� �������Ե� ���� �λ��� �ַ��� �־��� �ʽ��ϴ�. ��̿� �޶����� ���� �־��� �ʽ��ϴ�.",
			"���� ���� �Ƕ�� ���� �ʾҰ� ���� ���� �Ƕ�� ���� �ʾҴ�. - ĿƮ ���װ�Ʈ",
			"��� ���� �ڸ� ���� ������ ���� ���� ���� ���� �� �����ϴ�. - �ĺ�� �׷��"
	};

	// ���� ���� �ɴ� �Լ� ���� �ȹ�� --> �̸� 4�� ����
	srand((unsigned int)time(NULL)); 
	int randomnum = rand() % 6; 
	const char* Lesson = Lessons[randomnum]; 
	printf("\n%s\n", Lesson);


	FILE* file;

	if (fopen_s(&file, filename, "a") == 0) {
		int result = fprintf(file, "\n<%s���� �ɰ� ���õ� ���>\n- %s\n", user_name, Lesson);

		if (result < 0) {
			printf("���Ͽ� ���� �� ������ �߻��߽��ϴ�.\n");
			fclose(file);
			return;
		}
	}

}