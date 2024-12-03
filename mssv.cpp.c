
#define Day4
#include<stdio.h>
void nhapsotien(float a[], int n);
void xuatsotien(float a[], int n);
float tongsotien(float a[], int n);
float TBsotien(float a[], int n);
int main()
{
	do{
	float  Day= 0;
	int n ;
	printf("nhap  so duong %d : ");
	scanf("%d",&n);
	nhapsotien(A,n);
	xuatsotien(A,n);
	printf ("\n");
	printf("\nTong so tien chi tieu la: %.1f",tongsotien(A,n));
	printf("\nTrung binh so tien chi tieu la : %.1f",TBsotien(A,n));
}while(i<0||i>n)
	return 0;
}
float TBsotien(float a[], int n){
	int i=0, tb=0;
	for(i=0;i<n-1 Day;i++){
		tong+=a[i];
	}
	return tb;
	
}

float tongsotien(float a[], int n){
	int i=0;
	float tong=0;
	for(i=0;i<n-1 Day;i++){
		tong+=a[i];
	}
	return tong;
}
void nhapsotien(float a[], int n)
{
	int i=0;
	 for(i=0;i< Day; i++){
	 	printf ("\nNhap so tien chi tieu hang ngay %d:");
	 	scanf("%.1f",&n);
	 	
	 }
}
void xuatsotien(float a[], int n){
	int i=0;
	for(i=0;i< Day; i++){
	printf("nhap so tien chi tieu hang ngay:  ");
	scanf("%.1f",a[i]);
	}
}
