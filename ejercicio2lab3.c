#include <stdio.h>
//Universidad de Costa Rica
//Programacion bajo plataformas abiertas
//Ejercicio2 lab3
#define SIZE 3


//Primeramente hacemos una funcion donde definimos la suma de las filas, la diagonal y la columa
int findLargestLine(int matrix[][SIZE]) {
   
    int suma = 0;

    // Suma de la primera fila como referencia
    for (int j = 0; j < SIZE; j++) {
        suma += matrix[0][j];
    }

    // Verificar todas las filas
    for (int i = 0; i < SIZE; i++) {
        int sumaFila = 0;
        for (int j = 0; j < SIZE; j++) {
            sumaFila += matrix[i][j];
        }
        if (sumaFila != suma) return 0;
	// Se hace una comparacion con la primera fila de la referencia para ver si son iguales
    }

    // Verificar todas las columnas
    for (int j = 0; j < SIZE; j++) {
        int sumaCol = 0;
        for (int i = 0; i < SIZE; i++) {
            sumaCol += matrix[i][j];
        }
        if (sumaCol != suma) return 0;
	// Nuevamente se vuelve a comparar para que salga de ciclo
    }

    // Verificar las dos diagonales
    int sumaDiag1 = 0, sumaDiag2 = 0;
    for (int i = 0; i < SIZE; i++) {
        sumaDiag1 += matrix[i][i];
        sumaDiag2 += matrix[i][SIZE - 1 - i];
    }
    if (sumaDiag1 != suma || sumaDiag2 != suma) return 0;
    //Se compara otra vez

    return 1; // es un cuadrado mágico
}

int main() {
    int matrix[SIZE][SIZE] = {
        {8, 3, 4},
        {1, 5, 9},
        {6, 7, 2}
    };
// En esta linea aplicamos la funcion que definimos como findlargestline a la matriz que creamos y la asignamos a largestline
    int largestLine = findLargestLine(matrix);
    
// si todo se cumple entonces se va a ejecutar la funcion como la definimos y va a arrojar el resultado matriz es un cuadrado magico

    if (largestLine)
        printf("La matriz es un  cuadrado magico.\n");
    else
        printf("La matriz no un es cuadrado magico.\n");

    return 0;
}

