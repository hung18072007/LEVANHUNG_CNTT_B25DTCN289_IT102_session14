#include<stdio.h>
int count(int arr[],int n );
int main(){
	int n=0;
	int arr[100];
	printf("Moi ban nhap so phan tu cua mang:");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
	    printf("arr[%d]=",i);
	    scanf("%d",&arr[i]); 
    }
	count(arr,n);	
}
int count(int arr[],int n){
	int i;
	printf("\nCac phan tu co trong mang:");
	for(i=0;i<n;i++){
		printf("\narr[%d]=%d",i,arr[i]);
	}
	return arr[i];
}

