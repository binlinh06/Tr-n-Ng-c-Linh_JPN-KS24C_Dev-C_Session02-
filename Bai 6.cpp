#include<stdio.h>

int main(){
	
	
	const float Pi=3.14;
	float radius = 5;
	float circumference = 2 * Pi * radius;
	float area = Pi * radius * radius;
	printf("Chu vi hinh tron la:%.2f\n", circumference);
	printf("Dien tich hinh tron là:%.2f\n", area);
	return 0;
}
