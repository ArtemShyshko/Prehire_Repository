#include "stdio.h"

//Вывод каждого слова с новой строки
int main () 
{
	int a, c = 0;
	while((a = getchar()) != '\n')
	{
		if(a == ' ') c++;
		else c = 0;
		if(c == 1) putchar('\n');
		if(c < 1) putchar(a);
	}
	putchar('\n');
}