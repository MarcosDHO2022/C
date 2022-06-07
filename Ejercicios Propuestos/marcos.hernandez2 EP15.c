//Nombre: Marcos Hernández   Fecha: 06/11/2021   Grado: 11°D AM

/* Ejercicio Propuesto 15: Mostrar los números primos entre el 1 y el 125. */

#include<stdio.h>
#include<conio.h>

int main(){
	int i, np, c; //i = Contador, P = Numero primo (Actúa como booleano), c = Contador 2.
	printf("Se imprimiran los numeros primos que hay entre el 1 y el 125:\n");
	sleep(1);
	for(i=2; i<126; i++){   //No se inicia con el número 1 porque no es primo.
		np = 1;
		c = 2;
		while (c <= i / 2 && np){    //Se verifica si el número es primo o no.
			if (i % c == 0){
				np = 0;
			}
			c++;
		}
		if (np){
			printf("\nEl numero %d es primo", i);
			Sleep(30);
		}
	}
	getch();
	return 0;
}
