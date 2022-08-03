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
	int c;
	for(int i=0; i<n; i++){
	if(ary[i]%2==0);
	i++;
	printf("Cac so le: %d",i);
	}
	int avg, x=0, y=0;
	for(int i=0; i<n; i++){
	if(ary[i]/2!=0);
	x = ary[i]+x;
	y++;
	}
	avg=(x/y);
	printf("Trung binh cong cua cac so le o vi chi: %d ",avg);
	}

