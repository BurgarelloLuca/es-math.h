#include <math.h>
#include <stdio.h>

int main(void) {
    int delta=0;
    int a, b, c;
    int risultato1=0;
    int risultato2=0;
    printf("inserire a");
    scanf("%d", &a);
    printf("inserire b");
    scanf("%d", &b);
    printf("inserire c");
    scanf("%d", &c);
    delta=b*b-4*a*c;
if(delta<0) {
    printf("impossibile");
}
else {
    risultato1=(-b+sqrt(delta))/(2*a);
    risultato2=(-b-sqrt(delta))/(2*a);
    printf("i riusltati sono: %d e %d",risultato1,risultato2);
}
    return 0;
}
