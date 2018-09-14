#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "utn.h"
#define BUFFER_STR 4096



#define CANTIDAD_EMPLEADOS 6



int main()
{

    char nombre[CANTIDAD_EMPLEADOS][50] = {"AAA","CCC","BBB"};
    char apellidos[CANTIDAD_EMPLEADOS][50]= {"AAA","CCC","BBB"};;
    char dni[CANTIDAD_EMPLEADOS][50] = {"AAA","CCC","BBB"};

    int i;

    for(i=0; i < CANTIDAD_EMPLEADOS; i++)
    {
        utn_getNombre(nombres[i],50,"\nNombre?","\nError",3);
    }

    for(i=0; i < CANTIDAD_EMPLEADOS; i++)
    {
        printf("\n%s - \n%s - \n%s",nombres,apellidos,dni);
    }
    return 0;
}
}






