#include <stdio.h>
#include <stdlib.h>

void cargarListado(int listadoDeNotas[],int tamanio)
{
    int i;
    int numeroIngresado;
    for (i = 0; i < tamanio; i++)//funcion cargar
    {
        printf("Ingrese nota: ",i+1);
        scanf("%d",&numeroIngresado);
        listadoDeNotas[i] = numeroIngresado;
    }
}

void mostrarListado(listadoDeNotas, CANTIDAD)
{
    for (i = 0; i < CANTIDAD; i++)//funcion mostrar
    {
        printf("\nLa Nota es: %d",listadoDeNotas[i]);
    }
}

void mostrarInformacionDeArray(listadoDeNotas, CANTIDAD)
{
    for (i = 0; i < CANTIDAD; i++)//funcion para mostrar la nota mayor
    {
        if(i==0 || listadoDeNotas[i] > mayor)
        {
            mayor = listadoDeNotas[i];
        }
    }
    printf("\n\nEl Mayor es: %d",mayor);

    for (i = 0; i < CANTIDAD; i++)//funcion para mostrar la nota menor
    {
        if(i==0 || listadoDeNotas[i] < menor)
        {
            menor= listadoDeNotas[i];
        }
    }
    printf("\n\nEl Menor es: %d",menor);

    sumaDeNotas=retornarTotal(listadoDeNotas,CANTIDAD);
    promedio = retornarPromedio(listadoDeNotas,CANTIDAD);

    printf("\n\nEl Promedio Total es: %d",promedio);
    printf("\n\nEl Total de Notas es de: %d",sumaDeNotas);
    return 0;

    int retornarTotal(int listado[],int tamanio)
    {
        int sumaDeDatos=0;
        int i;
        for (i = 0; i < tamanio; i++)//funcion para mostrar promedio total y suma de notas
        {
            sumaDeDatos += listadoDeNotas[i];
        }
    }
    int retornarPromedio(int listado[],int tamanio)
    {
        int suma;
        int promedio;
        suma = retornarTotal[listado,tamanio];
        promedio = suam / tamanio;
        return promedio;
    }
}
