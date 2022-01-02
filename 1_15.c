#include <stdio.h>
#define UP 300
#define LOW 0
#define STEP 20

/*Функция перевода температуры в Фаренгейт*/

float fahr(int);

int main()
{
	for (int t = UP; t >= LOW; t -= STEP)
		printf("%3d\t%6.2f\n", t, fahr(t));
}

float fahr(int temp)
{
	return ((5.0 / 9.0) * (temp - 32));
}