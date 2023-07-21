#include<stdio.h>
#include<stdlib.h>



int main(){
	
	int size,swap;
	printf("please Enter size : ");
	scanf("%d",&size);
	int *ptr =(int*) malloc(size*sizeof(int));
	printf("Please Enter elements: ");
	for(int i=0;i<size;i++){
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<size-1;i++){
		for(int j=0;j<(size-1)-i;j++){
			if(ptr[j]>ptr[j+1]){
				swap = ptr[j];
				ptr[j] = ptr[j+1];
				ptr[j+1] = swap;
			}
		}
	}
	printf("Elements after swaping is: \n");
	for(int i=0;i<size;i++){
		
		printf("%d\n",ptr[i]);
		

		}
	
	
	
	
	
	
}