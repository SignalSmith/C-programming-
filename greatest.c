#include<stdio.h>
#include<conio.h>
   void main()
   { 
      int x,y,z;
      printf("enter three num");
      scanf("%d %d %d",&x,&y,&z);
      if(x>y&&x>z)
      printf("the greatest num is%d",x);
      else if(y>x&&y>z)
      printf("the greatest num is%d",y);
      else
      printf("the greatest num is%d",z);
      if(x<y&&x<z)
      printf("the lowest num is%d",x);
      else if(y<x&&y<z)
      printf("the lowest num is%d",y);
      else
      printf("the lowest num is%d",z);
   }
