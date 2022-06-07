//Nombre: Marcos Hernández   Fecha: 06/11/2021   Grado: 11°D AM

/* Ejercicio Propuesto 11: Mostrar el resultado de sumar los números pares e impares que hay
entre 10 y 125. */

#include<stdio.h>
#include<conio.h>

int main(){
	int i, total=0;    //i = Contador, total = Total acumulado (obtiene su valor del contador).
	printf("Se imprimira la suma de los numeros pares e impares que hay entre 10 y 125:\n\n\n");
	sleep(2);
	printf("///SUMA DE LOS NUMEROS PARES///\n\n");
	sleep(2);
	for(i=10; i<126; i++){
		if(i % 2==0){ //Se verifica si al dividir el número actual por 2 nos da un residuo de 0.
			printf("Numero par: %d\n", i);
			total += i;
			Sleep(30);
		}
	}
	printf("\nLa suma total de los numeros pares es: %d", total);
	total = 0;  //Se reinicia el total
	sleep(2);
	printf("\n\n\n///SUMA DE LOS NUMEROS IMPARES///\n\n");
	sleep(2);
	for(i=10; i<126; i++){
		if(i % 2!=0){  //Se verifica si al dividir el número actual por 2 no nos da un residuo de 0.
			printf("Numero impar: %d\n", i);
			total += i;
			Sleep(30);
		}
	}
	printf("\nLa suma total de los numeros impares es: %d", total);
	getch();
	return 0;
}
