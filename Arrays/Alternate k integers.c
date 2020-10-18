#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,m,i,j,k,l,x=0,y=0,z,a,b;
scanf("%d %d",&n,&m);
int c[n];
for(i=0;i<n;i++)
{
    scanf("%d",&c[i]);
}
l=n/m;
z=m;
a=n;
b=n-m;
while(x<l)
{
    if(x<l)
    {
        for(i=y;i<z;i++)
        {
            printf("%d ",c[i]);
        }
        y=z;
        z=z+m;
        x++;
    }
    if(x<l)
    {
        for(i=b;i<a;i++)
        {
            printf("%d ",c[i]);
        }
        a=b;
        b=b-m;
        x++;
    }
}
}