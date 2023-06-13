//MKR2_5.c Обрахунок суми модулів елементів масиву (з використанням функцій)
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void Input_Arr(int N, int *a);
void Out_Arr(int N, int *a);
int Sum_abs_Arr(int N, int *a);
int N;

void main(void)
{
	system("chcp 1251");
	system("cls");
	setlocale(LC_CTYPE, "ukr");

	printf("\n Введiть кількість елементiв масиву N= "); scanf("%d", &N);
	int *a = (int*)calloc(N, sizeof(int));
	Input_Arr(N, a);
	Out_Arr(N, a);
	printf("\n Сума модулiв елементiв масива становить %d", Sum_abs_Arr(N, a));

	int getch(); getch();
	free(a);
	return 0;
}
//Функція - ініціалізації масива розміром N з клавіатури.
void Input_Arr(int N, int *a)
{
	printf("\n Введiть значення елементiв масиву A: \n");
	for (int i = 0; i < N; i++)
	{
		printf("\t а[%d]=", i + 1); scanf("%d", &a[i]);
	}
	system("cls");
}
//Функція виведення одномірного масиву на екран розміром N
void Out_Arr(int N, int *a)
{
	printf("\n Ви ввели вектор A[1,%d] = {", N);
	for (int i = 0; i < N; i++)
		printf("%d, ", a[i]);
	printf("\b\b}");
}
//Функція підрахунку суми модулів елементів масиву
int Sum_abs_Arr(int N, int *a)
{
	int S = 0;
	for (int i = 0; i < N; i++)
		S += abs(a[i]);
	return S;
}
