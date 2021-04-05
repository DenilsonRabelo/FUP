#include <stdio.h>

int main (){
    int a,b,c,d,aux;
    scanf ("%d %d %d %d",&a,&b,&c,&d);
    aux = a+b+c+d;
    int p=1,o=2,i=3,u=4;
    for (int i= 0 ; i < aux ; i ++){
        p=p+4;
        o=o+4;
        i=i+4;
        u=u+4;
    }
    if (aux == 0){
            printf ("nenhum\n");
        }else if (aux == 1 || aux == p){
            printf ("jog1\n");
        }else if (aux==2 || aux == o){
            printf ("jog2\n");
        }else if (aux == 3 || aux == i){
            printf ("jog3\n");
        }else {
            printf ("jog4\n");
        }
}