#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

int utn_getNombre(  char* pNombre, int limite, char* msg,
                    char* msgErr, int reintentos);

int getInt(int* pResultado);
int esNumerica(char* cadena);


#endif // UTN_H_INCLUDED
