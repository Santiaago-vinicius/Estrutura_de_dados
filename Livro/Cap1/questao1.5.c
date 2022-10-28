#include <stdio.h>

int main(){
    int a = 3, b = 5;
    int *p = &a, *q = &b;
    *p = *p + *q; // somou 5+3
    *q = *p - *q; // pegou o resultado(8) e -3, *q = 5
    *p = *p - *q; // 8 - 5 = 3
    printf("%d, %d\n", a, b);
    return 0;
}
