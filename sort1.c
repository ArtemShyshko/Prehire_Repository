#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 8

//Сортировка случайных чисел
int main() {
	srand(time(NULL));
	int a[SIZE];
	int temp;

	for(int i = 0; i < SIZE; i++){
		a[i] = (rand()%100);		
		printf("%3i", a[i]);	
	}
	putchar ('\n');
	 
	for(int j = 0; j < SIZE-1; j++){
		for(int i = 0; i < (SIZE-1-j); i++){
			if (a[i]>a[i+1]){
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;	
			}	
		}
	}

	for(int i = 0; i < SIZE; i++){
		printf("%3i", a[i]);	
	}
	putchar ('\n');
	return 0;
}