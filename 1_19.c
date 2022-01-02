#include <stdio.h>
#define MAX 100	

int linesize(char l[], int max); //Возвращает размер массива
void reverse(char l[], int max); //Переписывает массив в обратном порядке
void copy(char get[], char set[]); //Копирует одну строку в другую

//Вывод строки в обратном порядке
int main()
{
	char line[MAX];
	int r;
	r = linesize(line, MAX);
	reverse(line, r);
	printf("%s", line);
	putchar('\n');			
	return 0;
}

void copy(char get[], char set[])
{
	int i = 0;
	while((set[i] = get[i]) != '\0')
		++i;
}

void reverse(char l[], int max)
{
	char temp[MAX];
	copy(l, temp);	
	for(int i = max; i >= 0; --i)
		l[i] = temp[max - 1 - i];	
}

int linesize(char l[], int max)
{
	int i, c;
	for(i = 0; i < max && (c = getchar()) != '\n'; ++i)
		l[i] = c;
	return i;
}