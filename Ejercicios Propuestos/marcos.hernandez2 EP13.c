//Nombre: Marcos Hernández   Fecha: 06/11/2021   Grado: 11°D AM

/* Ejercicio Propuesto 13: Imprimir un rango de números enteros solicitando el inicio y
fin de los valores. */

#include<stdio.h>
#include<conio.h>

int main(){
	int ri, rf; //ri = Rango inicial, rf = Rango final.
	printf("Se imprimira un rango de numeros enteros, solicitados por el usuario.\n\n");
	printf("Introduzca el rango inicial: ");
	scanf("%d",&ri);
	printf("\nIntroduzca el rango final: ");
	scanf("%d",&rf);
	while(ri==rf || ri>rf){
		printf("\n\nError al introducir los datos. Por favor, intente nuevamente: \n\n");
		printf("Introduzca el rango inicial: ");
		scanf("%d",&ri);
		printf("\nIntroduzca el rango final: ");
		scanf("%d",&rf);
	}
	printf("\nSe imprimira los numeros del rango de %d hasta %d:\n", ri, rf);
	sleep(2);
	while(ri<rf+1){
		printf("\nNumero: %d",ri);
		ri++;
		Sleep(20);
	}
	getch();
	return 0;
}
