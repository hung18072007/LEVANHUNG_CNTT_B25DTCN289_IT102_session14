#include<stdio.h>
#include<math.h>
float result(float number1,float number2);
int main(){
	float a,b;
	float sum;
	printf("Moi ban nhap so a:");
	scanf("%f",&a);
	printf("Moi ban nhap so b:");
	scanf("%f",&b);
	sum=result(a,b);
	printf("Tong cua hai so a va b =%.2f",sum);
}
float result(float number1,float number2){
	float sum=number1+number2;
	return sum;
}


