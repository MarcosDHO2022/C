//Nombre: Marcos Hernández   Fecha: 08/11/2021   Grado: 11°D AM

/* Ejercicio 5.3: Leer números desde el teclado y sumar los primeros cinco impares. */

#include<stdio.h>
#include<conio.h>

int main(){
	float suma=0;      //suma = Guarda la suma de los números impares (Inicia con 0).
	int num, cont=0;  //num = Es el número leído del teclado,   cont = Cuenta la cantidad de números impares (Inicia con 0).
	printf("Se mostrara la suma de los primeros cinco numeros impares introducidos \npor el usuario:\n\n");
	do{
		printf("\nIntroduzca el numero: ");
		scanf("%d", &num);
		if(num % 2!=0){
			suma += num;
			printf("\nEl numero %d es impar.\tTotal acumulado: %.2f\n\n", num, suma);
			cont++;	
		}
	}while(cont<5);
	printf("\n\nLa suma total de los primeros cinco numeros impares es de: %.2f", suma);
	getch();
	return 0;
}
