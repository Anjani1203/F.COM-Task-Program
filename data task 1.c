#include<stdio.h>
int main(){
	//declare and initialize variable
	int int_variable=10;
	float float_variable=3.14;
	char char_variable='A';
	double double_variable=123.456789;
	
	//print the variable using format specifiers
	printf("Integer variable:%d\n",int_variable);
	printf("Float variable:%f\n",float_variable);
	printf("character variable:%c\n",char_variable);
	printf("Double variable:%1f\n",double_variable);
	
	return 0;
}