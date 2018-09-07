#include <stdio.h>
#include <stdlib.h>
#define DATO_INVALIDO -1
#define false 0
#define true 1
#include "ARRAY.h"


int array_mostrarArray(int* pArray, int limite)
{
    int i;
    for(i=0; i<limite; i++)
    {
        printf("\nIndex:%d - Value:%d - Add: %p",i,pArray[i],&pArray[i]);

    }
    return 0;
}

int array_calcularMaximoArray(int* pArray, int limite, int* pMaximo)
{
    int retorno=-1;
    int i;

    int maximo;
    int flagPrimerMaximo = false;

    if(pArray != NULL && limite > 0)
    {

        for(i=0; i<limite; i++)
        {
            if(pArray[i] != DATO_INVALIDO)
            {
                if(flagPrimerMaximo == false)
                {
                    maximo = pArray[i];
                    flagPrimerMaximo = true;
                }
                else if(pArray[i] > maximo)
                {
                    maximo = pArray[i];
                }
            }
        }

        if(flagPrimerMaximo == 0)
        {
            retorno = -2;
        }
        else
        {
            retorno = 0;
        }
    }
    return retorno;
}

int array_initArray(int* pArray, int limite, int valor)
{
    int retorno=-1;
    int i;
    if(pArray != NULL && limite > 0)
    {
        for(i=0; i<limite; i++)
        {
            pArray[i] = valor;
        }
        retorno = 0;
    }
    return retorno;
}

int array_ordenar(int* pArray, int limite, int orden)
{
    int retorno=-1;
    int j;
    int indiceMinimo;
    //int auxiliar;
    if(pArray != NULL && limite > 0)
    {
        //SWAP
        for(j = 0; j < limite; j++)
        {
            array_minimoDesde(pArray,limite,j,indiceMinimo);
            array_Swap(&pArray[j],&pArray[indiceMinimo]);

            //auxiliar = pArray[j];
            //pArray[j] = pArray[indiceMinimo];
            //pArray[indiceMinimo] = auxiliar;
        }//SWAP
        retorno = 0;
    }
    return retorno;
}

int array_minimoDesde(int* pArray, int limite, int desde, int* pMinimo)
{
    int retorno=-1;
    int i;
    int auxiliarValorMinimo;
    int auxiliarIndiceMinimo;

    if(pArray != NULL && limite > 0 && limite >= desde && pMinimo != NULL)
    {
        for(i = desde; i < limite; i++)
        {
            if(i== desde || pArray[i] < auxiliarValorMinimo)
            {
                auxiliarIndiceMinimo = i;
                auxiliarValorMinimo = pArray[i];

            }

        }
        pMinimo = auxiliarIndiceMinimo;
        retorno = 0;
    }
    return retorno;
}

int array_Swap(int* elementoA, int* elementoB)
{
    int auxiliar;
    auxiliar = *elementoA;
    *elementoA = *elementoB;
    *elementoB = auxiliar;

}

int array_ordenar2(int* pArray, int limite, int orden)
{
    int retorno=-1;
    int j;
    int indiceMinimo;
    int flagswap;
    do
    {
        flagswap = 0;
        for(j = 0; j < limite-1; j++)
        {
            if((orden == 0 pArray [j]> pArray [j+1]) || (orden == 1 pArray [j]< pArray [j+1]))
            {
                flagswap = 1;
                array_Swap(&pArray[j],&pArray[j+1]);
            }
        }

    }
    while();
    retorno = 0;
}
return retorno;

int cantidad;
int numero;
char buffeNumero[4097];
scanf("%s,bufferNumero")

strncpy(nombre,bufferNombre,3);
printf("\n--->%s",nombre);
