/*******************************************************************
*
*   Programa:  ~ Calculadora | Trabajo Práctico N° 1.
*
*   Alumno: Elias Leguizamón.
*
*   Curso: 1F.
*
*   Fecha de entrega: 06/04/2017.
*******************************************************************/


#include <stdio.h>
#include <stdlib.h>
# include "milibreria.h"

int main(void)
{
   int numeroUno, numeroDos, opcion;
   int menuOperador;

   numeroUno= 0 ;
   numeroDos= 0 ;

   menu(numeroDos, numeroDos);
   do
        {
            switch(menuOperador)
                {
                    case 1: numeroUno=operadorUno();
                            system("CLS");
                            menu(numeroUno, numeroDos);
                            break;

                    case 2: numeroDos=operadorDos();
                            system("CLS");
                            menu(numeroUno, numeroDos);
                            break;
                }
            todas(opcion, numeroUno, numeroDos);

            printf("\n\n Opcion a elegir: ");
            scanf("%d",&menuOperador);
            system("CLS");
            menu(numeroUno, numeroDos);
        }while(menuOperador!=9);





      return ;
}

