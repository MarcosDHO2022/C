//Nombre: Marcos Hern�ndez   Fecha: 08/11/2021   Grado: 11�D AM

/* Ejercicio Propuesto 20: Imprimir un tri�ngulo is�sceles. */

#include<stdio.h> 		//La Libreria "windows.h" es necesaria para resolver el problema,
#include<conio.h> 		//ya que gotoxy() no funciona en DEV-C++
#include<windows.h> 

void gotoxy(int x,int y){    					//Se establece la funci�n gotoxy(), para poder utilizarla
    HANDLE hcon;  			 				 	//en DEV-C++
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
}  
int main(){
	int dx, dy;		//dx = Direcci�n horizontal, dy = Direcci�n vertical.
	for (dx=40; dx<60; dx++){   	//Escribir los asteriscos en el lado derecho.			
		gotoxy(dx,dy); 	printf("*");
		dy++;
		Sleep(50);
	}
	for (dx=60; dx>20; dx--){   	//Escribir los asteriscos en el lado inferior.
		gotoxy(dx,dy); 	printf("*");
		Sleep(50);
	}
	for (dx=20; dx<40; dx++){   	//Escribir los asteriscos en el lado izquierdo.
		gotoxy(dx,dy); 	printf("*");
		dy--;
		Sleep(50);
	}
	gotoxy(19, 25); printf("Se acaba de imprimir un triangulo isosceles.");  //Mensaje para indicar que se acaba de imprimir.
	getch();
	gotoxy(0, 28); //Uso esta funci�n, al final, para evitar que el mensaje de finalizaci�n se ponga en frente del tri�ngulo is�sceles.
	return 0;
}
