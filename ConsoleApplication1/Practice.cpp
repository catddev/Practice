#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
	printf("Введите номер задания:\t");
	scanf("%d", &n);

	if (n == 4) {

		int S = 0, T = 0, PM, PT, ST;
		printf("Введите сумму депозита:\t");
		scanf("%d", &S);

		printf("Количество месяцев хранения:\t");
		scanf("%d", &T);

		PM = S * 5 / 100 / 12;
		PT = PM * T;
		ST = S + PT;

		printf("Прибыль с депозита в месяц: %d\nЗа весь срок депозита: %d\nОбщая сумма к выплате: %d\n", PM, PT, ST);


	}

}