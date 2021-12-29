#include <stdio.h>

//Копирование содержимого одного файла в другой
int main(int argc, char* argv[]) {
	if (argc != 3){
	fprintf(stderr, "Error\n");
	return 1;
	}	
	int c;
	FILE* file1;
	FILE* file2;
	file1 = fopen(argv[1], "r");
	file2 = fopen(argv[2], "w");  
	while ((c = getc(file1)) != EOF){
		putc(c, file2);
	}
	return 0;
}