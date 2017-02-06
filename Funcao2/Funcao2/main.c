//
//  main.c
//  Funcao2
//
//  Created by Geilson on 05/02/17.
//  Copyright © 2017 Fergus Sistemas. All rights reserved.
//

#include <stdio.h>

int square (int x)
{
    printf("O quadrado e %d\n\n", (x*x));
    return 0;
}

int main(int argc, const char * argv[]) {
   
    int num;
    printf("Entre com um numero:");
    scanf("%d",&num);
    square(num);

    return 0;
}
