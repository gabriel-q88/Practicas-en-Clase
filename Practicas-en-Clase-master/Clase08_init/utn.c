#include <stdio_ext.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "utn.h"
#define BUFFER_STR 4096

/**
    utn_getNombre :
    @param
    @param
    @return
*/
int utn_getNombre(char* pNombre,int limite, char*mensaje, char* mensajeError,int reintentos)
{
    int retorno=-1;
    char bufferNombre[BUFFER_STR];
    if(pNombre!= NULL && limite>0 && mensaje != NULL && mensajeError != NULL && reintentos>=0)
    {
        do
        {
            reintentos--;
            printf("%s",mensaje);
            if(getString(bufferNombre,limite && isValidNombre(bufferNombre)))
        {
            strncpy(pNombre,bufferNombre,limite);
                retorno =0;
                break;
            }
            else
            {
                printf("%s",mensajeError);
            }
        }
        while(reintentos >= 0);

    }
}
/**
    utn_getNombre :
    @param
    @param
    @return
*/
int getString(char* pBuffer, int limite)

{
    int retorno =-1;
    char buffer[BUFFER_STR];
    int len;
    if(pBuffer!= NULL, limite>0)
    {

        __fpurge(stdin);
        fgets(pBuffer,limite,stdin);//lee archivos del flujo de ingreso del teclado...
        len = strlen(buffer);
        if (len != limite-1  || buffer[limite-2]== '\n' )
        {
            buffer[len-1]= '\0';
        }
        retorno = 0;
        strncpy(pBuffer,buffer,limite);
    }



    return retorno;
}




int isValidNombre(char* pBuffer,int limite)//funciones con is devuelven v o f (0 o 1)...
{
    int retorno = 0;
    int i;
    if(pBuffer != NULL,limite > 0)
    {
        retorno = 1;
        for (i=0; i < limite && pBuffer[i] != '\0'; i++)
        {
            if(tolower(pBuffer[i]) < 'a' || tolower(pBuffer[i]) > 'z')
            {
                retorno = 0;
                break;

            }

        }

    }
    return retorno;
}



/**
    utn_getNombre :
    @param
    @param
    @return
*/



















