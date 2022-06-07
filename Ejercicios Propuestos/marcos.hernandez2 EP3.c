//Nombre: Marcos Hern�ndez   Fecha: 13/10/2021   Grado: 11�D AM

/* Ejercicio Propuesto 3: Realizar una divisi�n y repetir la operaci�n hasta que uno de los n�meros
sea 0. */

#include<stdio.h>
#include<conio.h>

int main(){
	float di, d, r;    		//di = Dividendo,  d = Divisor, r = Resultado
	printf("Se realizara una division y los numeros se iran restando hasta que uno sea 0.");
	printf("\n\nIntroduzca el dividendo: ");
	scanf("%f",&di);
	printf("\nIntroduzca el divisor: ");
	scanf("%f",&d);
	printf("\nDivision inicial: %.0f / %.0f \n\n", di, d);
	printf("\nResta comenzando brevemente...");
	sleep(3); //El programa espera unos 3 segundos.
	system("cls");  //Uso esta funci�n para limpiar la pantalla.
	printf("\nResta hasta que uno de los numeros sea 0:\n\n");
	sleep(2); //El programa espera unos 2 segundos.
	do{
		r = di/d;
		printf("%.0f / %.0f = %.2f\n", di, d, r);
		di -= 1;
		d -= 1;
		Sleep(110);  //El programa espera milisegundos.
	} while (!(di==0 || d==0));
	printf("%.0f / %0.f  <---\n", di, d, r);
	printf("\n\nUltima operacion fue: %.0f / %.0f\n", di, d, r);
	getch();
	return 0;
}
