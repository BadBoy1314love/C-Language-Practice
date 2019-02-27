#include<stdio.h> //输入厘米，输出英尺英寸

int main()
{
	printf("请输入厘米数：\n");

	int Centimeters = 0;
	scanf_s("%d",&Centimeters);

	int Foot = Centimeters / 30.48;
	int Inch=((Centimeters / 30.48)-Foot)*12;

	printf("则英尺英寸为%d英尺%d英寸",Foot,Inch);

	return 0;
}