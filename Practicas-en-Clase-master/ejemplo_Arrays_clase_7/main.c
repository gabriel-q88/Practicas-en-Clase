#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "../../../Documentos/utn.h"

int main()
{

    /*
        char nombre[25];
        char apellido[25];
        char localidad[25];
        //int tamanio;

        tamanio = sizeof(nombre);
        printf("antes es: %d\n",tamanio);

        printf("Ingrese su nombre: ");
        scanf("%s",nombre);

        tamanio = sizeof(nombre);
        printf("ahora es: %d\n",tamanio);

        printf("El nombre ingresado es: %s y usted es...",nombre);

        fgets(nombre,26,stdin);
        __fpurge(stdin);//devuelve un puntero,toma una variable,le asigno tamaño,y por donde lo ingreso...
        fgets(apellido,26,stdin);
        __fpurge(stdin);
        fgets(localidad,26,stdin);
        __fpurge(stdin);
        printf("El nombre es %s\napellido %s\n y es de %s\n",nombre,apellido,localidad);
        return 0;*/

    char usuario[9];
    char clave[9];
    char auxiliarUser[]="admin\n";
    char auxiliarClave[]="admin\n";

    printf("Ingrese usuario y clave: %s %s",usuario,clave);
    fgets(usuario,10,stdin);
    __fpurge(stdin);
    fgets(clave,10,stdin);
    __fpurge(stdin);

    int retorno;
    retorno = strcmp(usuario,clave);



    if(strcmp(usuario,auxiliarUser)==0 && strcmp(clave))
    {
        printf("Ingreso!!!");
    }
    else
    {
        printf("noooooo");
    }

}
