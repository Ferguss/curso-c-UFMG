//
//  main.c
//  Funcao3
//
//  Created by Geilson on 05/02/17.
//  Copyright © 2017 Fergus Sistemas. All rights reserved.
//

#include <stdio.h>

int mult (float a, float b, float c){
    
    printf("%f\n\n", a*b*c);
    return 0;
}

int main(int argc, const char * argv[]) {
   
    float x,y;
    x=23.5;
    y=12.9;
    mult(x,y,3.87);
    
    
    return 0;
}
