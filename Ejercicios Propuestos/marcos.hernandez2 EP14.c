//Nombre: Marcos Hernández   Fecha: 06/11/2021   Grado: 11°D AM

/* Ejercicio Propuesto 14: Mostrar el cuadrado de los primeros cinco números naturales. */

#include<stdio.h>
#include<conio.h>
#include<math.h>  //Esta librería es necesaria para sacar el cuadrado con la función "pow".

int main(){
	int i; //i = Contador (Servirá para mostrar la suma de los primeros cinco números naturales).
	printf("Se mostrara el cuadrado de los primeros cinco numeros naturales:\n\n ");
	sleep(1);
	for(i=1; i<6; i++){
		printf("\nNumero: %d    El cuadrado de este numero: %.0f", i, pow(i, 2));   //Imprimí el pow como un valor float porque con 
		Sleep(20);																	//otros tipos de datos no me lo permitía.
	}
	getch();
	return 0;
}
