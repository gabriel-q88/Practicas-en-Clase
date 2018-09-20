#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "Mi_Biblioteca.h"


/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}


/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
/*int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}*/

int getInt(int* pResultado)
{
    int retorno=-1;
    char buffer[8];

    fgets(buffer,sizeof(buffer),stdin);
    buffer[strlen(buffer)-1]='\0';
    if(esNumerica(buffer))
    {
        *pResultado = atoi(buffer);
        retorno=1;
    }
    return
        retorno;
}


/**
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}
/**
 * \brief Genera un número aleatorio
 * \param desde Número aleatorio mínimo
 * \param hasta Número aleatorio máximo
 * \param iniciar Indica si se trata del primer número solicitado 1 indica que si
 * \return retorna el número aleatorio generado
 *
 */
char getNumeroAleatorio(int desde, int hasta, int iniciar)
{
    if(iniciar)
        srand (time(NULL));
    return desde + (rand() % (hasta + 1 - desde)) ;
}


int utn_getNumero(int * pResultado,  char * mensaje,char * mensajeError, int minimo,int maximo,int reintentos)

{
    int retorno;
    int numero;
    while
    (reintentos>0)
    {
        printf("mensaje");
        scanf("%d",&numero);
        if
        (numero<=maximo && numero>=minimo)
        {
            break;
        }
        reintentos--;
        printf("mensajeError");
    }
    if(reintentos==0)
    {
        retorno=-1;
    }
    else
    {
        retorno=0;
        *pResultado = numero;
    }
    return retorno;
}

/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

int esNumerico(char str[])
{
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

int esNumerica(char* cadena)
{
    int retorno=-1;
    int i=0;
    if(cadena!=NULL)
    {
        while(cadena[i]!='\0')
        {
            if
            (cadena[i]<'0'|| cadena[i]>'9')
                break;
            i++;
        }
        if(cadena[i]=='\0')
            retorno=1;
    }
    return retorno;
}

/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int esSoloLetras(char string[])
{
    int i=0;
    while(string[i] != '\0')
    {
        if((string[i] != ' ') && (string[i] < 'a' || string[i] > 'z') && (string[i] < 'A' || string[i] > 'Z'))
            return 0;
        i++;
    }
    return 1;
}


/**
 * \brief Verifica si el valor recibido contiene solo letras y números
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y números, y 0 si no lo es
 *
 */
int esAlfaNumerico(char string[])
{
    int i=0;
    while(string[i] != '\0')
    {
        if((string[i] != ' ') && (string[i] < 'a' || string[i] > 'z') && (string[i] < 'A' ||
                string[i] > 'Z') && (string[i] < '0' || string[i] > '9'))
            return 0;
        i++;
    }
    return 1;
}


/**
 * \brief Verifica si el valor recibido contiene solo números, + y -
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo numeros, espacios y un guion.
 *
 */
int esTelefono(char string[])
{
    int i=0;
    int contadorGuiones=0;
    while(string[i] != '\0')
    {
        if((string[i] != ' ') && (string[i] != '-') && (string[i] < '0' || string[i] > '9'))
            return 0;
        if(string[i] == '-')
            contadorGuiones++;
        i++;
    }
    if(contadorGuiones==1) // debe tener un guion
        return 1;

    return 0;
}

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return void
 */
void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf ("%s", input);
}

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[])
{
    char auxiliar[256];
    getString(mensaje,auxiliar);
    if(esSoloLetras(auxiliar))
    {
        strcpy(input,auxiliar);
        return 1;
    }
    return 0;
}


/**
 * \brief Solicita un numero entero al usuario y lo valida
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param errorMessage Es el mensaje a ser mostrado en caso de error
 * \param lowLimit Es el limite inferior aceptado
 * \param lowLimit Es el limite superior aceptado
 * \param input puntero al lugar donde se cargará el numero ingresado
 * \param attemps indica la cantidad de reintentos ante un error
 * \return 0 si consiguio el Numero -1 si no
 *
 */
int getValidInt(char requestMessage[],char errorMessage[], int* input,int lowLimit, int hiLimit,int attemps)
{
    char auxStr[256];
    int auxInt, i, retorno = -1;

    for(i=0;i<attemps;i++)
    {
        if (!getStringNumeros(requestMessage,auxStr))
        {
            printf ("%s",errorMessage);
            break;
            continue;

        }
        auxInt = atoi(auxStr);
        if(auxInt < lowLimit || auxInt > hiLimit)
        {
            printf ("%s",errorMessage);
            continue;

        }
        *input = auxInt;
        retorno = 0;
        break;

    }
    return retorno;

}


/**
 * \brief Solicita un string
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param errorMessage Es el mensaje a ser mostrado en caso de error de tipo
 * \param errorMessageLenght Es el mensaje a ser mostrado en caso de error de longitud
 * \param input Array donde se cargará el texto ingresado
 * \param maxLenght int Longitud maxima del texto ingresado
 * \param attemps indica la cantidad de reintentos ante un error
 * \return 0 si consiguio el String -1 si no
 *
 */
int getValidString(char requestMessage[],char errorMessage[], char errorMessageLenght[],char input[], int maxLenght,int attemps)
{
    int i;
    int retorno=-1;
    char buffer[1024];

    for(i=0;i<attemps;i++)
    {
        if (!getStringLetras(requestMessage,buffer))
        {
            printf ("%s",errorMessage);
            continue;
        }
        if(strlen(buffer) >= maxLenght)
        {
            printf ("%s",errorMessageLenght);
            continue;

        }
        retorno=0;
        strcpy(input,buffer);
        break;
    }
    return retorno;
}

/**
 * \brief Solicita un numero flotante al usuario y lo valida
 * \param requestMessage Es el mensaje a ser mostrado para solicitar el dato
 * \param requestMessage Es el mensaje a ser mostrado en caso de error
 * \param lowLimit Es el limite inferior aceptado
 * \param lowLimit Es el limite superior aceptado
 * \param input puntero al lugar donde se cargará el numero ingresado
 * \param attemps indica la cantidad de reintentos ante un error
 * \return 0 si consiguio el Numero -1 si no
 *
 */
int getValidFloat(char requestMessage[],char errorMessage[], float* input,float lowLimit, float hiLimit,int attemps)
{
    char auxStr[256];
    int i, retorno = -1;
    float auxInt;

    for(i=0;i<attemps;i++)
    {
        if (!getStringNumerosFlotantes(requestMessage,auxStr))
        {
            printf ("%s",errorMessage);
            break;
            continue;

        }
        auxInt = atof(auxStr);
        if(auxInt < lowLimit || auxInt > hiLimit)
        {
            printf ("%s",errorMessage);
            continue;

        }
        *input = auxInt;
        retorno = 0;
        break;

    }
    return retorno;

}


/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumeros(char mensaje[],char input[])
{
    char auxiliar[256];
    getString(mensaje,auxiliar);
    if(esNumerico(auxiliar))
    {
        strcpy(input,auxiliar);
        return 1;
    }
    return 0;
}

void sortEmpleadosPorNombre(Empleado* pEmpleado,int limite)
{
    int swap;
    int i;
    Empleado bufferEmpleado;
    do
    {
        swap = 0;
        for(i=0;i<limite-1;i++)
        {
            if(strcmp(pEmpleado[i].nombre,pEmpleado[i+1].nombre) > 0)
            {
                swap = 1;
                bufferEmpleado = pEmpleado[i];
                pEmpleado[i] = pEmpleado[i+1];
                pEmpleado[i+1] = bufferEmpleado;
            }
        }
    }while(swap);


}

void ordenarPorNombre(char pNombres[][50],char pApellidos[][50],char pDni[][50], int limite)
{
    int swap;
    int i;
    char bufferStr[256];
    do
    {
        swap = 0;
        for(i=0;i<limite-1;i++)
        {
          if(strcmp(pNombres[i],pNombres[i+1]) > 0)
            {
            swap = 1;
            strcpy(bufferStr,pNombres[i]);
            strcpy(pNombres[i],pNombres[i+1]);
            strcpy(pNombres[i+1],bufferStr);

            strcpy(bufferStr,pApellidos[i]);
            strcpy(pApellidos[i],pApellidos[i+1]);
            strcpy(pApellidos[i+1],bufferStr);

            strcpy(bufferStr,pDni[i]);
            strcpy(pDni[i],pDni[i+1]);
            strcpy(pDni[i+1],bufferStr);

            }
        }
    }while(swap);
}


/**
 * \brief Verifica si el valor recibido es numérico aceptando flotantes
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */
int esNumericoFlotante(char str[])
{
   int i=0;
   int cantidadPuntos=0;
   while(str[i] != '\0')
   {
       if (i == 0 && str[i] == '-')
       {
           i++;
           continue;

       }
       if (str[i] == '.' && cantidadPuntos == 0)
       {
           cantidadPuntos++;
           i++;
           continue;

       }
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}


/**
 * \brief Solicita un texto numérico al usuario y lo devuelve (acepta flotantes)
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumerosFlotantes(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumericoFlotante(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}


