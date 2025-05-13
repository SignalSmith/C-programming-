 #include<stdio.h>
 void main()
 {
 	int i,j,k,row;
 	printf("\n enter the no of rows");
 	scanf("%d",&row);
 	for(i=-1;i<row;i++)
 	{
 		j=i*2;
 		if(j==0)
 		{ printf("\n*");
		 }
		 else
		 {
		 for(k=0;k<j;k++)
		 {
		 	printf(" ");
		 	printf("*");
		 }
	    }
	 }
 }
