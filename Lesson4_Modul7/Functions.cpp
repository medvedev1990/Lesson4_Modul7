#include<iostream>
#include<stdio.h>
#include<locale.h>
#include"Header.h"
#include<time.h>

int i, j;
void ZappMass(int *mass, int *row)
{
	for (i = 0;i < *row;i++)
		*(mass + i) = 0 + rand() % 20;
}
void PrintMass(int *mass, int *row)
{
	for (i = 0;i < *row;i++)
		printf("%d\t", *(mass + i));
	printf("\n--------------------------------------\n");
}
void SortingMass(int *mass, int *row)
{
	int m;
	for (i = 0;i < *row;i++)
	{
		for (j = *row - 1;j >= i;j--)
		{
			if (*(mass + j) < *(mass + (j - 1)))
			{
				m = *(mass + j);
				*(mass + j) = *(mass + (j - 1));
				*(mass + (j - 1)) = m;
			}
		}
	}
}
void rePrint(char *mass)
{
	for (i = strlen(mass);i >= 0;i--)
	{
		printf("%c", *(mass + i));
	}
	printf("\n");
}
void Copy_Mass_Exemple1(char*mass_Old, char *mass_New)//не понимаю почему не выводит 0
{
	printf("Copy_Mass_Exemple1\n");
	i = 0;
	int flag = 0;
	while (flag == 0)
	{
		*(mass_New + i) = *(mass_Old + i);
		printf("%c", (*mass_New + i));
		if (*(mass_Old + i) == '0')
			flag = 1;
		i++;
	}
	printf("\n\n");
}
void Copy_Mass_Exemple2(char*Mass_Old, char *Mass_New)
{

	//  опируем данные из массива MassOld в массив MassNew
	memccpy(Mass_New, Mass_Old, '0', 10);
	// ¬ывод массива dst на консоль
	printf("Copy_Mass_Exemple2\nMass_New: %s\n", Mass_New);
}