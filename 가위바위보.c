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

		printf("== ���� ���� �� ���� ==\n");
		printf("���ڸ� �����ϼ���(1.����/2.����/3.��) : ");
		scanf_s("%d", &b);
		printf("======���======\n");
		if (b == a) {
			printf("�����ϴ�.\n");
			Sleep(1000);
			system("cls");
		}
		if (b == d&&a == e) {
			printf("����� ������ �½��ϴ�.\n");
			printf("��ǻ�ʹ� ������ �½��ϴ�.\n");
			printf("===================\n");
			printf("��ǻ�Ͱ� �̰���ϴ�.\n");
			Sleep(1000);
			system("cls");
		}
		if (b == e&&a == f) {
			printf("����� ������ �½��ϴ�.\n");
			printf("����� ���� �½��ϴ�.\n");
			printf("===================\n");
			printf("��ǻ�Ͱ� �̰���ϴ�.\n");
			Sleep(1000);
			system("cls");
		}
		if (b == f&&a == d) {
			printf("�����    ����   �½��ϴ�.\n");
			printf("��ǻ�ʹ� ������ �½��ϴ�.\n");
			printf("===================\n");
			printf("��ǻ�Ͱ� �̰���ϴ�.\n");
			Sleep(1000);
			system("cls");
		}
		if (b == d&&a == f) {
			printf("����� ������ �½��ϴ�.\n");
			printf("��ǻ�ʹ� ���� �½��ϴ�.\n");
			printf("===================\n");
			printf("����� �̰���ϴ�.\n");
			Sleep(1000);
			system("cls");
		}
		if (b == e&&a == d) {
			printf("�����   ������  �½��ϴ�.\n");
			printf("��ǻ�ʹ� ������ �½��ϴ�.\n");
			printf("===================\n");
			printf("����� �̰���ϴ�.\n");
			Sleep(1000);
			system("cls");
		}
		if (b == f&&a == e) {
			printf("�����     ����  �½��ϴ�.\n");
			printf("��ǻ�ʹ� ������ �½��ϴ�.\n");
			printf("===================\n");
			printf("����� �̰���ϴ�.\n");
			Sleep(1000);
			system("cls");
		}
		
	}
	return 0;
}