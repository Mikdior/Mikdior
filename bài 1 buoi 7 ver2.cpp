#include<stdio.h>
#include<math.h>
int main(){
	int n;
	double s=0;
	printf("Nhap n=");
		scanf("%d",&n);
	for(int i=1; i<=n; i++){
		s=s+(1.0/i);
		}
printf("s = 1 + 1/2 + 1/3 + ... + 1/n = %lf",s);
}
