//Nombre: Marcos Hernández   Fecha: 13/10/2021   Grado: 11°D AM

/* Ejercicio Práctico: Realice con un símbolo un espiral, iniciando en el centro del monitor,
y hasta que se llene éste; se debe controlar el ancho y alto de cada vuelta, así
como el tamaño máximo a cubrir en el monitor.. */

#include<stdio.h>
#include<windows.h>  //La Libreria "windows.h" es necesaria para resolver el problema, 
#include<conio.h>  	 //ya que gotoxy() no funciona en DEV-C++

void gotoxy(int x,int y){    					//Se establece la función gotoxy(), para poder utilizarla
    HANDLE hcon;  			 				 	//en DEV-C++
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
}  

int main(){
	int i, c, dx, dy, nf, nf2;  //c = Contador, dx = Dirección horizontal, dy = Dirección vertical.
	c = 1;						//nf = Numero final (el que incrementa), nf2 = Numero final 2 (Exclusivo
	dx = 40;    				//para la línea del lado izquierdo)
	dy = 30;	
	nf = 45;	//dx, dy, nf y nf2 ayudan a centrar al espiral y controlar su aspecto.
	nf2 = 45;
	while (c < 17){
		for (i=dx-c; i<nf; i++)   //Linea del lado superior.
		{
			gotoxy((i+1),dy);
			printf("*");
			Sleep(5);
		}
		gotoxy(i,dy);
		printf(" ");
		for (i=dy; i<(nf-14); i++)   //Linea del lado derecho.
		{
			gotoxy(nf,(i+1));
			printf("*");
			Sleep(2);
		}
		for (i=nf; i>((dx-1)-c); i--)   //Linea del lado inferior.
		{
			gotoxy((i-1),(nf-13));
			printf("*");
			Sleep(5);
		}
		for (i=(nf-13); i>(dy-1); i--)   //Linea del lado izquierdo.
		{
			gotoxy((nf2-8),(i-1));
			printf("*");
			Sleep(2);
		}
		dy -= 2;
		dx -= 1;    //Los valores se disminuyen y aumentan para aumentar el tamaño del espiral.
		nf += 2; 
		nf2 -= 2; 
		c++; 		//El contador se aumenta.
	}
	gotoxy(8,0); printf(" ");
	for (i=0; i<25; i++){
		gotoxy(7,i); 
		printf(" ");
	}
	getch();
	return 0;
}
