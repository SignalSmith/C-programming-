#include<stdio.h> 
#include<conio.h> 
 void main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n!=0)    
{    
r=n%10;    
sum=r+(sum*10);    
n=n/10;    
}    
if(temp==sum)    
   printf("palindrome num ");    
else    

printf("not a palindrome number");   
}
