//Nombre: Marcos Hernández   Fecha: 06/11/2021   Grado: 11°D AM

/* Ejercicio Propuesto 17: Imprimir en pantalla los múltiplos de 5 que hay entre 1
y 1000. */

#include<stdio.h>
#include<conio.h>

int main(){
	int i; //i = Contador (Servirá para ir mostrando los resultados).
	printf("Se mostrara en pantalla los multiplos de 5 que hay entre 1 y 1000: \n\n");
	for(i = 1; i<1001; i++){
		if(i % 5==0){  //Se verifica si al dividir el número actual por 5 nos da un residuo de 0.
			printf("\nEl numero %d es multiplo de 5");
			Sleep(30);
		}
	}
	getch();
	return 0;
}
