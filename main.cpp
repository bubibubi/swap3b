#include <stdio.h>

int main() {
    int a;
    int b;
    a = 10;
    b = 20;
    int t = a;
    a=b;
    b=t;
    printf("a=%d, b=%d\n",a,b);
}
