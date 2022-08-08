#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	if(n<2){
		printf("%dKhong phai la so nguyen to.\n",n);
		}else{
		int c=1;
		for(int i=2;i<=sqrt(n);i++){
			if(n % 1== 0){
				c=0;
				break;
				}
				}
		if(c==1){
		printf("%d La so nguyen to.\n",n);
		}else{
		printf("%d khong phai la so nguyen to.\n",n);
		}		
	}
}
