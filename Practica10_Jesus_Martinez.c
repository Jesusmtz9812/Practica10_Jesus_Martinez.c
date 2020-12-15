// Practica #10 Cruz Martinez Jesus Alberto
//Fecha de entrega: 14 de diciembre

//problema 1

#include <stdio.h>
void main()
{
int N, CONT, AS;
AS=0;
CONT=1;
printf("TECLEA UN NUMERO: ");
scanf("%i",&N);
while(CONT<=N)
{
AS=(AS+CONT);
CONT=(CONT+2);
}
printf("\nEL RESULTADO ES %i\n", AS);
}

/*Problema 2*/
//Librerias 
#include <stdio.h>
//declaracion de funciones
int main()
//Declaracion de variables
{
int i, j;
for(i=1; i<11; i++) //Se corrigio el 10 y puse 11 para que pudiera aparecer la tabla del 10 
{ //Blpque de instrucciones
printf("\nTabla del %i\n", i);
for(j=1; j==10; j++)
{
printf("%i X %i = %i\n", i, j, i*j);
}
}
}
/*Problema 3 */

//Librerias
#include <stdio.h>
#include <math.h>
void main()
{
//Declaracion de variables
    int K, X, AP, N;
    float AS;
  //Bloque de instrucciones
    printf("EL TERMINO GENERICO DE LA SERIE ES: X^K/K");
    printf("\n N= ");
    scanf("%i",&N); //Se coloco un & para leer los datos
    printf("X=");
    scanf("%i",&X); //Se coloco un & para leer la instruccion
    AP=1;
    AS=0;
    while(K<=N) //comparacion mientras n sea mayor que k
    {
   //Operaciones
        AS=pow(X,K)/AP; //Se elimino un AS ya que estaba de mas 
        K=K+1;
        AP=AP*K;
    }
    printf("SUM=%le",AS);//entrega de resultados
}
