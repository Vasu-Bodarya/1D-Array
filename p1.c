#include<stdio.h>
main(){
	
	int a,b;
	
	printf("Enter A Array Size : ");
	scanf("%d",&a);
	
	int arr[a],i;
	
	for(i=0; i<a; i++){
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	
	
	
	printf("Enter B Array Size : ");
	scanf("%d",&b);
	
	int arr1[a];
	
	for(i=0; i<a; i++){
		printf("arr1[%d]",i);
		scanf("%d",&arr1[i]);
	}
	
	for(i=0; i<a; i++){
		printf("%d ",arr[i]);
	}
	
	for(i=0; i<b; i++){
		printf("%d ",arr1[i]);
	}
	
}
	

