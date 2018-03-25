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
			/*ѕервый вариант. Ќужно написать программу копировани€ строк без использовани€ strcpy, strlen и прочих им подобным. 
			¬ходные данные - только указатель на строку, оканчивающуюс€ нулем, и указатель на destination область*/
			char Mass_Old[15] = "1234567890";
			char Mass_New[15] = "0";
			Copy_Mass_Exemple1(Mass_Old, Mass_New);
			Copy_Mass_Exemple2(Mass_Old, Mass_New);
		}
		break;
		case 2:
		{
			/*¬торой вариант: "развернуть" строку при копировании. “о есть, если у нас есть "abcdef", 
			то после выполнени€ программы мы должны получить "fedcba". ¬ качестве входных данных - указатель на строку и можно воспользоватьс€ strlen.*/
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