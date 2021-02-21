#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
        int n;
        scanf("%d",&n);
        int win[n];
        int tie[n];
        int points[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",win+i);
            points[i]=win[i]*3;
        }

        for(int i=0;i<n;i++)
        {
            scanf("%d",tie+i);
            points[i]+=tie[i];
        }
        int max=points[0];
        for(int i=0;i<n;i++)
        {
            if(max<points[i])
            {
                max=points[i];
            }
        }
        printf("%d\n",max);
        t--;
    }
    return 0;
}
