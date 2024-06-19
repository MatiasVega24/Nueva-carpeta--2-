#include <stdio.h>
#include "funciones.h"

int main(int argc, char *argv[]) {
    char peliculas[10][4][40] = {
        {"1", "Avatar", "10:20", "Fantasia"},
        {"2", "La Venganza de los chamos III", "11:30", "Accion"},
        {"3", "Cars", "17:50", "Fantasia"},
        {"4", "Planeta de los Simios", "12:35", "Accion"},
        {"5", "CHUKY", "16:20", "Terror"},
        {"6", "Bad Boys 4", "09:00", "Accion"},
        {"7", "Winnie Pooh", "11:00", "Fantasia"},
        {"8", "Mi Villano Favorito", "13:30", "Fantasia"},
        {"9", "Busqueda Implacable", "18:55", "Accion"},
        {"10", "La Monja II", "20:00", "Terror"}
    };

    double precio[3] = {7, 3.5, 3};

    char clientes[5][2][40] = {
        {"", ""},
        {"Luis", "1234567887"},
        {"", ""},
        {"", ""},
        {"", ""}
    };

    int reserva[10][4] = {
        {0, 1, 2, 1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1}
    };

    int opcion1 = 0, opcion2 = 0, opcion3 = 0;

    do {
        printf("Escoja una opcion:\n");
        printf("1. Ingresar Cliente\n");
        printf("2. Ver Peliculas\n");
        printf("3. Buscar Pelicula\n");
        printf("4. Comprar Ticket\n");
        printf("5. Ver Compras\n>> ");
        scanf("%d", &opcion2);

        switch (opcion2) {
            case 1:
                ingresarCliente(clientes);
                break;
            case 2:
                listarPeliculas(peliculas);
                break;
            case 3:
                printf("1. Por nombre\n");
                printf("2. Por Genero\n>> ");
                scanf("%d", &opcion3);
                switch (opcion3) {
                    case 1:
                        buscarporNombre(peliculas);
                        break;
                    case 2:
                        buscarporGenero(peliculas);
                        break;
                    default:
                        printf("Opcion no valida.\n");
                        break;
                }
                break;
            case 4:
                comprarTicket(peliculas, precio, clientes, reserva);
                break;
            case 5:
                verCompras(peliculas, precio, clientes, reserva);
                break;
            default:
                printf("Opcion no valida.\n");
                break;
        }

        printf("Desea escoger una nueva opcion: 1.Si / 2.No\n>> ");
        scanf("%d", &opcion1);

    } while (opcion1 == 1);

    return 0;
}
