#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main()
{

    double angle_rad = 45 * PI / 180.0;
    double ratio;

    ratio = 1 / sin(angle_rad);

    printf("The ratio of slit width to wavelength is: %.3lf\n", ratio);

    return 0;
}
