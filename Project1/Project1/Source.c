#include <stdio.h>
#include <math.h>

#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음 
	// 하나의 객체를 생성하는 것입니다.

struct GameObject
{
	int health;
	double x;
	char grade;

	// 구조체를 선언하기 전에 구조체는 메모리 공간이 생성되지 않으므로, 
	// 구조체 내부에 있는 데이터를 초기화할 수 없습니다.
};

#pragma endregion

struct Player
{
	float x, y;
};

struct Enemy
{
	float x, y;
};

int main()
{
#pragma region 구조체 선언

	// struct GameObject gameObject;
	// 
	// gameObject.x = 3.45;
	// gameObject.health = 100;
	// 
	// printf("gameObject.x의 값 : %lf\n", gameObject.x);
	// printf("gameObject.health의 값 : %d\n", gameObject.health);
	// 
	// struct GameObject object = { 300, 6.25 };
	// 
	// printf("gameObject.x의 값 : %lf\n", object.x);
	// printf("gameObject.health의 값 : %d\n", object.health);

#pragma endregion

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 cpu로 읽을 때 한번에 읽을 수 있도록,
	// 컴파일러가 레지스터의 블록에 맞추어 바이트를 패딩해주는
	// 최적화 작업입니다.
	 
	// printf("GameObject의 크기 : %u", sizeof(struct GameObject));

	// 구조체의 크기는 구조체를 구성하는 멤버 중에 크기가 가장 큰
	// 자료형의 배수가 되도록 정렬합니다.,

#pragma endregion

#pragma region 제곱근 함수

	// int result = pow(10, 2);
	// float decimal = 100.0f;
	// 
	// // sqrt : 반환하는 값으로 long double, double, float
	// decimal = sqrt(result);
	// 
	// printf("result 변수의 결과 : %d\n", result);
	// printf("decimal 변수의 결과 : %f\n", decimal);


#pragma endregion

#pragma region 두 점 사이의 거리
	struct Player player;
	player.x = 1.0f;
	player.y = 2.0f;

	struct Enemy enemy;
	enemy.x = 3.0f;
	enemy.y = 4.0f;
	
	float x = player.x - enemy.x;
	float y = player.y - enemy.y;


	double distance = sqrt(pow(x,2) + pow(y,2));


	printf("player와 enemy의 거리 : %lf", distance);

#pragma endregion

	return 0;
}