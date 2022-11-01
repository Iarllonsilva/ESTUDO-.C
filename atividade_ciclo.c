//https://onlinegdb.com/i5AiArUwJ (Modularização)

//Implemente a função ciclo que recebe dois parametros (...) 
//(...) o valor inicial (n) e o valor final - limite(ambos do tipo int).

//A função deve apresentar na tela os valores a partir de n até limite, um em cada linha.

#include <stdio.h>

void ciclo(int n, int limite){

    printf ("%d\n", n);
    if (n < limite) ciclo( n + 1, limite);
    
}

int main(){
    
    int ini;
    int final;
    
    printf ("Digite aqui seu valor inicial e valor final\n");
    printf ("\nInicial é:\n");
    scanf ("%d", &ini);
    printf("\nFinal é:\n");
    scanf ("%d", &final);
    printf ("\n");
    ciclo (ini, final);
    
    return 0;
    
}