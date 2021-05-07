#include<stdio.h>
#include<string.h>
void LPS(char *pat,int *lps,int M);
void ASearch(char *pat,char *txt);
void main()
{
    char txt[100],pat[100];
    printf("Enter source string:");
    scanf("%s",&txt);
    printf("Enter pattern string:");
    scanf("%s",&pat);
    ASearch(pat,txt);
}
void ASearch(char *pat,char *txt)
{
    int M=strlen(pat),N=strlen(txt),i=0,j=0,flag=0;
    int lps[M];
    LPS(pat,lps,M);
    while(i < N)
    {
        if(txt[i]==pat[j])
        {
            i++;
            j++;
        }
        if(j==M)
        {
            printf("Found pattern at index %d\n",i-j+1);
            flag=1;
            j=lps[j-1];
        }
        if(i<N && txt[i]!=pat[j])
        {
            if(j>0)
            {
                j=lps[j-1];
            }
            else
            {
                j++;
            }
        }
    }
    if(i==N && flag==0)
    {
        printf("%s pattern not found in text",pat);
    }
}
void LPS(char *pat,int *lps,int M)
{
    int len=0,i=1;
    lps[0]=0;
    while(i<M)
    {
        if(pat[len]==pat[i])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len>0)
            {
               len=lps[len-1];
            }
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }
}
/* Program to Implement KMP pattern matching algorithm

Example 1:
Enter the Source String:prefixandsuffix
Enter the pattern:fix
Found pattern at index 4
Found pattern at index 13
Example 2:
Enter the Source String:prefixandsuffix
Enter the pattern:fox
fox pattern not found in text



#include<stdio.h>
#include<string.h>
void computeLPSArray(char* pat, int M, int* lps);

  void KMPSearch(char* pat, char* txt)
{
    int N=strlen(txt),M=strlen(pat),i=0,j=0,flag=0;
    int lps[M];
    computeLPSArray(pat,M,lps);
    while(i < N)
    {
        if(txt[i]==pat[j])
        {
            i++;
            j++;
           // flag=1;
        }
        if(j==M)
        {
            printf("Found pattern at index %d\n",i-j+1);
            flag=1;
            j=lps[j-1];
        }
        if(i<N && txt[i]!=pat[j])
        {
            if(j>0)
            {
                j=lps[j-1];
            }

            else
            {


                i++;
            }
        }
    }
    if(i==N && flag==0)
    {
        printf("%s pattern not found in text",pat);
    }
}

// Fills lps[] for given patttern pat[0..M-1]
void computeLPSArray(char* pat, int M, int* lps)
{
    int i=0,len=0;
    lps[0]=0;
    i=1;
    while(i < M)
    {
        if(pat[i]==pat[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
            if(len>0)
            {
                len=lps[len-1];
            }
            else
            {lps[i]=0;
                i++;
            }
        }
    }
}

// Driver program to test above function
int main()
{
    char t[100], p[50];

    printf("Enter the Source String:");
     //gets(t);
     scanf("%s",t);
     printf("Enter the pattern:");
     //gets(p);
     scanf("%s",p);

        KMPSearch(p, t);
    return 0;
}
*/
