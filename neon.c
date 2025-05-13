#include<stdio.h> 
#include<conio.h> 
 void main() 
 {
 	int n,r,c,sum,t;
 	sum=0;
 	printf("enter the number");
 	scanf("%d",&n);
 	t=n;
 	c=n*n;
 	while(c!=0)
 	{
 		r=c%10;
 		sum=sum+r;
 		c=c/10;
	}
	if(t==sum)
	    printf("neon num");
	else
	    printf("not neon num");
 }
