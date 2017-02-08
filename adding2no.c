#include <stdio.h>
int add(int a,int b);
int main() {
    int a=4;
    int b=5;
     printf("sum=%d",add(a,b));
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
