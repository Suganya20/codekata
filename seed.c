 #include<stdio.h>
void main()
{
int y,x,t,s,k;
scanf("%d",&y);
for(s=1;s<y;s++)
{
    t=s;
    x=s;
    while(t!=0)
    {
        k=t%10;
        x=x*k;
        t=t/10;
    }
    if(x==y)
        printf("%d ",s);
}
}
