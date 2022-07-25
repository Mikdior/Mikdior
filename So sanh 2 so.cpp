#include <stdio.h>
int main(){
	int a;
	printf("nhap a=");
	scanf("%d",&a);
	
	int b;
	printf("nhap b=");
	scanf("%d",&b);
	
	if(a>b){
		//yes
		printf("Max: %d",a);
		}else{
			//no
			if(a<b){
				//yes
				printf("Max: %d",b);
				}else{
					
					//no
					printf("Hai so bang nhau");
					}
		}
	}
