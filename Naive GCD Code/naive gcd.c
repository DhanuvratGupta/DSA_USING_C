#include<stdio.h>
#include<conio.h>
int min(int p,int q)
{
    if(p>q)
    {
        return(q);
    }
    else{return(p);}
}
main()
{
    int a,b,c=0,minimum ;
    printf("enter no");
    scanf("%d%d",&a,&b);
    minimum = min(a, b);
    for(int i=1;i<=minimum ;i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            c=i;
        }
    }
    printf("%d",c);
    getch();
}
