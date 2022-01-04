#include <stdio.h>

//Диапазон значений типов данных
int main()
{
	unsigned short a, min, max;
	for (a = 1;; a += a)
	{
		if (a == 0)
		{
			break;
		}
		max = a - 1;
		min = a;
	}
	if (min > 0)
	{
		max += max + 1;
		min = 0;
	}
	printf("%d, %d\n", min, max);
	return 0;
}