// Newton's method to compute square of floating point number;

#include <ctype.h>
#include <stdio.h>
#include <math.h>

int main(void) {
    double x = 3;
    double y = 1;
    double x_y = 0;
    double old_y = 0;
    while (fabs((y - old_y)) > 0.00001) {
        x_y = x / y;
        old_y = y;
        y = (x_y + y) / 2.0;

    }
    return 0;
}
