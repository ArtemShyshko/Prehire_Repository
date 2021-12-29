#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define STR_NUM 5
#define STR_LEN 100

//Сортировка слов по алфавиту
int main() {
	char* a[STR_NUM] = {
		"ZZz\n",
		"zZZ\n",
		"AGG\n",
		"GGA\n",
		"aAA\n",
	};
	char* temp[STR_NUM];

	for(int i = 0; i < STR_NUM; i++){
		printf("%s", a[i]);
	}
	putchar ('\n');
	 
	for(int j = 0; j < STR_NUM-1; j++){
		for(int i = 0; i < (STR_NUM-1-j); i++){
			if (strcmp(a[i], a[i+1]) > 0){
				temp[i] = *(a+i);
				a[i] = *(a+i+1);
				a[i+1] = *(temp+i);
			}			
		}
	}

	for(int i = 0; i < STR_NUM; i++){
		printf("%s", a[i]);	
	}
	putchar ('\n');
	return 0;
}