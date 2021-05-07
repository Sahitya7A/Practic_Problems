#include <stdio.h>
#include<string.h>

void main()
{
    char s1[10],s2[10];
    int count=0,i,j;
    printf("Enter string:");
    scanf("%s",s1);
    for(i=0,j=0;i<strlen(s1);i++)
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
        {

            count++;
            printf("%c",s1[i]);

        }
        else
        {
            s2[j]=s1[i];
            j++;
        }
    }



    printf("%s",s2);
    printf("\ncount of vowels:%d",count);
}
