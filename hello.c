#include <stdio.h>
int main()
{
    int x = 10;
    int *px = &x;
    (*px)++;

    printf("la direccion de memoria es %d ", *px);

    int listaNumber[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int elemt = sizeof(listaNumber[1]);
    printf("los elemntos son %d", elemt);

    for (size_t i = 0; i <= sizeof(listaNumber) / elemt; i++)
    {
        /* code */
        printf(" el elemntos es %d \n ", listaNumber[i]);
    };

    char prueba[] = "hola como estan";
    printf("%s", prueba);

    return 0;
}
