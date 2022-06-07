//Nombre: Marcos Hernández   Fecha: 13/10/2021   Grado: 11°D AM

/* Ejercicio Propuesto 5: Mostrar un "*" rebotando por la pantalla hasta presionar una tecla. */

#include<stdio.h> 		//La Libreria "windows.h" es necesaria para resolver el problema,
#include<conio.h> 		//ya que gotoxy() no funciona en DEV-C++
#include<windows.h> 

void gotoxy(int x,int y){    					//Se establece la función gotoxy(), para poder utilizarla
    HANDLE hcon;  			 				 	//en DEV-C++
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
}  

int main(){
	int dx, dy; //dx = Dirección horizontal, dy = Dirección vertical.
	while (!kbhit()){  //Esta función (kbhit) es parte de conio.h. El único problema es que el asterisco debe rebotar
		dy = 0;		   //completamente para terminar el programa.
		dx = 0;
		for (dx=0; dx<29; dx++)   			//Asterisco rebotando.   Nota: Hay varios "for" porque se realizan
		{									//múltiples movimientos.
			gotoxy(dx,dy); 	printf("*");
			dy++;
			gotoxy((dx-1),(dy-2)); 	printf(" ");
			Sleep(5);
		}
		for (dx=29; dx<58; dx++)  
		{
			gotoxy((dx-1),(dy-1)); 	printf("*");
			dy--;
			gotoxy((dx-2),(dy+1)); 	printf(" ");
			Sleep(5);
		}
		for (dx=56; dx<80; dx++)
		{
			gotoxy(dx,dy); 	printf("*");
			dy++;
			gotoxy((dx-1),(dy-2)); 	printf(" ");
			Sleep(5);
		}
		for (dx=78; dx>73; dx--)   //De regreso
		{
			gotoxy(dx,dy); printf("*");
			dy++;
			gotoxy((dx+1),(dy-2)); 	printf(" ");
			Sleep(5);
		}
		for (dx=75; dx>46; dx--) 
		{
			gotoxy(dx,dy); printf("*");
			dy--;
			gotoxy((dx+1),(dy+2)); 	printf(" "); 
			Sleep(5);
		}
		for (dx=44; dx>18; dx--)   
		{
			gotoxy((dx+3),(dy+1)); printf("*");
			dy++;
			gotoxy((dx+4),(dy-1)); 	printf(" ");
			Sleep(5);
		}
		for (dx=22; dx>9; dx--)  
		{
			gotoxy(dx,dy); printf("*");
			dy--;
			dy--;
			gotoxy((dx+1),(dy+4)); 	printf(" ");
			Sleep(5);
	 	}
	 	system("cls");
	}
	getch();
	return 0;
}
