#include <stdio.h>
#include <stdlib.h>
# include "milibreria.h"



/**
 * @brief Vista del menu.
 * @param A - Primer numero.
 * @param B - Segundo numero.
 * @return Retorna valores (nUno^nDos) en el mismo.
 */
int menu(int nUno, int nDos)
{
    printf("\n \n MENU \n --------------------------------- \n");
    printf("\n 1 - INGRESAR EL PRIMER NUMERO (A=%d)\n 2 - INGRESAR EL SEGUNDO NUMERO (B=%d) \n 3 - SUMA <A+B> \n 4 - RESTA <A-B> \n 5 - MULTIPLICACION <A*B> \n 6 - DIVISION <A/B> \n 7 - FACTORIAL <B!> \n 8 - TODAS LAS OPERACIONES \n 9 - SALIR\n \n---------------------------------", nUno, nDos);
    printf("\n \nSeleccione entres las opciones '1' y '2' \npara elegir los numeros de (A^B) y las operaciones \nse llevaran a cabo automaticamente\n \n---------------------------------");
    return 0;
}

/**
 * @brief  Solicita un numero y lo retorna (numeroUno).
 * @return Retorna un numero entero ingresado.
 */

int operadorUno()
    {
        int nUno;
        printf("\n\n Ingrese el primer numero:");
        scanf("%d", &nUno);
        return nUno;
    }



/**
 * @brief  Solicita un numero y lo retorna (numeroDos).
 * @return Retorna un numero entero ingresado.
 */

int operadorDos()
    {
        int nDos;
        printf("\n\n Ingrese el segundo numero:");
        scanf("%d", &nDos);
        return nDos;
    }


/**
 * @brief Realiza la operacion de sumar (A^B).
 * @param A - Primer numero.
 * @param B - Segundo numero.
 * @return Retorna el resultado de (A^B) en el mismo.
 */

 int suma(int numeroUno, int numeroDos)
    {
        int resultado;

        resultado= numeroUno + numeroDos ;
        printf("\n\n El resultado de la suma de %d y %d es %d", numeroUno, numeroDos, resultado );
        return resultado;
    }


/**
 * @brief Realiza la operacion de restar (A^B).
 * @param A - Primer numero.
 * @param B - Segundo numero.
 * @return Retorna el resultado de (A^B) en el mismo.
 */

 int resta(int numeroUno, int numeroDos)
    {
        int resultado;

        resultado= numeroUno - numeroDos ;
        printf("\n\n El resultado de la resta de %d y %d es %d", numeroUno, numeroDos, resultado);
        return resultado;
    }


/**
 * @brief Realiza la operacion de multiplicar (A^B).
 * @param A - Primer numero.
 * @param B - Segundo numero.
 * @return Retorna el resultado de (A^B) en el mismo.
 */

 int multiplicacion(int numeroUno, int numeroDos)
    {
        int resultado;

        resultado= numeroUno * numeroDos ;
        printf("\n\n El resultado de la multiplicacion de %d y %d es %d", numeroUno, numeroDos, resultado);
        return resultado;
    }


/**
 * @brief Realiza la operacion de dividir (A^B).
 * @param A - Primer numero.
 * @param B - Segundo numero.
 * @return Retorna el resultado de (A^B) en el mismo.
 */

 int divicion(int numeroUno, int numeroDos)
    {
        int resultado;

        if(numeroDos==0)
            {
                printf("ERROR, la operacion es invalida");
                return 0;
            }

        resultado= numeroUno / numeroDos ;
        printf("\n\n El resultado de la divicion de %d y %d es %d", numeroUno, numeroDos, resultado);
        return resultado;
    }


/**
 * @brief Realiza la operacion de factorizar (A!).
 * @param A - Primer numero.
 * @return Retorna el resultado de (A!) en el mismo.
 */

 int factorial(int numeroUno)
    {
        int acumulador=1;
        int antecesores;

        if(numeroUno>=0)
            {
                for(antecesores=numeroUno ; antecesores>0 ; antecesores--)
                    {
                        acumulador *= antecesores ;
                    }
                printf("\n\n El factorial de %d es %d.", numeroUno, acumulador);
                return acumulador;
            }
        else
            {
                printf("\n\n Error, la operacion es invalida");
                return 0;
            }

    }


/**
 * @brief Realiza las operaciones de suma, resta, multiplicacion, division, factorial, todas las anteriores y la salida del programa.
 * @param opcion - Opcion elegida por el usuario (Operacion)
 * @param A - Primer operando.
 * @param B - Segundo operando.
 * @return Retorna el total de cada operación según el caso elegido.
 */

 int todas(int opcion, int numeroUno, int numeroDos)
 {
     switch( opcion )
         {
         case 3: suma(numeroUno, numeroDos);
                 break;

         case 4: resta(numeroUno, numeroDos);
                 break;

         case 5: multiplicacion(numeroUno, numeroDos);
                 break;

         case 6: divicion(numeroUno, numeroDos);
                 break;

         case 7: factorial(numeroUno);
                 break;

         case 8: suma(numeroUno, numeroDos);
                 resta(numeroUno, numeroDos);
                 multiplicacion(numeroUno, numeroDos);
                 divicion(numeroUno, numeroDos);
                 factorial(numeroDos);
                 break;

         case 9: exit(0);
         }//switch( opcion )

         return 0;
 }

