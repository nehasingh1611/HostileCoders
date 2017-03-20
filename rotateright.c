#include<stdio.h>
unsigned int rotateright(unsigned int x,unsigned int n)
{
   for(int i=0;i<n;i++)
   {    if(x%2==0)
        {x>>1;
        }
       else
       {x=x>>1;
       x=x|(1<<(sizeof(int)*8)-1);
       }
   }
   return x;
}
unsigned int main()
{   unsigned int x,n;
    printf("enter the number\n");
    scanf("%d",&x);
    printf("enter the number of rotation\n");
    scanf("%d",&n);
    unsigned int newnum=rotateright(x,n);
    printf("the number after (%d) rotation is%x \n",n,newnum);
    return 0;
}
