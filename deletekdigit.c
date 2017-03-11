#include<stdio.h>
#include<math.h>

void main()

{

int n,j,i,a[100],t,k,temp,x,z;

scanf("%d",&n);

i=0;

j=n;

while(j!=0)

{

    a[i]=j%10;

    i++;

    j=j/10;

}

t=i;

scanf("%d",&k);

for(i=0;i<t;i++)

{

  for(j=i;j<t;j++)

  {

    if(a[i]<a[j])

    {

        temp=a[i];

        a[i]=a[j];

        a[j]=temp;

    }

  }

}

x=0;

for(i=(t-1);i>(t-k);i--)

{
    z=i-k;

    x=x+a[i]*pow(10,z);

}

printf("%d",x);

}
