#include <stdio.h>
#include <limits.h>

#pragma region 열거형
	// 명명된 정수형 상수의 집합

enum State
{
	IDLE,
	ATTACK = 100,
	DIE

	// enum에 설정된 값을 변경할 수 있으며, 중간에 값을 변경했을 때 
	// 그 다음으로 설정된 값은 변경한 이후의 값에 +1로 설정됩니다.
};



#pragma endregion

int main()
{
#pragma region 열거형


	enum State state;

	// state = IDLE;

	// printf("state의 IDLE의 값 : %d\n", state);

	// state = ATTACK;

	// printf("state의 ATTACK의 값 : %d\n", state);

	//	state = DIE;
	//	
	//	switch (state)
	//	{
	//	case IDLE: printf("대기 상태\n");
	//		break;
	//	case ATTACK: printf("공격 상태\n");
	//		break;
	//	case DIE: printf("죽은 상태\n");
	//		break;
	//	}

#pragma endregion

#pragma region 별 출력하기
	
	//	for (int i = 0; i < 5; i++)
	//	{
	//		for (int j = 0; j <= i; j++)
	//		{
	//			printf("*");
	//		}
	//		printf("\n");
	//	
	//	}


#pragma endregion

#pragma region 1~10까지의 합

	//	int result = 0;
	//	for (int i = 1; i <= 10; i++)
	//	{
	//		result += i;
	//	}
	//	printf("result 변수의 값 : %d\n", result);

#pragma endregion

#pragma region ASCII 코드
	// 1963년 미국 ANSI에서 표준화한 정보교환용 7비트 부호체계입니다.

	// 128개의 숫자, 문자, 특수문자, 제어문자가 표현됩니다.

	char alphabet = 65;

	// printf("alphabet 변수의 ASCII 코드의 값 : %c\n", alphabet);
	// printf("alphabet 변수의 값 : %d\n", alphabet);

	//	for (alphabet; alphabet <= 90; alphabet++)
	//	{
	//		printf("%c\n", alphabet);
	//	}

#pragma endregion

#pragma region 최소값과 최대값

	// [10] [5] [11] [1] [3]
	
	int array[5] = { 10, 5, 11, 1, 3 };

	int max = 0;
	int min = INT_MAX;



	for (int i = 0; i < 5; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
		if (min > array[i])
		{
			min = array[i];
		}
	}
	printf("최대값 : %d\n", max);
	printf("최소값 : %d\n", min);



#pragma endregion



	return 0;
}