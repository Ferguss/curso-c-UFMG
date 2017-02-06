//
//  main.c
//  Exercicio_funcao_2
//
//  Created by Geilson on 05/02/17.
//  Copyright © 2017 Fergus Sistemas. All rights reserved.

//sintax
//tipo_de_retorno nome_da_função (lista_de_argumentos)
//{código_da_função}

#include <stdio.h>

int quadrado (int x){
    printf("O quadrado e: %d",(x*x));
    
    return 0;
}

int main(int argc, const char * argv[]) {
    int num;
    printf("Entre com um numero:\n");
    scanf("%d",&num);
    quadrado(num);

    
    return 0;
}
