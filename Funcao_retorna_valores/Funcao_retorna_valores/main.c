//
//  main.c
//  Funcao_retorna_valores
//
//  Created by Geilson on 05/02/17.
//  Copyright © 2017 Fergus Sistemas. All rights reserved.
//

#include <stdio.h>

int prod (int x, int y){
    
    return (x*y);
}

int main(int argc, const char * argv[]) {
   
    int saida;
    saida=prod (12,7);
    printf("A saida e: %d\n", saida);
    
    return 0;
}
