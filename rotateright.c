#include<stdio.h>
int rotateright(int x,int n)
{
  n=n%(sizeof(int)*8);
  int i=sizeof(int)*8-n;
   return x>>n|x<<l;
}
int main()
{   int x,n;
    printf("enter the number\n");
    scanf("%d",&x);
    printf("enter the number of rotation\n");
    scanf("%d",&n);
    int newnum=rotateright(x,n);
    printf("the number after (%d) rotation is%x \n",n,newnum);
    return 0;
}
