#include <stdio.h>
#include "funciones.h"
#include <stdlib.h>
#include <malloc.h>



int main(){
    int opcion;
    int t_usr=0,t_ven=0,t_prod=0;

    struct Usuario listaUsuarios[10] ;
    struct Producto listaProductos[50];
    struct Registro_Ventas listaVentas[50];
    importarDatos(&t_usr,&t_prod,&t_prod,listaUsuarios,listaProductos,listaVentas);


    while(opcion!=0){
      printf("Menú:\n");
      printf("1.-ADMINISTRADOR\n");
      printf("2.-BODEGUERO\n");
      printf("3.-VENDEDOR\n");
      printf("0.-SALIR\n");
      printf("Ingrese una opción: \n");
      scanf("%d", &opcion);

    switch(opcion){
      case 0:
        printf( "Saliendo del programa...\n" );
        break;
        case 1:
            printf("Menú administrador: \n");
            printf("1) Registrar usuario \n");
            printf("2) Actualizar usuario \n");
            printf("Ingrese una opción: \n");
            scanf("%d", &opcion);

            if (opcion == 1){
              registrarUsuario(listaUsuarios,&t_usr);
            }

            if (opcion == 2){
              actualizarUsuario(listaUsuarios);
              guardar_Usr(listaUsuarios,t_usr);
            }

            break;

        case 2:
            printf("Menú bodeguero: \n");
            printf("1) Registrar producto \n");
            printf("2) Actualizar producto \n");
            printf("Ingrese una opción: \n");
            scanf("%d", &opcion);

            if (opcion == 1){
              registrarProducto(listaProductos,&t_prod);
            }

            if (opcion == 2){
              actualizarProductos(listaProductos);
              guardar_Prod(listaProductos,t_prod);
            }

            break;

        case 3:
            printf("Menú vendedor: \n");
            printf("1) Vender producto \n");
            printf("Ingrese una opción: \n");
            scanf("%d", &opcion);

            if (opcion == 1){
              venderProducto(listaProductos,listaVentas,&t_ven);
            }

            break;
        default :
            printf("Opción no válida. Por favor, escoga una de las opciones mostradas");
    }
    }
    return 0;
}

