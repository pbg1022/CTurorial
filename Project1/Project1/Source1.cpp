#include <stdio.h>

#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수입니다.

void Function()
{
	// 재귀 함수는 함수를 계속 호출하기 때문에 스택 영역에 메모리가 계속 쌓이게 되므로 
	// 스택 오버플로우가 발생합니다.
	printf("함수 호출\n");
	Function();
}



#pragma endregion

void CountDown(int count)
{
		


}

int Factorial(int count)
{
	if (count <= 1)
		return 1;
	
	return count * Factorial(count - 1);
}


int main()
{
	// CountDown(3);
	
	int data = 10;

	int* ptr = &data;
	
	// 0a 00 00 00

	// [] [] [] []

	// 리틀 엔디안 방식
	// 낮은 주소에 데이터의 낮은 바이트부터 저장하는 방법입니다.
		
	// 프로그램이 정상적으로 종료되었을 때 0이라는 값을 반환합니다.
	return 0;




}