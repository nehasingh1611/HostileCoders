#include <stdio.h>
int add(int a,int b,int c);
int main() {
    int a=4;
    int b=5;
    int c=10;
    printf("sum=%d",add(a,b,c));
    return 0;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
