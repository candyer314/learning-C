/**
* @file 分段函数.cpp
* @brief 使用switch-case实现分段函数（演示）
* @vertion 1.0
* @date 2025-9-16
* @details
* ## 题目描述
* 编写程序计算以下分段函数：
*              {-1，x<0
*     	f（x）={0, x==0
*              {2x, x>0
*
*##要求
* -使用switch-case语句实现
*
*##解题思路
* 1.由于switch-case只能处理离散值，需要将连续变量x离散化
* 2.利用布尔表达式（x>=0)将输入转化为0或1
*
* @warning 实际工程中不推荐
*/
#include <stdio.h>
int main()
{
	double x;
	scanf_s("%lf", &x);

	//将连续变量离散为两类
	int a = x >= 0;
	int b = 0;
	switch (a) {
	case 0:   //x<0
		b = -1;
		break;
	case 1:  //x>=0
		b = 2 * x;  //注意：这里会发生double到int的隐式转换
		break;
	}
	printf("f(x)=%d", b);
	return 0;
}