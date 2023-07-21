#include<stdio.h>

int Fact(int num);
int main(){
	
	int num, res;
	printf("Please Enter number: ");
	scanf("%d",&num);
	
	res = Fact(num);
	
	printf("The result is %d",res);
	
	
	
	
	
	
	
	
}
int Fact(int num){
	
	if(num == 1)
		return num;
	else
		return num * Fact(num-1);
	
	
}