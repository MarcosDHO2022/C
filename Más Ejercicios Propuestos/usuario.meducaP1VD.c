//Nombres: Anllelo Acosta, Andrey Mc Kenzie, Fernando Pérez, Aimar Muentes y Marcos Hernández   Fecha: 29/11/2021   Grupo: 11°D AM

/* Escribir un programa que visualice el siguiente dibujo.  */

#include<stdio.h>	
#include<conio.h>
#include<windows.h>

void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
}

int main(){
	char ast = '*';     
	int i, j, rv=4;		
	for(i=0; i<=16; i+=2){
		j=17; 
		gotoxy(i,j);
		printf("%c", ast);
		Sleep(100);
		if(i<=8){ 
			for(j=17-i; j<=17+i; j+=2){
				gotoxy(i,j);
				printf("%c", ast);
				Sleep(50); 
			}
		} else {
			for(j=(17-i)+(rv); j<=(17+i)-(rv); j+=2){
				gotoxy(i,j);
				printf("%c", ast);
				Sleep(50);
			}
			rv+=4;
		}
	}
	getch();
	return 0;
} 
