//Implemente uma função chamada fatorial para calcular e retornar
// o fatorial de um número maior ou igual a 0.

//Exemplo se o número for 4, seu fatorial = 4 x 3 x 2 x 1 = 24

//Importante: o fatorial de 0 é igual a 1.


#include <stdio.h>

int fatorial(int n){

    if (n == 0) return 1;
    return n * fatorial (n-1);
     
}

int main(){
    
    int aux;
    
    printf ("Insira o número fatorial\n");
    scanf ("%d", &aux);
    fatorial(aux);

    printf ("O fatorial é %d\n", fatorial(aux));
    
    return 0;

    
}
