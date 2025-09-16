#include<stdio.h>
#define pi 3.14159
int main(){
	float radius, area;
	printf("enter the radius of the circle:");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("the area of the circle with %.2f is :%.2f\n",radius, area);
	
	return 0;
}