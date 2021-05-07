/* Program for Bad Character Heuristic of Boyer Moore String Matching Algorithm
Example1:
Enter the Source String:postsummer
Enter the pattern:summer
Pattern found at location = 5
Example2:
Enter the Source String:prefixandsuffix
Enter the pattern:fix
Pattern found at location = 4
Pattern found at location = 13
Example3:
Enter the Source String:welcome
Enter the pattern:cse
Pattern not found in text
 */
# include <limits.h>
# include <string.h>
# include <stdio.h>

# define NO_OF_CHARS 256

int max (int a, int b) { return (a > b)? a: b; }

void badCharHeuristic( char *str, int m, int badchar[NO_OF_CHARS])
{
    int i;
    for(i=0;i<NO_OF_CHARS;i++)
    {
        badchar[i]=-1;
    }
    for(i=0;i<m;i++)
    {
        badchar[(int)str[i]]=i;
    }
	//enter code here
}

void BMSearch( char *txt, char *pat)
{
    int n=strlen(txt),m=strlen(pat),i=0,j=0,flag=0;
    int badchar[NO_OF_CHARS];
    badCharHeuristic(pat,m,badchar);
    while(i <= n-m)
    {
        j=m-1;
        while(txt[i+j]==pat[j])
        {
            j--;
        }
            if(j<0)
            {
                printf("Pattern found at location = %d\n",i+1);
                flag=1;
                i+=(i+m < n)?m-badchar[txt[i+j]]:1;
            }
            else
            {
                i+=max(1,j-badchar[txt[i+j]]);
            }
    }
    if( i > n-m && flag==0)
    {
        printf("Pattern not found in text");
    }

}


int main()
{
	char t[100], p[50];

    printf("Enter the Source String:");
     //gets(t);
     scanf("%s",t);
     printf("Enter the pattern:");
     //gets(p);
     scanf("%s",p);

        BMSearch(t, p);
    return 0;

}
