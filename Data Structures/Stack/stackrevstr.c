/* String Reversal using stack
Example:
Enter string:computer
Reversed string:retupmoc
*/

#include <stdio.h>
#include<string.h>
int stack[100],i,n,top=-1;
char str[25];
void push();
char pop();
void main ()
{
   // int n,i;
    printf("Enter string:");
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        push();
    }
    for(i=0;i<n;i++)
    {
        str[i]=pop();
    }
    printf("Reversed string:%s",str);
}

void push ()
{
    //int n=strlen(str);
    //char s[20];
   if(top==n-1)
   {
       printf("Stack is full");
   }
   else
   {
     //top++;
     stack[++top]=str[i];
   }
}

char pop()
{
  if(top==-1)
  {
      printf("Stack is empty");
  }
  else
  {
    //  top--;
      return(stack[top--]);
  }
}
