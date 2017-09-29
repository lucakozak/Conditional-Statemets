//
//  main.c
//  2
//
//  Created by Kozak, Luca on 2017. 09. 29..
//  Copyright © 2017. Kozak, Luca. All rights reserved.


//Even or odd the given number

#include <stdio.h>

int main() {
   
    int a;
    printf("Write a number:");
    scanf("%d", &a);
    
    if (a%2 == 0) {
        printf("The number is an even intiger\n");
    }
    else {
        printf("The number is an odd intiger\n");
    }
    
    return 0;
}
