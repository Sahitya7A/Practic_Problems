#include <stdio.h>
#include<math.h>

long recpower(int, int);
long nonrecpower(int , int );

int main()
{    int p, num;
long result1, result2;
printf("Enter a number : ");
scanf("%d", & num);
printf("Enter it's power: ");
scanf("%d", &p);

result1 = recpower(num, p);
printf("Recursive function result :%d^%d is %ld", num, p, result1);

result2 = nonrecpower(num, p);
printf("\nNon recursive function result: %d^%d is %ld", num, p, result2);

return 0;
}


long recpower(int num, int p)
{
if (p)
{
return (num * recpower(num, p - 1));
}
return 1;
}


long nonrecpower(int num, int p)
{
long power = 1;
int i;

for(i=1; i<=p; i++)
{
power = power * num;
}

return power;
}

