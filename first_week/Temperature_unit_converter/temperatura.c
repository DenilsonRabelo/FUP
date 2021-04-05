#include <stdio.h>

int main (){
    double a,b;
    scanf ("%lf%lf",&a,&b);
    printf ("%.6lf C = %.6lf F\n",a,((9*a)+160)/5);
    printf ("%.6lf F = %.6lf C\n",b,((b-32)*5)/9);
}