#include<stdio.h>
int main()
{
    int t,a,b,c,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        scanf("%d %d",&c,&d);
    if(c>=a && d>=b){
        printf("possible\n");
    }
    else{
        printf("impossible\n");
    }
        
    }
    return 0;
    




}