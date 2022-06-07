//Nombre: Marcos Hernández   Fecha: 06/11/2021   Grado: 11°D AM

/* Ejercicio Propuesto 16: Imprimir todos los números inferiores a uno introducido
por el teclado. */

#include<stdio.h>
#include<conio.h>

int main(){
	int na; //na = Número actual.
	printf("Introduzca un numero menor a 1 para mantener la repeticion: \n\n");
	na=0;
	while(na<1){
		printf("\nIntroduzca el numero: ");
		scanf("%d", &na);
	}
	printf("\n\nSe introdujo un numero igual o mayor a 1. El programa se detendra.");
	getch();
	return 0;
}
