//Nombre: Marcos Hernández   Fecha: 07/11/2021   Grado: 11°D AM

/* Ejercicio Propuesto 19: Imprimir el factorial de los números comprendidos entre el
2 y el 15. */

#include<stdio.h>
#include<conio.h>

int main(){
	int i, totalf, cntrl; //i = Contador,  totalf = Total del factorial, cntrl = Controlador
	printf("Se imprimira el factorial de los numeros comprendidos entre el 2 y el 15: \n\n");
	for(i=2; i<16; i++){
		cntrl=i;      //La variable "cntrl" obtiene el valor del contador, para tener un límite y así "Controlar" de manera regresiva la multiplicación.
		totalf=1;	  //Se reinicia el valor de "totalf" para tomar en cuenta la siguiente operación.
		while(cntrl>0){     //Se calcula el factorial con el uso de while.
			totalf = totalf*(cntrl);
			cntrl--;  //Se disminuye el valor del controlador para simular la formula del cálculo de factorial.
		}
		printf("\nEl factorial del numero %d es: %d", i, totalf);
		Sleep(30);
	}
	getch();
	return 0;
}
