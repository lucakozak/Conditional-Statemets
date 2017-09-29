//
//  main.c
//  5
//
//  Created by Kozak, Luca on 2017. 09. 29..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>

int main() {
    int a;
    printf("How old are you?");
    scanf("%d", &a);
    
    if (a>=18) {
        printf("You are able to vote");
    }
    else {
        printf("You are not able to vote");
    }
    return 0;
}
