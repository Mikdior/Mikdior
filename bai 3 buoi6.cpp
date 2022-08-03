#include<stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	int arr[n];
	printf("Nhap cac so nguyen tuy y: \n");
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
		}
		int x;
		printf("Nhap so muon nhap=");
		scanf("%d",&x);
		for(int i=0;i<n;i++){
			if(x==arr[i]){
		printf("Vi tri phan tu trong mang la: %d",i);
			}
		if(x!=arr[i]){
			printf("khong tim thay phan tu x");
			}
		}
		}
