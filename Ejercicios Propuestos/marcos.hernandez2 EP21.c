//Nombre: Marcos Hernández   Fecha: 07/11/2021   Grado: 11°D AM

/* Ejercicio Propuesto 21: Imprimir los múltiplos de un número entre 1 y 10, menores
que 125. */

#include<stdio.h> 
#include<conio.h>

int main(){
	int i=1, mult=0, ni, nci=0;    //i = Controlador (Se inicia en 1 para evitar que nos de un 0 como un múltiplo),  mult = Múltiplo,  ni = Número introducido,  nci = Número correcto introducido.
	printf("Se imprimiran los multiplos de un numero entre 1 y 10, menor que 125\n\n");
	while(nci<1){   //Se asegura que el número, en el rango indicado, sea introducido.
		printf("\nIntroduzca un numero entre el rango del 1 hasta el 10: ");
		scanf("%d", &ni);
		if(ni>=1 && ni<=10){
			nci=1;
		}
	}
	printf("\n\n///Multiplos del numero %d, menores que 125///\n\n", ni);
	sleep(2);
	while(mult<(125-ni)){  //Se calculan los múltiplos de un numero introducido con la siguiente formula y rango (125).
		mult = ni*i;
		printf("\n%d X %d = ", ni, i);
		i++;
		printf("%d", mult);
		Sleep(30);
	}
	getch();
	return 0;
}
