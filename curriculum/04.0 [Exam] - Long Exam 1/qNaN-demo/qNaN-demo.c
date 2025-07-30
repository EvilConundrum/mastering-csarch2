#include <math.h>
#include <stdio.h>

int main() {
    double val = 0.0 / 0.0;  // division by zero
    printf("qNaN: %f\n", val);
    return 0;
}