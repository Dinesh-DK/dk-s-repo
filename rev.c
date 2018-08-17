#include<stdio.h>
#include<string.h>
void main()
{
    int buff[10];
    fgets(buff,10,stdin);
    puts(strrev(buff));
}
