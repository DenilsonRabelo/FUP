#include <stdio.h>
#include <math.h>

int main (){
    float a,b,c,aux,p;
    scanf ("%f %f %f",&a,&b,&c);
    p= (a+b+c)/2;
    aux = sqrt (p*(p-a)*(p-b)*(p-c));
    printf ("%.2f\n",aux);
}