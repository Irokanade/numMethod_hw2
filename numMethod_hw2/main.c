//
//  main.c
//  numMethod_hw2
//
//  Created by Michael Leong on 23/09/2022.
//

#include <stdio.h>
#include <math.h>

double g(double x) {
    return cbrt(2*x+2);
}

int main(int argc, const char * argv[]) {
    double oldX = 0.5;
    double newX = 0.5;
    
    do {
        double temp = newX;
        newX = g(newX);
        oldX = temp;
        //printf("%lf\n", newX);
    } while(!(fabs(newX-oldX) < 0.000001));
    
    printf("%lf\n", newX);
    
    return 0;
}
