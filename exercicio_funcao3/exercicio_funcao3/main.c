//
//  main.c
//  exercicio_funcao3
//
//  Created by Geilson on 05/02/17.
//  Copyright © 2017 Fergus Sistemas. All rights reserved.
//printf("%d",a+b+c);

#include <stdio.h>

int prod (int x, int y){
    
    return (x*y);
    
}
int main(int argc, const char * argv[]) {
    
    int saida;
    int num1;
    int num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);
    printf("Digite o segundo numero: ");
    scanf("%d",&num2);
    
    saida=prod(num1, num2);
    printf("O resultado dos numeros e: %d\n\n",saida);
    

return 0;
}
