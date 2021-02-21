#include<stdio.h>
int isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        int s=x+y;
        int z=0;
        while(1)
        {
            s++;
            if(isprime(s))
            {
                z=s-(x+y);
                break;
            }
        }
        printf("%d\n",z);
        t--;
    }
    return 0;
}
