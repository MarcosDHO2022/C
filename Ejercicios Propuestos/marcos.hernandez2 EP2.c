//Nombre: Marcos Hern�ndez   Fecha: 13/10/2021   Grado: 11�D AM

/* Ejercicio Propuesto 2: Imprimir la serie de 0 1 1 2 3 5 8 ... n (inicia con 0 1 ,
y el siguiente n�mero es la suma de los dos anteriores) hasta un l�mite definido por 
el usuario. */

#include<stdio.h>
#include<conio.h>

int main(){
	int nl, n1, n2, n3, i;  //nl = N�mero l�mite, n1 = N�mero 1, n2 = N�mero 2, n3 = N�mero 3, i = Contador;
	n1 = 0;
	n2 = 1;  //Se asignan los valores necesarios para el problema.
	n3 = 0;
	printf("Introduzca un numero para imprimir una serie, es decir, los numeros se\niran sumando hasta el limite de numeros introducido.\n");
	printf("\nLimite de numeros: ");
	scanf("%d",&nl);
	printf("\n%d %d", n1, n2);
	for (i=2; i<nl; i++){
		n3 = n1+n2;
		printf(" %d", n3);
		n1 = n2;
		n2 = n3;
		Sleep(20);
	}
	getch();
	return 0;
}
