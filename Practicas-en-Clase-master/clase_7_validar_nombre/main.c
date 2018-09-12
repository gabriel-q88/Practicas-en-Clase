#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "../../../Documentos/utn.h"
#define CANTIDAD 64

//int IngresarNombre(char mensaje[],int string[],int reto[]);


int main()
{


    char nombre[CANTIDAD];
    int i;
    printf("Ingrese un nombre: ");
    fgets(nombre,64,stdin);
    __fpurge(stdin);
    printf("Nombre: %s",nombre);
    int retorno =-1;

    for(i=0; i<CANTIDAD; i++)
    {

        while(nombre[i] != '\n')
        {
            if((nombre[i] != ' ') && (nombre[i] < 'a' || nombre[i] > 'z') && (nombre[i] < 'A' || nombre[i] > 'Z'))
            {
                printf("Denegado\n");
                retorno =-1;

            }
            else
            {
                printf("Aceptado\n");
                retorno = 0;
            }
            i++;
        }
        return retorno;
    }
}
