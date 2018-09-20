
float getFloat(char mensaje[]);
//int getInt(char mensaje[]);
int getInt(int* pResultado);
char getChar(char mensaje[]);
char getNumeroAleatorio(int desde, int hasta, int iniciar);
int utn_getNumero(int * pResultado,  char * mensaje,char * mensajeError, int minimo,int maximo,int reintentos);
int esNumerico(char str[]);
int esNumerica(char* cadena);
int esSoloLetras(char str[]);
int esAlfaNumerico(char str[]);
int esTelefono(char str[]);
void getString(char mensaje[],char input[]);
int getStringLetras(char mensaje[],char input[]);
int getStringNumeros(char mensaje[],char input[]);
void sortEmpleadosPorNombre(Empleado* pEmpleado,int limite);
void ordenarPorNombre(char pNombres[][50],char pApellidos[][50],char pDni[][50], int limite);
