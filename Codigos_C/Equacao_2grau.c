#include <stdio.h>
#include <math.h>
int main() {
    double A, B, C, delta, bhaskara1, bhaskara2;
    scanf("%lf %lf %lf", &A, &B, &C);
    delta = (B*B) - (4*A*C);
    if(A == 0 || delta < 0) {
        printf("Impossivel calcular");
    } else {
        delta = (B*B) - (4*A*C);
        bhaskara1 = (-(B) + sqrt(delta))/ (2*A);
        bhaskara2 = (-(B) - sqrt(delta))/ (2*A);
        printf("R1 = %.5lf\n", bhaskara1);
        printf("R2 = %.5lf\n", bhaskara2);
        return 0;
    }
}
