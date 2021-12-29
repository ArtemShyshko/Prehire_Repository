#include <stdio.h>
#define SIZE 10

//Подсчет количества чисел в строке
int main() {
	int a, dig[SIZE];
	
	for(int i = 0; i < SIZE; ++i)
		dig[i] = 0;
	
	while((a = getchar()) != '\n')
		if(a >= '0' && a <= '9')
			dig[a - '0'] = dig[a - '0'] + 1;

	printf("Цифры: ");
	
	for(int i = 0; i < SIZE; ++i)
		printf("%d ", dig[i]);
	
	putchar('\n');
}