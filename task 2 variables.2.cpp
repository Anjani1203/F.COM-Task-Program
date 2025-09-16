#include<stdio.h>
int main(){
	int a,b;
	printf("enter two integers:");
	scanf("%d %d",&a,&b);
	printf("\nbefore swapping:a=%d,b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping(arithmetic method):a=%d,b=%d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swapping again(XOR method):a=%d,b=%d\n",a,b);
	
	return 0;
}