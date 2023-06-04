#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	//mengalokasikan memori untuk array 5 int
	int* p1 = (int*)malloc(5 * sizeof(int));

	//cara lain untuk melakukan hal yang sama
	int* p2 = (int*)malloc(sizeof(int[5]));

	//cara lain untuk melakukan hal yang sama
	int* p3 = (int*)malloc(5 * sizeof * p3);

	//mengisi array
	for (int i = 0; i < 5; i++) {
		p1[i] = (i + 1) * 10;
	}
		
	//menampilkan array
	for (int i = 0; i < 5; i++) {
		printf("p1[%d] = %d\n", i, p1[i]);
	}
		
	//membatalkan alokasi memori yang dialokasikan sebelumnya
	free(p1);
	free(p2);
	free(p3);

	_getch();
	return 0;
}