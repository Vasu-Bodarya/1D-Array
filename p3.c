#include<stdio.h>
main(){
	
	int a;
	
	printf("Enter Your Array Size : ");
	scanf("%d",&a);
	
	int arr[a],i;
	
	for(i=0; i<a; i++){
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<a; i++){
		printf("%d ",arr[i]*arr[i]);
	}
	
}
