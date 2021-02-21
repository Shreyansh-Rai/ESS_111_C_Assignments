#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        int n;
        scanf("%d",&n);
        if (n<=3)
        {
            printf("%d\n",0);
        }
        else if(n%4==0)
        {
            printf("%d\n",(n/4)*(n/4));
        }
        else if(n%4!=0)
        {
            printf("%d\n",(n/4)*((n/4)+1));
        }
        t--;
    }
    return 0;
}
