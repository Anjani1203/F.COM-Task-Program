#include<stdio.h>
int main(){
	float num1,num2,sum,difference,product;
	printf("enter first number:");
	scanf("%f",&num1);
	printf("enter second number:");
	scanf("%f",&num2);
	
	sum=num1+num2;
	difference=num1-num2;
	product= num1*num2;
	
	printf("\nResults:\n");
	printf("sum=%.2f\n",sum);
	printf("difference=%.2f\n",difference);
	printf("product=%.2f\n",product);
	
	return 0;
}