#include<stdio.h>

int main(){
    int t=0;
    scanf("%d",&t);
    while(t!=0)
    {
        float money;
        scanf("%f",&money);
        float x=0;
        float sum=0.0;
        while(1)
        {
            scanf("%f",&x);
            if(x==-1)
            {
                break;
            }
            sum+=x;
        }
        sum*=1.18;
        if(money>=sum)
        {
            printf("ENOUGH MONEY\n");
        }
        else
        {
            printf("$%.2f SHORT\n",(sum-money));
        }
        t--;
    }
    return 0;
}
 