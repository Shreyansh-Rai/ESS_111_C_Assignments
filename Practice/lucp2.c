#include<stdio.h>
#include<math.h>
int max(int a, int b)
{
    return a>b?a:b;
}
int min(int a,int b)
{
    return a>b?b:a;
}
int tables()
{
   int n;
   scanf("%d",&n);
    for (int i=1;i<=10;i++)
    printf("%d x %d = %d\n",n,i,n*i);
    return 0;
}
int natlogapprox() //using the supplied formula which is probably wrong but i do not care
{
    float x;
    scanf("%f",&x);
    double s=0;
    for (int i=1;i<=7;i++)
    {
        s+= pow(((x-1)/x),i)/2;
    }
    printf("%d",s);
    return 0;
}
int pygen()
{
    int b;
    for(int c=3;c<=30;c++)
    {
        for(int a=3;a<c;a++)
        {
            b=sqrt((c*c-a*a));
            if(b==sqrt((c*c-a*a)) && a<b)
            printf("%d %d %d\n",a,b,c);
        }//the order of printing and the efficiency of the second loop can be further modified but has not been in this question because i am very lazy.
    }
    return 0;
}
int ramanum()
{
    int k=0;
    
    for(int i=2;i<=10000;i++)
    {
        for(int j=1;j<cbrt(i);j++)
        {
            int ch= cbrt(i - j*j*j);
            if(ch==cbrt(i-j*j*j))
            k++;
        } //here k stores the number of times we can find sum of squares such that the sum of cubes is i and since
        //in ramanujan there are 2 pairs ie, 4 such values we get 4 numbers ie, k=4 => ramanujan

    if(k==4)
    printf("%d is Ramanujan number",i);
    k=0;
    }
}
int binco(int n,int r)
{
    int f=1;
    for(int i =n;i>n-r;i--)
    {
        f*=i;
    }
    if(n==0)
    f=1;
    return f;
}

int pascal()
{
    int row;
    int tp;
    
    scanf("%d",&row);
    for(int i=0;i<row;i++)
    {
        for(int sp=1;sp<=row-1-i;sp++)
        printf(" ");
        for(int j=0;j<=i;j++)
        {
            
            tp=min(i-j,j);
            printf("%d ",binco(i,tp)/binco(tp,tp));
        }
        printf("\n");
    }
}
int dtoo()
{
    int s=0;
    int i=0;
    int n;
    scanf("%d",&n);
    printf("The value in octal should be %o\n",n);
    while(n!=0)
    {
        int r=n%8;
        s=pow(10,i)*r+s;
        n/=8;
        i++;
    }
    printf("value is: %d",s);
}
int armstrong()
{
    for(int i=1;i<=500;i++)
    {
        int t=i;
        float s=0;
        while(t!=0)
        {
            s+= pow(t%10,3);
            t/=10;
        }
        if((int)s==i)
        printf("%d is an armstrong number\n",i);
    }
    return 0;
}
int main()
{
    //tables();
    //natlogapprox(); 
    //pygen();
    //ramanum();
    //pascal();
    //dtoo();
    //armstrong();
    return 0;
}
#include<stdio.h>
int factor(int n)
{
    int f=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        f=i;
    }
    return f;
}
int main(){
    int n;
    scanf("%d",&n);
    int p=1;
    int q=1;
    
    p=factor(n);
    q=n/p;
    for(int i=1;i<=p;i++)
    {
       for(int j=1;j<=q;j++)
       {
           for(int k=1;k<=i;k++)
           printf("*");
           for(int k=1;k<=p-i;k++)
           printf(" ");
       }
       printf("\n");
    }
    return 0;
}
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int s0=1,s1=1;
    int sn=0;
    if(n>=2)
    {
        for(int i=2;i<=n;i++)
        {
            sn=s1+s0*s0;
            s0=s1;
            s1=sn;
        }
        printf("%d\n",sn);
    }
    if(n==1)
    printf("%d\n",s1+s0);
    if(n==0)
    printf("%d\n",s0);
    
    return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
    int n1;
    int n2;
    scanf("%d%d",&n1,&n2);
    int t=0;
    int f1,f2;
    f1=0;f2=0;
    int s=0;
    int d=0;
    
    while(n1>0 || n2>0)
    {
        
        int d1=n1%10;
        int d2=n2%10;
        if(d1>6||d2>6)
        {
            f1=1;
            break;
        }
        else if(d1+d2>=6)
        {
            s= s+(int)pow(10,d)*(d1+d2-6);
            s=s+(int)pow(10,d+1);
        }
        // else if((d1+d2)==6)
        // {
        //     s+=(int)pow(10,d+1);
        // }
        else if((d1+d2)<6)
        {
            
            s= s+(int)pow(10,d)*(d1+d2);
            
        }
        n1/=10;
        n2/=10;
        d++;
        if(d>3)
        {
            f2=1;
            break;
        }
        printf("%d",s);
    }
    if(f1==1||f2==1)
    printf("Inavlid input");
    else
    {
        printf("%d",s);
    }
    
    return 0;
}
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int f=0;
    if(n>0&&n<65535)
    {
        for(int i=2;i<=n;i+=2)
        {
            if(n%i==0)
            {
                printf("%d ",i);
                f=1;
            }
            
        }
        
        if(f==0)
        printf("No even divisors\n");
    }
    else
    {
        printf("Invalid input");
    }
    
    return 0;
}
