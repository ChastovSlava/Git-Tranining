#include<stdio.h>
#include<malloc.h>
#include<locale.h>
int generate(int* mass, int size);
void a(int* mass, int size);


int main() {
	setlocale(LC_ALL, "rus");
	int* mass;
	int size, flag = 0, numb;
	while (!flag) {
		printf("1) Задать массив.\n2) Просмотреть текущий массив.\n");
		scanf_s("%d", &numb);
		system("cls");
		if (numb==1) {
			printf("Введите кол-во эл-ов массива: ");
			scanf_s("%d", &size);
			system("cls");
			mass = (int*)malloc(sizeof(int) * size);
			mass= generate(mass, size);
		}
		else {
			if (numb== 2) {
				a( mass,  size);
			}
		}
	}
	return 0;
}


int generate(int* mass1, int size) {
	for (int i = 0; i < size; ++i) {
		mass1[i] = rand() % 21;
	}
	return mass1;
}
void a(int *mass, int size) {
	for (int i = 0; i < size; ++i) {
		printf("%d ", mass[i]);
	}
}