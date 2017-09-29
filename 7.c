//
//  main.c
//  7
//
//  Created by Kozak, Luca on 2017. 09. 29..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>

int main() {
    int a;
    printf("How tall are you?");
    scanf("%d", &a);
    if (a<150) {
        printf("You are really short");
    }
    else if (150<a && a<165) {
        printf("You are short");
    }
    else if (166<a && a<175){
        printf("You are average");
    }
    else if (176<a && a<185) {
        printf("You are tall");
    }
    else if (186<a) {
        printf("You are very tall");
    }
    
    return 0;
}
