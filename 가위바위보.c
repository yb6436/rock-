#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {

	int a, b, c;
	int d = 1;
	int e = 2;
	int f = 3;
	int g;
	int h;
	int i;

	while (1) {
		srand(time(NULL));
		rand(); rand(); rand(); rand();
		srand(rand());
		a = rand() % 3 + 1;

		printf("== 가위 바위 보 게임 ==\n");
		printf("숫자를 선택하세요(1.가위/2.바위/3.보) : ");
		scanf_s("%d", &b);
		printf("======결과======\n");
		if (b == a) {
			printf("비겻습니다.\n");
			Sleep(1000);
			system("cls");
		}
		if (b == d&&a == e) {
			printf("당신은 가위를 냈습니다.\n");
			printf("컴퓨터는 바위를 냈습니다.\n");
			printf("===================\n");
			printf("컴퓨터가 이겼습니다.\n");
			Sleep(1000);
			system("cls");
		}
		if (b == e&&a == f) {
			printf("당신은 바위를 냈습니다.\n");
			printf("당신은 보를 냈습니다.\n");
			printf("===================\n");
			printf("컴퓨터가 이겼습니다.\n");
			Sleep(1000);
			system("cls");
		}
		if (b == f&&a == d) {
			printf("당신은    보를   냈습니다.\n");
			printf("컴퓨터는 가위를 냈습니다.\n");
			printf("===================\n");
			printf("컴퓨터가 이겼습니다.\n");
			Sleep(1000);
			system("cls");
		}
		if (b == d&&a == f) {
			printf("당신은 가위를 냈습니다.\n");
			printf("컴퓨터는 보를 냈습니다.\n");
			printf("===================\n");
			printf("당신이 이겼습니다.\n");
			Sleep(1000);
			system("cls");
		}
		if (b == e&&a == d) {
			printf("당신은   바위를  냈습니다.\n");
			printf("컴퓨터는 가위를 냈습니다.\n");
			printf("===================\n");
			printf("당신이 이겼습니다.\n");
			Sleep(1000);
			system("cls");
		}
		if (b == f&&a == e) {
			printf("당신은     보를  냈습니다.\n");
			printf("컴퓨터는 바위를 냈습니다.\n");
			printf("===================\n");
			printf("당신이 이겼습니다.\n");
			Sleep(1000);
			system("cls");
		}
		
	}
	return 0;
}