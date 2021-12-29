#include <stdio.h>

//Гистограммы длинны слов
int main() {
	int a, c = 0;

	while((a = getchar()) != '\n')
	{
		if(a == ' ') c++;
		else c = 0;
		if(c == 1) putchar('\n');
		if(c < 1) putchar('-');
	}
	putchar('\n');
}