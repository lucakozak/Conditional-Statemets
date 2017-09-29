//
//  main.c
//  13
//
//  Created by Kozak, Luca on 2017. 09. 29..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>

int main() {
    int a;
    printf("Hany fok van kint?");
    scanf("%d",&a);
    
    if (a<0) {
        printf("Freezing weather ");
    }
    else if (a>0 && a<=10) {
        printf("Very Cold weather");
    }
    else if (a<=20 && a>10) {
        printf("Cold weather");
    }
    else if (a>20 && a<=30 ) {
        printf("Normal in Temp ");
    }
    else if (a>30 && a<=40) {
        printf("Its Hot");
    }
    else if (a> 40) {
        printf("Its very Hot");
    }
    return 0;
}
