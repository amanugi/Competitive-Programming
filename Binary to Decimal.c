#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int bin,i=0,sum=0;
    printf("enter a binary no");
    scanf("%d",&bin);

    while(bin!=0)
    {
      sum=sum+(pow(2,i)*(bin%10));
      bin=(bin/10);
      i++;
    }
    printf("decimal no is=%d",sum);
    return (sum);
}
