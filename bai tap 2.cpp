#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	int x1,x2;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	printf("nhap c=");
	scanf("%d",&c);
	//delta = b*b-4*a*c
	int delta = b*b-4*a*c;
	if(delta < 0){
		//yes
		printf("Phuong trinh vo nghiem");
		}else{
			if(delta == 0){
				//yes
				x1 = x2 = -b/(2*a);
				printf("Phuong trinh co nghiem kep: %2d", x1);
				}else{
					if(delta > 0){
						//yes
						x1 = (-b + sqrt(delta))/(2*a);
						x2 = (-b - sqrt(delta))/(2*a);
						printf("Phuong trinh co hai nghiem phan biet: %.2d %.2d", x1, x2);
				}
		}
		}
		}

