#include <stdio.h>
#include <math.h>

int main() {
    double x = 0.0374;
    double y = -0.825;
    double z = 16.0;

    double sinys = sin(x + y);
    double chislitel = 1 + sinys * sinys;
    double znamenatel = x - 2 * y / (1 + x * x) * y * y;
    double x_posle_drobi = pow(x, fabs(y));
    double first_slagaemoe = chislitel / znamenatel * x_posle_drobi;

    double arctang = atan(1 / z);
    double cosin = cos(arctang);
    double second_slagaemoe = cosin * cosin;

    double primer_resh = second_slagaemoe * first_slagaemoe;
   
    printf("primer_resh= %.4lf\n",primer_resh);

    return 0;
}