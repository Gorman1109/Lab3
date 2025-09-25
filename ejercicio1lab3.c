#include <stdio.h>
//Universidad de Costa Rica
//Programacion bajo plataformas 
//Ejercicio1 Lab3
int factorial (int n) {
	int i = 1;
	while (n > 1) {
	   i = i * n;
	   n = n - 1;
	}
	return i;
}

int main() {
	int numero;
	//pedir al usuario que ingrese el numero
	printf("Este es un programa que calcula el factorial de un numero.\n");
	printf("Ingrese el numero al que desea calcular el factorial: ");
	scanf("%d", &numero);

	//estructura if para detectar si el numero es menor que cero
	
	if (numero < 0) {
		printf("No se puede calcular el factorial de este numero");
	} 
	else {
	int resultado = factorial(numero);
	printf("%d! = %d\n", numero, resultado);
	}
return 0;
}






//int main (int argc, char *argv []) {
//	int fac4 = factorial(4);
//	int fac5 = factorial(5);
//	printf("4! = %d, 5! = %d\n", fac4, fac5);


