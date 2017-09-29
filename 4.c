//
//  main.c
//  4
//
//  Created by Kozak, Luca on 2017. 09. 29..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>

int main() {

    int a;
    printf("Write a year:\n");
    scanf("%d", &a);
    if (a%4==0) {
        printf("This is a leap year\n");
    }
    else{
        printf("This is not a leap year\n");
    }
    return 0;
}
