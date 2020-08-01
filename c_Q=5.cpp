ANSWER =5 #include<stdio.h>
void main()
{
int num,rev,sum=0,temp;
printf("enter a number");
scanf("%d",&num);
temp=num;
while(num>0)
{
rev=num%10;
sum=(sum%10)+rev;
num=num/10;
}
if(temp==num)
{
printf("the given no. %d is palintrome number\n");
}
else
{
printf("the given no. %d is not a palintrome number\n");

}
}
