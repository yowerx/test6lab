#include <stdio.h>
#include <Windows.h>

void main() {
	int v1;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Стоимость пиццы пепперони в выбранном заведении в рублях =  ");
	scanf_s("%d", &v1);

	if (v1 < 300)
		printf("Дёшево");
	if (v1 >= 300 && v1 < 450)
		printf("Нормально");
	if (v1 >= 450 && v1 < 800)
		printf("Дорого");
	if (v1 >= 800)
		printf("Очень дорого");
}