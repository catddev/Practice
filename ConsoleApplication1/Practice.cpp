#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
	printf("������� ����� �������:\t");
	scanf("%d", &n);

	if (n == 4) {

		int S = 0, T = 0, PM, PT, ST;
		printf("������� ����� ��������:\t");
		scanf("%d", &S);

		printf("���������� ������� ��������:\t");
		scanf("%d", &T);

		PM = S * 5 / 100 / 12;
		PT = PM * T;
		ST = S + PT;

		printf("������� � �������� � �����: %d\n�� ���� ���� ��������: %d\n����� ����� � �������: %d\n", PM, PT, ST);


	}

}