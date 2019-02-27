#include <stdio.h> 
/*
BCD数是用一个字节来表达两位十进制的数，
每四个比特表示一位。所以如果一个BCD数的
十六进制是0x12，它表达的就是十进制的12.
但是小明没学过BCD，把所有的BCD数都当作二
进制数转换成十进制输出了。于是BCD的0×12
被输出成了十进制的18了！现在，你的程序要读
入这个错误的十进制数，然后输出正确的十进制
数。提示：你可以把18转换回0x12，然后再转换回12.
*/

int main()
{
	int Number;
	printf("请输入一个在（0—153）范围内的整数：");
	scanf_s("%d", &Number);

	int A = Number / 16;
	int B = Number % 16;
	int C = A * 10 + B * 1;

	printf("则修正后的数为%d", C);
}

/*
int main()//有问题
{
	int x;
	scanf_s("%d",&x);
	printf("%x", x);
}
*/