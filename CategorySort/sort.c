#include <stdio.h>
#include <string.h>
#include <conio.h>
#pragma warning(disable:4996)
//
//int categoryLength(char str[]);
//
//void main_2() {
//	//char useCategory[] = "ASP.NET,Computer Science,Curiosity,JavaScript,Monitoring,Optimism,SQL Server,Windows";
//	char defaultCategory[] = "ASP.NET,Computer Science,Curiosity,JavaScript,Monitoring,Optimism,SQL Server,Windows";
//	char newCategory[50];
//	//char userStr[20];
//	int strlen;
//	
//	printf("%s\n", defaultCategory);
//
//	//printf("test:%s\n", useCategory);
//
//	/*scanf("%s", &userStr);
//	*/
//	strlen = categoryLength(defaultCategory);
//
//	printf("기존 카테고리 문자열 길이 : %d\n", strlen);
//	printf("새로운 카테고리를 입력하세요:");
//
//	scanf("%s", &newCategory);
//
//	strcat(defaultCategory, ",");
//	strcat(defaultCategory, &newCategory);
//	printf("기존 카테고리 문자열 길이 : %s\n", defaultCategory);
//
//	char* token = strtok(defaultCategory, ","); // ","를 구분자로 사용하여 문자열 분할
//	while (token != NULL) {
//		printf("%s\n", token);
//		token = strtok(NULL, ","); // 다음 분할 위치로 이동
//	}
//
//	//printf("test:%d\n", strlen);
//	system("pause");
//	//return getch();
//}
//
//int categoryLength(char str[]) {
//	return strlen(str);
//}