#include<stdio.h>
  void main()
  {
  	int i,j,k,row;
  	printf("enter row");
  	scanf("%d",&row);
  	for(i=0;i<row;i++)
  	{
  		j=i*2;
  		for(k=0;k<j;k++)
  		{
  			printf("*");
		  }
		  printf("\n");
	  }
  }
