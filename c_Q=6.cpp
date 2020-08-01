ANSWER=6 #include<stdio.h>
void main()
{
int num,i,count=0;
printf("enter a number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
if(num%i==0)
{
count++;
}
}
if(count==2)
{
printf("the given no. %d is prime number\n",num);
}
else
{
printf("the given no. %d is not a prime number\n because the no. is divisible by\n");
for(i=1;i<=num;i++)
{
if(num%i==0)
{
printf("%d\n",i);
}
}
}
}

