#include<stdio.h>
int main()
{     
    int a[10],n=8,i,posi,element;
    printf("enter the array element");
    for (i=0;i<n;i++)
    {  
      scanf("%d",&a[i]);
	}
	printf("enter the posi");
	{
	scanf("%d",& posi);}
	printf("enter the element");{
	scanf("%d",& element);
}
       for (i=n;i>posi-1;i--)
       { 
         a[i]=a[i-1];   }
         { a[posi-1]=element;n++;
		 }
		 printf("array after insertation");
		 for(i=0;i<10;i++)
		 { 
		   printf("%d",a[i]);
		 }
		 return 0;
}
