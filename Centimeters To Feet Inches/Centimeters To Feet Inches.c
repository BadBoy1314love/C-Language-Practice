#include<stdio.h> //�������ף����Ӣ��Ӣ��

int main()
{
	printf("��������������\n");

	int Centimeters = 0;
	scanf_s("%d",&Centimeters);

	int Foot = Centimeters / 30.48;
	int Inch=((Centimeters / 30.48)-Foot)*12;

	printf("��Ӣ��Ӣ��Ϊ%dӢ��%dӢ��",Foot,Inch);

	return 0;
}