#include<stdio.h>
#include<conio.h>
#define max 100
 void input(int [],int);
 void calculate(int [], int);
 void output(int [],int);
  void main()
  {
  int arr[max],n;
  printf("\n Enter the no of elements: ");
  scanf("%d",&n);
  input(arr, n);
  calculate(arr,n);
  output(arr,n);
  }
  void input(int a[], int k)
  {
  int i;
  printf("\n Enter the elements in the array: ");
  for(i=0;i<k;i++)
  scanf("%d",&a[i]);
  }
  void calculate(int b[],int m)
  {
   int i,j,c;
   for(i=0;i<m;i++)
  {
   for (j=i+1;j<m;j++)
    {
     if(b[i]>b[j])
      {
        c=b[i];
        b[i]=b[j];
        b[j]=c;
      }
    }
  }
  }
  void output(int p[],int l)
  {
  int i;
   printf("\n Array elements in ascending order: ");
   for(i=0;i<l;i++)
   printf("%d ",p[i]);
  }
