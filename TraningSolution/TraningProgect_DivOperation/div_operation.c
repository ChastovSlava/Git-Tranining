#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	float div;
	printf("������� 2 �����: ");
	scanf_s("%d %d", &a, &b);
	div = a / b;
	if (a == 0) {
		div = abs(a / b);
	}
	else {
		if (b == 0) {
			printf("�� ���� ������ ������\n");
		}
	}
	printf("����� ����� �� ������� ���� �����: %.0f\n", div);
	system("pause");
	return 0;
}