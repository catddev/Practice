#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>


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

		printf("Прибыль с депозита в месяц: %d \nЗа весь срок депозита: %d \nОбщая сумма к выплате: %d \n", PM, PT, ST);

	}

	else if (n == 8) {

		int a = 0, b = 0, c, S;
		printf("a=");
		scanf("%d", &a);

		printf("b=");
		scanf("%d", &b);

		c = sqrt(a*a + b*b);
		S = a*b / 2;

		printf("гипотенуза равна %d \nплощадь равна %d \n", c, S);

	}
	else if (n == 9) {

		int r = 0, R = 0;
		float p = 3.14, S;

		printf("r=\t");
		scanf("%d", &r);

		printf("R=\t");
		scanf("%d", &R);

		S = p*(R*R - r*r);
		printf("S=%f\n", S);

	}

	else if (n == 10){

		printf("1 13 49\n");

	}

	else if (n == 15) {

		int R = 0;
		printf("R=");
		scanf("%d", &R);

		double p = 3.14, L, S;
		
		L = 2 * p*R;
		S = p*R*R;

		printf("L=%f \nS=%f\n", L, S);

	}

	else {

		printf("нет заданий\n");
	}
}