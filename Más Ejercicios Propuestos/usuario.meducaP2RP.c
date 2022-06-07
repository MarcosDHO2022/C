//Nombres: Anllelo Acosta, Andrey Mc Kenzie, Fernando Pérez, Aimar Muentes y Marcos Hernández   Fecha: 29/11/2021   Grupo: 11°D AM

/* El programa debe pedir 5 números, para después mostrarlos indicando si están o no por encima de su promedio. 
Al final deberá enviarse un resumen en donde se indique la suma total de los números, y el promedio calculado.   */

#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main(){
    int i=1;
	float na, prom, c=0, n1, n2, n3, n4, n5;
    printf("El programa pedira 5 numeros (que pueden ser decimal o no) para calcular el \npromedio y determinar si estan encima o no de este. Por favor, introduzca \nlos numeros: \n"); 
    while(i<=5){
	   printf("\n\nIntroduzca el %d numero: ", i); scanf("%f",&na);
       switch(i){	
           case 1:  
                n1=na;
			    break;
			    
			case 2:  
                n2=na;
			    break;
			    
			case 3:  
				n3=na;
			    break;
			    
			case 4:  
				n4=na;
			    break;
			    
			case 5:  
				n5=na;
		
		}	
	    c+=na;
	    i++;
    }
    prom=c/5;
    i=1;
    while(i<=5){
    	switch(i){
			case 1:
				if(n1>prom){
					printf("\n\nEl numero %.2f esta encima del promedio", n1);
				}  else {
					printf("\n\nEl numero %.2f esta debajo del promedio", n1);		
				} break;
				    
			case 2:  
				if(n2>prom){
					printf("\nEl numero %.2f esta encima del promedio", n2);
				}  else {
					printf("\nEl numero %.2f esta debajo del promedio", n2);	
				} break;
				    
			case 3:  
				if(n3>prom){
					printf("\nEl numero %.2f esta encima del promedio", n3);
				}  else {
					printf("\nEl numero %.2f esta debajo del promedio", n3);		
				} break;
				    
			case 4:  
				if(n4>prom){
					printf("\nEl numero %.2f esta encima del promedio", n4);
				}  else {
					printf("\nEl numero %.2f esta debajo del promedio", n4);		
				} break;
				    
			case 5:  
				if(n5>prom){
					printf("\nEl numero %.2f esta encima del promedio", n5);
				}  else {
					printf("\nEl numero %.2f esta debajo del promedio", n5);		
				} 
				
		}
		i++;
		sleep(1);
    }
	printf("\n\n\n//Resumen//\n\n");
	printf("Suma total: %.2f\tPromedio: %.2f", c, prom);
	getch();
	return 0;
}
