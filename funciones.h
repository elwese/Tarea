#ifndef FUNCIONES_H
#define FUNCIONES_H


struct Usuario{
    char nombre_usuario[10];
    char password[10];
};

struct Producto{
    double precio_compra;//
    int stock;//
    int codigo;//
    char nombre[50];//
    char categoria[50];//
    char marca[50];//
    char bodega[50];//
};

struct Registro_Ventas{
    double precio_venta;
    char local[50];
    char vendedor[50];
    char fecha_venta[50];
};

void importarDatos(int *t_usr,int *t_prod, int *t_vent,struct Usuario usuarios[], struct Producto productos[], struct Registro_Ventas ventas[]);
void guardar_Usr(struct Usuario usuarios[],int longo);
void guardar_Prod(struct Producto productos[],int longo);


void registrarUsuario(struct Usuario usuarios[], int *longo);
void actualizarUsuario(struct Usuario usuarios[]);
void registrarProducto(struct Producto productos[], int *longo);
void actualizarProductos(struct Producto productos[]);
void venderProducto(struct Producto produtos[],struct Registro_Ventas rventas[], int *longo);

#endif
