//Nombre: Marcos Hernández   Fecha: 15/10/2021   Grado: 11°D AM

/* Ejercicio Propuesto 7: Escribir la suma de la serie 1/2 + 1/3 + 1/4 + ... + 1/20. */

#include<stdio.h>
#include<conio.h>

int main(){
	float i, total;    //i = Contador, total = Total acumulado (obtiene su valor del contador).
	printf("Se imprimira la suma de la serie 1/2 + 1/3 + 1/4 + ... + 1/20:\n\n\n");
	sleep(2);
	for(i=2; i<21; i++){	
		total += (1/i);
		printf("Total acumulado: %.2f (Serie: 1/%.0f)\n", total, i);
		Sleep(30);
	}
	printf("\n\nEl total de la suma de los numeros entre 10 y 125 es: %.2f", total);
	getch();
	return 0;
}
