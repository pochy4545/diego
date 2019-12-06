#include <stdio.h>

void PonEco(char cadena[], int n);

int main()
{   char a[100];
    int n;
    printf("ingrese su cadena de caracter y la cantidad a repetir: ");
    scanf("%s %d",a ,&n);
    PonEco(a, n);
}

void PonEco(char cadena[], int n){
    int indice=0;
    while (cadena[indice] != '\0')
    {
        indice = indice + 1;
    }
    char ultimaletra= cadena[indice - 1];
    
    for (int i = indice ; i <= n + indice - 1; i++)
    {
        cadena[i] = ultimaletra;
    }
    printf("%s",cadena);
    
}
