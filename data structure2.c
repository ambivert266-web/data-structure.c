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
	
	scanf("%d",& posi);


		 for(i=posi-1;i<n-1;i++)
		 {  
		   a[i]=a[i+1];
		 }
		 
		  printf("array after deletion");
		 for(i=0;i<10;i++)
		 { 
		   printf("%d",a[i]);
		 }
		 return 0;
}
