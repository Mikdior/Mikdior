#include<stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	int ary[n];
	printf("Nhap cac so nguyen tuy y: \n");
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
		}
		int avg, x=0; 
		int y=0;
		for(int i=0;i<n;i++){
			if(ary[i]%2==1);
			x= ary[i]+x;
			y++;
			i+=1;
			}
			avg=(x/y);
			printf("Trung binh cong cua cac so le = %d",avg);	
}
