#include <time.h>
#include <stdlib.h>//rand
#include <stdio.h>
#include "numbers.h"

int randnum(const int minimum, const int maximum)//���ֵ����(��Сֵ,���ֵ)
{
	int random_number = 0;//�����
	int funneed_maximum = maximum - minimum + 1;//������Ҫ�����ֵ ��Ϊ���ֵ����������,���Լ�1
	
	srand((unsigned)time(NULL));//��ȡʱ���
	random_number = rand() % funneed_maximum + minimum;//��ȡ�����(�������ֵ+��Сֵ=���ֵ)
	return random_number;//���������
}

int probability(const int per_cent)//����(�ٷ���)
{
	int random_number = randnum(0, 100);
	if (random_number <= per_cent)//����
	{
		return 1;
	}
	else //û����
	{
		return 0;
	}
}

int oddNumber(const int number)//�ж�����
{
	int remainder = 0;//����
	remainder = number % 2;//���ֳ���2������

	if (remainder != 0)//������
	{
		return 1;
	}
	else//��������
	{
		return 0;
	}
}

int evenNumber(const int number)//�ж�ż��
{
	int remainder = 0;//����
	remainder = number % 2;//���ֳ���2������

	if (remainder == 0)//��ż��
	{
		return 1;
	}
	else//����ż��
	{
		return 0;
	}
}

int primeNumber(const int number)//�ж�����
{
	int divisor = 0;//����
	int remainder = 0;//����

	//���ִ�2��ʼ�������������i���ڱ���ʱ������Ϊ����
	for (divisor = 2; divisor < number; divisor += 1)
	{
		remainder = number % divisor;
		if (remainder == 0)
		{
			return 0;//���ֿ��Ա���������������
		}
	}
	return 1;//���ֲ����Ա�������������
}

int swap(void* lhs, void* rhs, size_t count)//����1 ����2 ���ݵ��ֽ�
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
