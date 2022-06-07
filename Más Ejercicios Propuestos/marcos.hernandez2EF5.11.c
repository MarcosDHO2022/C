//Nombre: Marcos Hernández   Fecha: 08/11/2021   Grado: 11°D AM

/* Ejemplo 5.11: Imprimir todas las letras del alfabeto de forma inversa. */

#include<stdio.h>
#include<conio.h>

int main(){
	char letra;  //letra = Variable de tipo carácter que se usará para imprimir las letras.
	system("cls");  //Se usa este comando para limpiar el contenido de la consola.
	printf("Estas son las letras del alfabeto de forma inversa: \n\n");
	for(letra='Z';letra>='A';letra--)
		printf("%c\t",letra);
	getch();
	return 0;
}
