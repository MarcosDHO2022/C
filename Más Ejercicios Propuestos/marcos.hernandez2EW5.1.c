//Nombre: Marcos Hernández   Fecha: 08/11/2021   Grado: 11°D AM

/* Ejercicio 5.1: Encontrar cuatro múltiplos de un número cualquiera. */

#include<stdio.h>
#include<conio.h>

int main(){
	int num, numC, cont=0;  //num = Número del que se deben obtener múltiplos,  numC = Número a evaluar,  cont = Cuenta los múltiplos (Inicia con 1).
	printf("Se encontrara cuatro multiplos de un numero cualquiera. \n\n");
	printf("\nIntroduzca el numero para buscar sus multiplos: ");
	scanf("%d", &num);
	while(cont<4){
		printf("\nIntroduzca un numero: ");
		scanf("%d", &numC);
		if(numC % num==0){
			printf("\nEl numero %d es multiplo.\n\n", numC);
			cont++;
		}
	}
	getch();
	return 0;
}
