/*Create Array of Structure to Intialise  and print  cricket match details
input=
              {"IND","AUS","PUNE",1},
              {"IND","PAK","NAGPUR",1},
              {"IND","NZ","MUMBAI",0},
              {"IND","SA","DELHI",1}

Output=

Match : 1
IND Vs AUS
Place : PUNE
Winner : IND

Match : 2
IND Vs PAK
Place : NAGPUR
Winner : IND

Match : 3
IND Vs NZ
Place : MUMBAI
Winner : NZ

Match : 4
IND Vs SA
Place : DELHI
Winner : IND  */
#include<stdio.h>
struct cricket
{
    char m1[10];
    char m2[10];
    char m3[10];
    int res;
}match[]={
              {"IND","AUS","PUNE",1},
              {"IND","PAK","NAGPUR",1},
              {"IND","NZ","MUMBAI",0},
              {"IND","SA","DELHI",1}
          };
struct cricket *a;
int main()
{
    struct cricket *a;
    a=match;
    int i;
    for(i=0;i<4;i++)
    {
        if((a->res)==1)
        {
        printf("Match : %d\n",(i+1));
        printf("%s Vs %s\n",a->m1,a->m2);
        printf("Place : %s \n",a->m3);
        printf("Winner : %s \n",a->m1);
    }
    else
    {
        printf("Match : %d\n",(i+1));
        printf("%s Vs %s\n",a->m1,a->m2);
        printf("Place : %s \n",a->m3);
        printf("Winner : %s \n",a->m2);
    }
    a++;
    }
    return 0;
}
