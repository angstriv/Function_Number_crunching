#include <time.h>
#include <stdlib.h>//rand


int randnum(int minimum, int maximum)//���ֵ����(��Сֵ,���ֵ)
{
	int random_number = 0;//�����
	int funneed_maximum = maximum - minimum + 1;//������Ҫ�����ֵ ��Ϊ���ֵ����������,���Լ�1
	
	srand((unsigned)time(NULL));//��ȡʱ���
	random_number = rand() % funneed_maximum + minimum;//��ȡ�����(�������ֵ+��Сֵ=���ֵ)
	return random_number;//���������
}

int probability(int per_cent)//����(�ٷ���)
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