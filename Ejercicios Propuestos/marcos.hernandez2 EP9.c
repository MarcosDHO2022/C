//Nombre: Marcos Hernández   Fecha: 15/10/2021   Grado: 11°D AM

/* Ejercicio Propuesto 9: Calcular la suma de una serie de números leídos por teclado. */

#include<stdio.h>
#include<conio.h>

int main(){
	int an, ni=1, i=0;    //an = Acumulador de número, ni = Numero introducido, i = Contador.
	printf("Escriba una serie de numeros para calcular su total\n(Escriba 0 para detener el programa):\n\n\n");  
	while(ni!=0){	//Usé el número 0 para detener el programa.
		printf("Numero: ");
		scanf("%d", &ni);
		an += ni;
		if (ni!=0){
			printf("\nTotal acumulado: %d\n\n\n", an);
			i++;
		}
	}
	printf("\n\n\nEl total acumulado de los %i numeros introducidos es: %d", i, an);
	getch();
	return 0;
}
