#include <stdio.h>

int main()
{
#pragma region 포인터 배열

	// int a = 10;
	// int b = 20;
	// int c = 30;
	// 
	// int* arrayPtr[3] = { &a, &b, &c };
	// 
	// printf("arrayPtr[1]의 값 : %p\n", arrayPtr[1]);
	// printf("b의 주소 : %p\n", &b);
	// 
	// *arrayPtr[1] = 200;
	// 
	// printf("arrayPtr[1]이 가리키는 값 : %d\n", *arrayPtr[1]);



#pragma endregion

#pragma region 짝수와 홀수

	//	int value = 0;
	//	scanf_s("%d", &value);
	//	if (value % 2 == 0)
	//	{
	//		printf("짝수");
	//	}
	//	else
	//	{
	//		printf("홀수");
	//	}



#pragma endregion

#pragma region 2차원 배열
	// 배열의 요소로 또 다른 배열을 가지는 배열입니다.

	// 2차원 배열 또한 연속적인 메모리 공간의 형태로 저장되며,
	// 2차원 배열의 크기를 생략할 때 배열의 열의 크기만 생략할 수 있습니다.
		//	int array2D[3][3] =
		//	{
		//		{0,1,2},
		//		{3,4,5},
		//		{6,7,8},
		//	};
		//	
		//	printf("array2D[1][1]의 값 : %d\n", array2D[1][1]);
		//	
		//	// 2차원 배열은 행과 열로 구분되며 앞에 있는 배열은
		//	// 열을 의미하고, 뒤에 있는 배열은 행을 의미합니다.
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
		//	printf("ptr의 값 : %p\n", ptr);
		//	printf("ptr + 1의 시작 주소 : %p\n", ptr + 1);
		//	printf("array2D의 시작 주소 : %p\n", array2D);
		//	printf("array2D + 1의 시작 주소 : %p\n", array2D + 1);



#pragma endregion

#pragma region 소인수 분해
	
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