#include<stdio.h>
  void main()
  {
  	int a=2;
  	printf("%u",&a);
  	int *b;
  	printf("/n %u",&b);
  	b=&a;
  	printf("/n %u",b);
  	b=b+1;
  	printf("\n %d",b);
  }
