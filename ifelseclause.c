#include<stdio.h>

int main()
{
     int num;
     printf("number\n");
     scanf("%d",&num);

     if (num==1)
    {
        printf("number is 1\n");
    }
       else if (num==2)
    {
        printf("number is 2\n");
    }
    else if(num==3)
    {
        printf("number is 3\n");
    }
    else
    {
        printf("not 1,2,3\n");
    }

  return 0;
}