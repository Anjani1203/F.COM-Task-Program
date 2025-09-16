#include<stdio.h>
int main(){
	int age;
	printf("Enter your age:");
	scanf("%d" ,&age);
	
	if (age >= 18 && age <= 120)
	{
		printf("You are eligible to vote.\n");
	} 
	else if (age> 0 && age < 18)
	{
		printf("You are not eligiable to vote.\n");
	}
	else
	{
		printf("Invalid age entered.\n");
	}
	
	return 0;
}