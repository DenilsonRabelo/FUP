#include <stdio.h>
#include <math.h>

int main (){
    float xa,ya,xb,yb,aux;
    scanf ("%f %f %f %f", &xa,&ya,&xb,&yb);
    aux = sqrt (pow ((xb - xa),2) + pow ((yb - ya),2));
    printf ("%.2f\n",aux);
}