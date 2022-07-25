#include <stdio.h>
int main (){
	int a;
	printf("nhap a=");
	scanf("%d",&a);
	
	int b;
	printf("nhap b=");
	scanf("%d",&b);
	
	int c;
	printf("nhap c=");
	scanf("%d",&c);
//int Min = a;
	if(b<a){
		//yes
		printf("Min = b: %d",b);
		}else{
			//No
		if(c<a){
			//yes
			printf("Min = c: %d",c);
			}else{
				//No
				printf("Min = a: %d",a);
			}
		}
	}
