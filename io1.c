#include "stdio.h"

//Не выводит лишние пробелы
int main () 
{
	int a, c = 0;
	while((a = getchar()) != '\n')
	{
		if(a == ' ') c++;
		else c = 0;
		if(c <= 1) putchar(a);
	}
	putchar(a);
	putchar('\n');
}