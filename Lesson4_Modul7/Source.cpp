#include<iostream>
#include<stdio.h>
#include<locale.h>
#include"Header.h"
#include<time.h>


void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	short int n, exit;
	do
	{
		printf("please enter number of a task?: ");
		scanf("%hu", &n);
		switch (n)
		{
		case 1:
		{
			/*������ �������. ����� �������� ��������� ����������� ����� ��� ������������� strcpy, strlen � ������ �� ��������. 
			������� ������ - ������ ��������� �� ������, �������������� �����, � ��������� �� destination �������*/
			char Mass_Old[15] = "1234567890";
			char Mass_New[15] = "0";
			Copy_Mass_Exemple1(Mass_Old, Mass_New);
			Copy_Mass_Exemple2(Mass_Old, Mass_New);
		}
		break;
		case 2:
		{
			/*������ �������: "����������" ������ ��� �����������. �� ����, ���� � ��� ���� "abcdef", 
			�� ����� ���������� ��������� �� ������ �������� "fedcba". � �������� ������� ������ - ��������� �� ������ � ����� ��������������� strlen.*/
			char stroka[] = "abcdef";
			rePrint(stroka);
		}
		default:printf("There is no task! Please enter number of a task\n");
			break;
		}
		printf("To continue? 1-Yes 2-No: ");
		scanf("%hu", &exit);
		printf("\n");
	} while (exit == 1);
}