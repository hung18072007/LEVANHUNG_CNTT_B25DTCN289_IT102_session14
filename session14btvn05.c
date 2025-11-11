#include<stdio.h>
long factorial(int num);
int main(){
	int n;
	printf("Moi ban nhap so :");
	scanf("%d",&n);
	printf("Giai cua so %d = %ld",n,factorial(n));
}
long factorial(int num){
	long result=1;
	for(int i=1;i<=num;i++){
		result=result*i;
	}
	return result;
}

