#include<stdio.h>
int main(){
	//kieu so nguyen
	int age = 18;
	//kieu so thuc do chinh xac don
	float height = 1.70;
	//kieu so thuc do chinh xac kep
	double pi = 3.141592653589793;
	//kieu ky tu
	char grade = 'C';
	//in ra cac gia tri cua bien
	printf("Age:%d\n",age);
	printf("Height:%.2f\n",height);
	printf("Pi:%.15f\n",pi);
	printf("Grade:%c\n",grade);
	return 0;
}
