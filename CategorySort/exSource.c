#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)

int compare_string(const void* a, const void* b);

void main() {

	// 문자열 배열을 만든다.
	char category[][21] = {"ASP.NET", "ComputerScience", "JavaScript",  "Curiosity", "Monitoring", "Optimism", "SQLServer", "Windows", "Tool", "Trip", "SocialInfrastructure", "Cafe"};

	// 배열, 요소 개수, 크기, 비교
	// 144 / 16 = 9개
	// 요소 크기 : 16 
	//printf("%d\n", sizeof(category[0]));
	qsort(category, sizeof(category)/sizeof(category[0]), sizeof(category[0]), compare_string);

	for (int i = 0; i < 12; i++)
	{
		printf("%d : %s \n", i + 1, category[i]);
	}
	//printf("\n");

	system("pause");

}

int compare_string(const void* a, const void* b) {
	// 두 문자열을 비교해서 반환한다.
	return strcmp((char*)a, (char*)b);
}