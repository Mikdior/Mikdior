#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	printf("nhap c=");
	scanf("%d",&c);
	if(a > b){
	//yes
	if(a > c){
	//yes
	printf("Max: %d",a);
	}else{
	//No
	printf("Max; %d",c);
	}
	}else{
	//No
	if(b > c){
	//yes
	printf("Max: %d",b);
	}else{
		printf("Max: %d",c);
	}
	}
}



	
