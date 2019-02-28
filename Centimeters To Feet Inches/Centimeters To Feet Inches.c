#include<stdio.h> // input centimeter, output foot inch

int main()
{
	printf("please type in cm£º\n");

	int Centimeters = 0;
	scanf_s("%d",&Centimeters);

	int Foot = Centimeters / 30.48;
	int Inch=((Centimeters / 30.48)-Foot)*12;

	printf("The foot inches are %d feet %d inches",Foot,Inch);

	return 0;
}