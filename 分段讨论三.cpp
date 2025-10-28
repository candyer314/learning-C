/**
 * @file 分段函数.cpp
 * @brief 使用switch-case实现分段函数（创新离散化方法）
 * @version 3.0
 * @date 2025-9-16
 *
 * @details
 * ## 题目描述
 * 编写程序计算以下分段函数：
 *
 *          { -1,  x < 0
 *   f(x) = {  0,  x = 0
 *          { 2x,  x > 0
 *
 * ## 解题思路
 * 使用创新的离散化方法：
 * - 定义 a = (x >= 0)   // x非负时为1，否则为0
 * - 定义 b = (x == 0)   // x为零时为1，否则为0
 * - 定义 c = a + b      // 通过组合得到三种状态：
 *   * c=0: x<0  (a=0, b=0)
 *   * c=1: x>0  (a=1, b=0)
 *   * c=2: x=0  (a=1, b=1)
 *
 * @note 这种离散化方法比嵌套if-else更简洁优雅
 * @感谢 MOOC 同学在状态编码设计上的贡献
 */
#include<stdio.h>
int main()
{
	double x;
	scanf_s("%lf", &x);
	/*
	 * 离散化处理：将连续变量转换为三种离散状态
	 * 利用布尔表达式的特性进行状态编码
	 */
	int a = x >= 0;   // 标志位1：x是否非负 (0或1)
	int b = x == 0;  // 标志位2：x是否为零 (0或1) 
	int c = a + b;    // 状态编码：通过组合得到三种状态 (0,1,2)
	/*
	 * 状态说明：
	 * c = 0: x < 0  (a=0, b=0)
	 * c = 1: x > 0  (a=1, b=0)
	 * c = 2: x = 0  (a=1, b=1)
	 */
	switch (c)
	{
	case 0:    // x < 0 
		printf("-1\n");
		break;
	case 1:    // x > 0
		printf("%f", 2.0 * x);
		break;
	case 2:    // x = 0
		printf("0\n");
		break;
	}
	return 0;
}