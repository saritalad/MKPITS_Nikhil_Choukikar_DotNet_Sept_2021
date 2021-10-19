#include<stdio.h>
int main()
{
 int n,i,r[8];
 
 printf("Enter the value of n:");
 scanf("%d",&n);
 
 for(i=0;i<9;i++)
 {
 r[i]=n%10;
 n=n/10;
 
 }
 for(i=8;i>=0;i--)
 {
 printf("%d",r[i]);
 }

}


