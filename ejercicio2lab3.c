#include <stdio.h>

//Universidad de Costa Rica
//Programacion bajo plataformas abiertas
//Ejercicio2 lab3



#define size 5

int findLargesLine(int matrix[3][3]) {
		{8, 3, 4},
		{1, 5, 9},
		{6, 7, 2}
	

}

int main() {
	int matrix [3][3] = {
		{2, 7, 6},
		{9, 5, 1},
		{4, 3, 8}
	};

	int largestLine = findLargesLine(matrix);
	printf("El tamano de la secuencia de ls es mas grande es: %d\n", largestLine);
	

	return 0;
}


