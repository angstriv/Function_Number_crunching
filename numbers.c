#include <time.h>
#include <stdlib.h>//rand
#include <stdio.h>
#include "numbers.h"

int randnum(const int minimum, const int maximum)//随机值函数(最小值,最大值)
{
	int random_number = 0;//随机数
	int funneed_maximum = maximum - minimum + 1;//函数需要的最大值 因为随机值不包括本数,所以加1
	
	srand((unsigned)time(NULL));//获取时间刻
	random_number = rand() % funneed_maximum + minimum;//获取随机数(虚拟最大值+最小值=最大值)
	return random_number;//返回随机数
}

int probability(const int per_cent)//概率(百分数)
{
	int random_number = randnum(0, 100);
	if (random_number <= per_cent)//抽中
	{
		return 1;
	}
	else //没抽中
	{
		return 0;
	}
}

int oddNumber(const int number)//判断奇数
{
	int remainder = 0;//余数
	remainder = number % 2;//数字除以2的余数

	if (remainder != 0)//是奇数
	{
		return 1;
	}
	else//不是奇数
	{
		return 0;
	}
}

int evenNumber(const int number)//判断偶数
{
	int remainder = 0;//余数
	remainder = number % 2;//数字除以2的余数

	if (remainder == 0)//是偶数
	{
		return 1;
	}
	else//不是偶数
	{
		return 0;
	}
}

int primeNumber(const int number)//判断质数
{
	int divisor = 0;//除数
	int remainder = 0;//余数

	//数字从2开始依次往后除，当i等于本数时，则本数为质数
	for (divisor = 2; divisor < number; divisor += 1)
	{
		remainder = number % divisor;
		if (remainder == 0)
		{
			return 0;//数字可以被除尽，不是质数
		}
	}
	return 1;//数字不可以被除尽，是质数
}

int swap(void* lhs, void* rhs, size_t count)//数据1 数据2 数据的字节
{
	void* temp = malloc(count);
	
	if (!temp)
	{
		return -1;
	}
		
	memcpy(temp, lhs, count);
	memcpy(lhs, rhs, count);
	memcpy(rhs, temp, count);

	free(temp);

	return 0;
}
