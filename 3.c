//
//  main.c
//  3
//
//  Created by Kozak, Luca on 2017. 09. 29..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int a;
    
    printf("Write a number:");
    scanf("%d", &a);
    
    if (a>0) {
        printf("The number is positive\n");
    }
    
    else {
        printf("The number is negative\n");
    }
    
    return 0;
}
