#include <stdio.h>

int main()
{
#pragma region ������ �迭

	// int a = 10;
	// int b = 20;
	// int c = 30;
	// 
	// int* arrayPtr[3] = { &a, &b, &c };
	// 
	// printf("arrayPtr[1]�� �� : %p\n", arrayPtr[1]);
	// printf("b�� �ּ� : %p\n", &b);
	// 
	// *arrayPtr[1] = 200;
	// 
	// printf("arrayPtr[1]�� ����Ű�� �� : %d\n", *arrayPtr[1]);



#pragma endregion

#pragma region ¦���� Ȧ��

	//	int value = 0;
	//	scanf_s("%d", &value);
	//	if (value % 2 == 0)
	//	{
	//		printf("¦��");
	//	}
	//	else
	//	{
	//		printf("Ȧ��");
	//	}



#pragma endregion

#pragma region 2���� �迭
	// �迭�� ��ҷ� �� �ٸ� �迭�� ������ �迭�Դϴ�.

	// 2���� �迭 ���� �������� �޸� ������ ���·� ����Ǹ�,
	// 2���� �迭�� ũ�⸦ ������ �� �迭�� ���� ũ�⸸ ������ �� �ֽ��ϴ�.
		//	int array2D[3][3] =
		//	{
		//		{0,1,2},
		//		{3,4,5},
		//		{6,7,8},
		//	};
		//	
		//	printf("array2D[1][1]�� �� : %d\n", array2D[1][1]);
		//	
		//	// 2���� �迭�� ��� ���� ���еǸ� �տ� �ִ� �迭��
		//	// ���� �ǹ��ϰ�, �ڿ� �ִ� �迭�� ���� �ǹ��մϴ�.
		//	for (int i = 0; i < 3; i++)
		//	{
		//		for (int j = 0; j < 3; j++)
		//		{
		//			printf("%d\n", array2D[i][j]);
		//		}
		//	}
		//	
		//	int(*ptr)[3] = array2D;
		//	
		//	printf("ptr�� �� : %p\n", ptr);
		//	printf("ptr + 1�� ���� �ּ� : %p\n", ptr + 1);
		//	printf("array2D�� ���� �ּ� : %p\n", array2D);
		//	printf("array2D + 1�� ���� �ּ� : %p\n", array2D + 1);



#pragma endregion

#pragma region ���μ� ����
	
	int value = 0;
	int count = 0;
	scanf_s("%d", &value);
	for (int i = 2; i <= value; i++)
	{
		if (value % i == 0)
		{
			value /= i;
			printf("%d\n", i);
			i--;
		}
	}



#pragma endregion



	return 0;
}