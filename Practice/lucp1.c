#include<stdio.h>

int main()
{
    int n=0;
    int div=0;
    scanf("%d%d",&n,&div);
    int gm=0;
    
    switch (div)
    {
        case 1 : 
            if(n<=3)
            gm=5*n;
            break;
        
        case 2:
            if(n<=2)
            gm=4*n;
            break;
       
        case 3:
            if(n<=1)
            gm=5*n;
            break;
        
        default:
            printf("damn son je kya kiya");

    }
    printf("%d",gm);
    

}