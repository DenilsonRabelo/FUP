#include <stdio.h>

int main (){
    int T;
    int h,m,s;
    scanf ("%d",&T);
    h= T/3600;
    T= T%3600;
    m= T/60;
    T= T%60;
    s= T;
    
    printf ("%d %d %d",h,m,s);
    
}