//
//  main.c
//  9
//
//  Created by Kozak, Luca on 2017. 09. 29..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int a,b;
    printf("Write two coordinate points in a XY coordinate system");
    scanf("%d %d", &a, &b);
    
    if (a<0 && b<0) {
        printf("The coordinate point (%d,%d) lies in the Third quadrant.", a,b);
    }
    else if (a<0 && b>0) {
        printf("The coordinate point (%d,%d) lies in the Second quadrant.", a,b);
    }
    else if (a>0 && b>0) {
        printf("The coordinate point (%d,%d) lies in the First quadrant.", a,b);
    }
    else if (a>0 && b<0) {
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.", a,b);
    }
    
    
    return 0;
}
