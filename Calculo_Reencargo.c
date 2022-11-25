
#include <stdio.h>
#define LIM 30
#define LIM_MAX 31
#define REENCARGO_RETRASO 4

void Calculo_Reencargo (char nombre[LIM], char pelicula[LIM], int dias_retraso);
void Elimino_Enter (char nombre[LIM], char pelicula[LIM]);

int main()
{
    char nombre[LIM], pelicula[LIM];
    int dias_retraso;
    printf("\nBienvenido a mi programa...\n");
    printf("Ingrese el nombre del cliente: ");
    fgets(nombre, LIM_MAX, stdin);
    fflush(stdin);
    printf("Ingrese el Titulo de la pelicula: ");
    fgets(pelicula, LIM_MAX, stdin);
    fflush(stdin);
    printf("Ingrese la cantidad de dias de retraso: ");
    scanf("%d", &dias_retraso);
    printf("\n");
    Elimino_Enter(nombre, pelicula);
    Calculo_Reencargo(nombre, pelicula, dias_retraso);
    return 0;
}

void Elimino_Enter (char nombre[LIM], char pelicula[LIM])
{
    for (int i = 0; i < LIM; i++)
    {
        if (nombre[i] == 10) nombre[i] = '\0';
        if (pelicula[i] == 10) pelicula[i] = '\0';
    }
}

void Calculo_Reencargo (char nombre[LIM], char pelicula[LIM], int dias_retraso)
{
    int reencargo_base = 8, reencargo_retraso;
    reencargo_retraso = (dias_retraso*REENCARGO_RETRASO)+reencargo_base;
    if (dias_retraso == 0) printf("El Cliente %s alquilo %s y debe pagar $8\n\n", nombre, pelicula);
    else printf("El Cliente %s alquilo la pelicula %s y debe pagar $%d\n\n", nombre, pelicula, reencargo_retraso);
}
