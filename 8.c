//
//  main.c
//  8
//
//  Created by Kozak, Luca on 2017. 09. 29..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Write three numbers separated by comma:\n");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a>b && a>c) {
        printf("%d is the largest number\n",a);
    }
    else if (b>a && b>c) {
        printf("%d is the largest number\n",b);
    }
    else if (c>a && c>b) {
        printf("%d is the largest number\n",c);
    }
    
    return 0;
}
