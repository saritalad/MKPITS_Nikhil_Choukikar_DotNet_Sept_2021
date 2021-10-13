#include<stdio.h>
int main()
{
 int a,b,c,r;
 
 printf("Enter the two no.s");
 scanf("%d%d",&a,&b);
 if(a==0)
 {printf("\n The value of HCF is %d",b);
 goto last;
 }
 if(b==0)
 {printf("\n The value of HCF is %d",a);
 goto last;
 }
 for(;;)
 {
 r=a%b;
 if(r==0)break;
 a=b;
 b=r;
 }
 printf("HCF of no.is:%d",b);
 
 last:
 getch();
 return 0;
 }
 

