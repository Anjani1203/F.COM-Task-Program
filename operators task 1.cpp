#include<stdio.h>
int main(){
	int a,b;
	printf("enter two integers:");
	scanf("%d %d",&a,&b);
	
	printf("\nresults of arithmetic operation:\n");
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d =%d\n",a,b,a-b);
	printf("%d * %d =%d\n",a,b,a*b);
	
	if (b!=0){
		printf("%d / %d =%d\n",a,b,a/b);
		printf("%d %% %d =%d\n",a,b,a%b);
	}
	else{
		printf("division and moodulus by zero is not allowed.\n");
	}
	
	return 0;
}