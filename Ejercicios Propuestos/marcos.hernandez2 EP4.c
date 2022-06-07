//Nombre: Marcos Hernández   Fecha: 14/10/2021   Grado: 11°D AM

/* Ejercicio Propuesto 4: Imprimir los colores usando los números del 1 al 100 con
la función textcolor(). */

/* Nota importante: textcolor() no funciona en este compilador, al menos con lo que
investigué. En su lugar, se establece la función "SetColor" para su reemplazo.*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>   //windows.h es necesario para establecer la función SetColor.

void SetColor(int ForgC)   //Se establece el reemplazo de textcolor().
 {
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }

int main(){
	int i;    //i = Contador
	printf("Se imprimiran los colores del rango del 1 al 100:\n\n\n");
	sleep(2);
	for(i=1; i<101; i++){
		SetColor(i); printf("COLOR");
		Sleep(30);
	}
	SetColor(7);
	getch();
	return 0;
}
