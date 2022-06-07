//Nombre: Marcos Hernández   Fecha: 15/10/2021   Grado: 11°D AM

/* Ejercicio Propuesto 10: Escribir un programa que muestre el mayor, el menor y la media
de una serie de números introducidos por el teclado. */

#include<stdio.h>
#include<conio.h>

int main(){
	float ni, nma, nme=0, nm, ta; //ni = Número introducido, nma = Número mayor, nme = Numero menor, nm = Numero medio, ta = Total acumulado, 
	int i;  					//i = Acumulador
	printf("Escriba una serie de numeros para encontrar el mayor, el menor y la media.\n(Escriba 0 para detener el programa):\n\n\n");  
	while(ni!=0){	//Usé el número 0 para detener el programa.
		printf("Numero: ");
		scanf("%f", &ni);
		printf("\n");
		if (ni!=0){
			if (ni > nma){
				nma = ni;
			}
			if ((ni < nme || nme == 0)){ 
				nme = ni; 
			}
			i++;
			ta += ni;
		}
	}
	nm = (ta/i);
	printf("\n\n\nEl numero mayor es: %.2f\nEl numero menor es: %.2f\nLa media de los numeros es: %.2f", nma, nme, nm);
	getch();
	return 0;
}
