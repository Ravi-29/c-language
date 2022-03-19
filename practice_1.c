#include<stdio.h>
int main()

{
    int physics, chemistry, maths;
    float total;

    printf("physics\n");
    scanf("%d",&physics);
     printf("chemistry\n");
    scanf("%d",&chemistry);
     printf("maths\n");
    scanf("%d",&maths);

    total= (physics+chemistry+maths)/3;
    if((total<40) || physics<33 || chemistry<33 ||maths<33)
    {
      printf("total percentage is %f you are failed\n",total);
    }
else{
    printf("total percentage is %f you are passed\n",total);
}
return 0;
}