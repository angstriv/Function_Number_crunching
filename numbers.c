#include <time.h>
#include <stdlib.h>//rand


int randnum(int minimum, int maximum)//随机值函数(最小值,最大值)
{
	int random_number = 0;//随机数
	int funneed_maximum = maximum - minimum + 1;//函数需要的最大值 因为随机值不包括本数,所以加1
	
	srand((unsigned)time(NULL));//获取时间刻
	random_number = rand() % funneed_maximum + minimum;//获取随机数(虚拟最大值+最小值=最大值)
	return random_number;//返回随机数
}

int probability(int per_cent)//概率(百分数)
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

int oddNumber(int number)//判断奇数
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

int evenNumber(int number)//判断偶数
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