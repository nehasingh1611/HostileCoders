#include<stdio.h>
#include<math.h>

float convertradians(float d);
float computesin(float x);
int main()
{
    float degree,x,sum;
    
    printf("enter the degree");
    scanf("%f",&degree);
    
    x=convertradians(degree);
    sum= computesin(x);
    printf("sin(%f)=%f",degree,sum);
    return 0;
    
}


float convertradians(float d)
{
    float rad;
    rad=(3.1412/180)*d;
    return rad;
}

float computesin(float x)
{
    float term,sum,prev,diff;
    int i;
    
    term=sum=diff=x;
    prev=term;

      for(i=3;diff>0.000001;i=i+2)
    {   prev=term;
       term=(-term*x*x)/(i*(i-1));
       diff=fabs(prev-term);
       sum=sum+term;
    }
    return sum;
}
