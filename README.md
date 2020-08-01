# ASSIGNMENT-1
OOP with c++(ASSIGNMENT)
        ASSIGNMENT -  1
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
ANSWER =2 #include<iostream>
using namespace std;
int main(void)
{
    int A[100], n, i, j, x;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements of array: ";
    for(i = 0; i < n; i++)
        cin >> A[i];
    for(i = 0; i < n; i++)
    {
        for(j=i+1; j<n; j++)
        {

            if(A[i] < A[j])
            {
                x=A[i];
                A[i]=A[j];
                A[j]=x;
            }
        }
    }
    cout << "Second largest number: " << A[1];
    cout << "\nSecond smallest number: " << A[n-2]<< "\n";
}
ANSWER = 3 #include<iostream>
using namespace std;
void display(int *array, int size)
{
    for(int i = 0; i<size; i++)
        cout << array[i] << " ";
    cout << endl;
}
void insertionSort(int *array, int size)
{
    int key, j;
    for(int i = 1; i<size; i++)
    {
        key = array[i];
        j = i;
        while(j>0 && array[j-1]>key)
        {
            array[j] = array[j-1];
            j--;
        }
        array[j]=key;
    }
}
int main(void)
{
  int n;
  cout << "Enter the number of elements: "<<"\n";
  cin >> n;
  int arr[n];
  cout << "Enter elements: " << "\n";
  for(int i = 0; i<n; i++)
  {
      cin >> arr[i];
  }
  insertionSort(arr, n);
  cout << "Array after Sorting: " << "\n";
  display(arr, n);
}
ANSWER=4 #include<stdio.h>
#include<string.h>
void main()
{
    int i=0,j=0;
    char str1[100],str2[100];
    printf("enter a string");
    gets(str1);
    for(i=strlen(str1)-1;i>=0;i--)
        {

            str2[j]=str1[i];
            j++;
            }
            str2[j]='\0';
            printf("the reverse of the given string is %s\n",str2);
            if(strcmp(str1,str2)==0)
            {
                printf("the given string is palintrome\n");
            }
            else
            {
                printf("the given string is not palintrome\n");
            }
    }
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

