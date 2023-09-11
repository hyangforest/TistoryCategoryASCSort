#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)

int compare_string(const void* a, const void* b);

void main() {

	// ���ڿ� �迭�� �����.
	char category[][21] = {"ASP.NET", "ComputerScience", "JavaScript",  "Curiosity", "Monitoring", "Optimism", "SQLServer", "Windows", "Tool", "Trip", "SocialInfrastructure", "Cafe"};

	// �迭, ��� ����, ũ��, ��
	// 144 / 16 = 9��
	// ��� ũ�� : 16 
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
	// �� ���ڿ��� ���ؼ� ��ȯ�Ѵ�.
	return strcmp((char*)a, (char*)b);
}