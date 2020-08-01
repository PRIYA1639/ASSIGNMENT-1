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
