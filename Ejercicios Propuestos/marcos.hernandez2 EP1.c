//Nombre: Marcos Hernández   Fecha: 13/10/2021   Grado: 11°D AM

/* Ejercicio Propuesto 1: Imprimir los números del 1 al 100. */

#include<stdio.h>
#include<conio.h>


int main(){
	int i;  //i = Contador
	printf("Los numeros del 1 al 100: \n\n");
	for (i=1; i<101; i++){
		printf("%i\n", i);
		Sleep(10);
	}
	getch();
	return 0;
}
