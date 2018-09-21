typedef struct
{
    char nombre[50];
    char descripcion[200];
    float precio;
    int isEmpty;
    int id;

} Producto;
int producto_altaProducto_init(Producto arrayProducto[],int len);
int producto_altaProducto(Producto arrayProducto[],int len, int indice);
int producto_mostrarProducto(Producto arrayProducto[],int len, int indice);
int producto_buscarVacio(Producto arrayProducto[],int len);


