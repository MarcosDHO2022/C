//Nombre: Marcos Hernández   Fecha: 06/11/2021   Grado: 11°D AM

/* Ejercicio Propuesto 12: Mostrar la suma de 10 números enteros consecutivos. */

#include<stdio.h>
#include<conio.h>

int main(){
	int i, total=0;   //i = Contador, total = Total acumulado.
	printf("Se imprimira la suma de 10 numeros enteros consecutivos: \n\n");
	for(i=1; i<11; i++){
		printf("\n%d + %d = ", total, i);
		total += i;
		printf("%d", total);
		Sleep(30);
	}
	printf("\n\nEl total de la suma de 10 numeros enteros consecutivos es: %d\n", total);
	getch();
	return 0;
}
