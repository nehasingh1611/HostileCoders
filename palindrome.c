#include<stdio.h>
int reverse(int n)
{int newN=0;
while(n>0)
{newN=(newN*10)+(n%10);
n=n/10;}
return newN;}
int main()
{int givenN,newN;
printf("enter the number");
scanf("%d",&givenN);
newN=reverse(givenN);
if(newN==givenN)
{printf("the given number is a palindrome");
}
else
{printf("the given number is not a palindrome");
}
return 0;
}
