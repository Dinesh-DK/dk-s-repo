#include<stdio.h>
void main()
{
    int i=0,f=1,N;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        f=f*i;
    printf("%d",f);
}
