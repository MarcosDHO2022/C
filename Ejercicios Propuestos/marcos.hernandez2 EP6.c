//Nombre: Marcos Hernández   Fecha: 15/10/2021   Grado: 11°D AM

/* Ejercicio Propuesto 6: Mostrar la suma de los números entre 10 y 125. */

#include<stdio.h>
#include<conio.h>

int main(){
	int i, total=10;    //i = Contador, total = Total acumulado (obtiene su valor del contador).
	printf("Se imprimiran la suma de los numeros entre 10 y 125:\n\n\n");
	sleep(2);
	for(i=11; i<126; i++){
		printf("Total acumulado: %d\n", total);
		total += i;
		Sleep(30);
	}
	printf("Total acumulado: %d  <---\n", total);
	printf("\n\nEl total de la suma de los numeros entre 10 y 125 es: %d", total);
	getch();
	return 0;
}
