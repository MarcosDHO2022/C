//Nombre: Marcos Hern�ndez   Fecha: 15/10/2021   Grado: 11�D AM

/* Ejercicio Propuesto 8: Escribir un programa que muestre el mayor de una serie de n�meros
introducidos por el teclado. */

#include<stdio.h>
#include<conio.h>

int main(){
	int anm, ni;    //anm = Acumulador de n�mero mayor, ni = Numero introducido
	printf("Escriba una serie de numeros para encontrar el mayor introducido\n(Escriba 0 para detener el programa):\n\n\n");  
	while(ni!=0){	//Us� el n�mero 0 para detener el programa.
		printf("Numero: ");
		scanf("%d", &ni);
		printf("\n");
		if (ni > anm){
			anm = ni;
		}
	}
	printf("\n\nEl numero mayor introducido es: %i", anm);
	getch();
	return 0;
}
