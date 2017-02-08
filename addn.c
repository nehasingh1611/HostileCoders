#include<stdio.h>
int add(int a[],int n)
{
int i,sum=0;
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("the sum is %d",sum);
return 0;
}
int main()
{
int i,n,a[100];
printf("enter the no. of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
add(a,n);
return 0;
}

