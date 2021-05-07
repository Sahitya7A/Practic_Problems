#include<stdio.h>
enum monthlist
	{
	   jan,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
	};

 void main()
 {
    enum monthlist day;
   for(day=jan;day<=dec;day++)
  {
  printf(“%d”,day);
  }
  }
