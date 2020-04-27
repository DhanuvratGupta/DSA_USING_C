#include<stdio.h>
int gcd(int *p,int *q)
{
    int s=*p+*q;
    int j=0,k=0,fa[*p],fb[*q],fc[s],m=0,n=0,h=0;

        for(int i=1;i<=*p;i++)
            {
                if(*p%i==0)
                {
                    fa[j]=i;
                    j++;
                }
            }


        for(int w=1;w<=*q;w++)
            {
                if(*q%w==0)
                {
                    fb[k]=w;
                    k++;
                }
            }


        for(int e=0;e<j;e++)
        {
            for(int u=0;u<fb[u]!='\0';u++)
            {
                if(fa[e]==fb[u])
                {
                    fc[m]=fb[u];

                    m++;
                }

            }

        }
        for(int g=0;g<m;g++)
        {

            if(fc[0]<fc[g])
            {
                fc[0]=fc[g];

            }


        }
        return(fc[0]);

}
main()
{
    int a,b,c,temp;
    printf("enter tow number->");
    scanf("%d%d",&a,&b);
   temp=gcd(&a,&b);
   printf("%d",temp);
}
