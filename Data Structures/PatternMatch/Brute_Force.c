/*Program to implement Pattern Matching Technique using Brute Force Algorithm

Example1:
Enter the Source String:welcome
Enter the pattern:come
come pattern found at index 4
Example2:
Enter the Source String:welcome
Enter the pattern:cse
cse pattern not found in text
Example3:
Enter the Source String:comewelcome
Enter the pattern:come
come pattern found at index 1
come pattern found at index 8*/

#include<stdio.h>
#include<string.h>
void brute_force(void);
char t[100],p[50];
void main()
{


     printf("Enter the Source String:");
     //gets(t);
     scanf("%s",t);
     printf("Enter the pattern:");
     //gets(p);
     scanf("%s",p);
     brute_force();



}
void brute_force()
{
    int n,m,i,j;
    int flag=0;
    n=strlen(t);//TEXT
    m=strlen(p);//PATTERN
    for(i=0;i<n;i++)
    {
        j=0;
        while(j<m && t[i+j]==p[j])
        {
            j++;
            if(j==m)
            {
                flag=1;
                printf("%s pattern found at index %d\n",p,i+1);
            }
        }
    }
    if(i==n && flag==0)
    {
        printf("%s pattern not found in text",p);
    }

}

