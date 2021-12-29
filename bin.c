#include <stdio.h>

//Вывод числа в двоичном виде
int main() {
	short a;
	scanf("%hi", &a);
	for(int i = (sizeof(a)*8)-1; i >= 0; --i){
		putchar('0' + ((a>>i) & 1));
		if (i%8 == 0)
			putchar(' '); //Отступы между разрядами
	}
	putchar('\n');
	return 0;
}