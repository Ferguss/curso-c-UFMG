//
//  main.c
//  2
//
//  Created by Geilson on 05/02/17.
//  Copyright © 2017 Fergus Sistemas. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int dias;
    float anos;
    printf("Entre com o numero de dias: ");
    scanf("%d",&dias);
    anos=dias/365.25;
    printf("\n\n%d dias equivalem a %f anos.\n\n\n",dias,anos);
    

    
    return 0;
}
