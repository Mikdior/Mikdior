#include <stdio.h>
int main(){
	float a;
	printf("Nhap a=");
	scanf("%d",&a);
	
	float b;
	printf("Nhap b=");
	scanf("%d",&b);
	
	float c;
	printf("Nhap c=");
	scanf("%d",&c);
	
	float x1;
	
	float x2;
	
	// dealta = b*b-4*a*c
	float delta = b*b - 4*a*c;
	if(delta < 0){
		// chay vao day neu Yes
		printf("Phuong trinh vo nghiem");
	}else{
		if(delta == 0){
			// chay vao day neu Yes
			float x1 = x2 = -b/(2*a);
			printf("Phuong trinh co nghiem kep",x1);
		}else{
			if(delta < 0){
				// chay vao day neu Yes
				float x1,x2;
				x1 = (-b + delta) / (2*a);
                x2 = (-b - delta) / (2*a);
                printf("Phuong trinh da cho co hai nghiem phan biet",x1,x2);
			}
		}
	}
}
