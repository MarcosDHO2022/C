//Nombre: Marcos Hernández   Fecha: 06/11/2021   Grado: 11°D AM

/* Ejercicio Propuesto 18: Multiplicar entre sí los números entre 1 y 10 y mostrar el
resultado. */

#include<stdio.h>
#include<conio.h>

int main(){
	int i, na=1; //i = Contador,  na = Número actual.
	printf("Se multiplicaran entre si los numeros entre 1 y 10. Al finalizar, se\nmostrara el resultado: \n\n");
	for(i=1; i<10; i++){
		printf("\n%d X %d = ",na, i+1);
		na = na*(i+1);
		printf("%d", na);
		Sleep(60);
	}
	printf("\n\nEl resultado de la multiplicacion entre los numeros 1 y 10 es: %d", na);
	getch();
	return 0;
}
