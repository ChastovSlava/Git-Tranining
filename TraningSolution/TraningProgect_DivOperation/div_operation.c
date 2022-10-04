#include<stdio.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	float div;
	printf("Введите 2 числа: ");
	scanf_s("%d %d", &a, &b);
	div = a / b;
	if (a == 0) {
		div = abs(a / b);
	}
	else {
		if (b == 0) {
			printf("На ноль делить нельзя\n");
		}
	}
	printf("Целая часть от деления этих чисел: %.0f\n", div);
	system("pause");
	return 0;
}