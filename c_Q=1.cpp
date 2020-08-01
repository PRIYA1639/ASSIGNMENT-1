 ANSWER=1  #include<stdio.h>
int main()
{
int a,b,c;
printf("enter a no's a,b,c");
scanf("%d%d%d",&a,&b,&c);
if((a>b) && (a>c))
{
    printf("%d is greater\n",a);
}
else if((b>c) && (b>a))
{
    printf("%d is greater\n",b);

}
else
{
    printf("%d is greater\n",c);
}
}
