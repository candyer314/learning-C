/**
* @file 分段函数.cpp
* @brief 使用switch-case实现分段函数（演示）
* @vertion 2.0
* @date 2025-9-16
*
* @details
* ## 题目描述
* 编写程序计算以下分段函数：
*              {-1，x<0
*     	f（x）={0, x==0
*              {2x, x>0
*
* ##要求
* -使用switch-case语句实现
*
* ##解题思路
* 1. 将连续变量x离散化为三类：负值、零、正值
* 2. 使用嵌套条件判断实现三路分类
* 3. 通过switch-case处理离散后的类别
*
* @warning实际工程中不推荐
*/
#include<stdio.h>
int main()
{
	double x;
	int a;
	scanf_s("%lf", &x);
	if (x < 0) {
		a = 0;
	}
	else if (x == 0) {
		a = 1;
	}
	else {
		a = 2;
	}
	int b;
	switch (a) {
	case 0:  //x<0
		b = -1;
		break;
	case 1:  //x==0
		b = 0;
		break;
	case 2:  //x>0
		b = 2 * x;
		break;
	}
	printf("%d", b);
	return 0;
}