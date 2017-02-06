//
//  main.c
//  Exerci0_funcao
//
//  Created by Geilson on 05/02/17.
//  Copyright © 2017 Fergus Sistemas. All rights reserved.
//

#include <stdio.h>

int soma (int x, int y){

    return (x+y);
}

int main(int argc, const char * argv[]) {
    
    int result;
    result=soma(4,4);
    printf("A soma e: %d\n ",result);
  
    return 0;
}
