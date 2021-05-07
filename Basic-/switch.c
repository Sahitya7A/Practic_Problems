#include<stdio.h>
void main()
{
    int a,b,c,ch;
    printf("enter a,b values\n");
    scanf("%d%d",&a,&b);
    printf("***!@##$MENU^&*%$#@@@@***\n");
    printf("enter your choice\n");
    printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n5.modulus\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:c=a+b;
        printf("%d\n",c);
        break;
        case 2:c=a-b;
        printf("%d\n",c);
        break;
        case 3:c=a*b;
        printf("%d\n",c);
        break;
        case 4:c=a/b;
        printf("%d\n",c);
        break;
        case 5:c=a%b;
        printf("%d\n",c);
        break;
        default:
            printf("invlidcoice\n");
            break;
    }
}
