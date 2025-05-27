#include <stdio.h>

/*함수의 기본형
int sum(int x, int y);                        // sum 함수 선언

int main(void) {                              // main 함수 시작
	int a = 10, b = 20;
	int result;                               // 두 인자를 더한 결과를 저장

	result = sum(a, b);                       // sum 함수 호출
	printf("result : %d\n", result);

	return 0;
}                                             // main 함수 끝

int sum(int x, int y) {                       // sum 함수 시작
	int temp;                                 // temp = 잠시 저장할 변수 , 이름 바꿔도 됨

	temp = x + y;                             // sum 함수의 결과값을 temp에 저장

	return temp;                              // temp 값 반환
}                                             // sum 함수 끝
*/

/*함수를 활용한 큰 값 구하기
int max(int x, int y);

int main(void) {
	int value, a, b;

	printf("정수 두개를 입력하시오 : ");
	scanf("%d %d", &a, &b);

	value = max(a, b);
	printf("더 큰 값은 %d입니다.", value);
	return 0;
}
int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}
*/

/*매개변수가 없는 함수
int get_num(void);                             // 매개변수 자리에 void(없다라는 뜻)

int main(void) {
	int result;

	result = get_num();
	printf("반환값 ; %d\n", result);

	return 0;
}
int get_num(void) {
	int num;

	printf("양수 입력 : ");
	scanf("%d", &num);

	return num;
}
*/

/*반환값이 없는 함수
void print_char(char ch, int count);             // 반환값 자리에 void

int main(void) {
	print_char('@', 5);
	return 0;
}
void print_char(char ch, int count) {
	int i;

	for (i = 0; i < count; i++) {
		printf("%c", ch);
	}
	return;
}
*/

/*반환값과 매개변수 다 없는 함수
void print_line(void);                                     // 반환값과 매개변수 자리에 void

int main(void) {
	print_line();
	printf("학번      이름      전공      학점\n");
	print_line();
	return;
}
void print_line(void) {
    int i;

	for (i = 0; i < 50; i++) {
	    printf("-");
	}
	printf("\n");
}
*/

/* 함수 안에 스스로를 부르는 재귀함수
void fruit(void);

int main(void) {
	fruit();
	return 0;
}
void fruit(void) {
	printf("apple\n");         // apple 출력 후
	fruit();                   // 자신을 다시 호출 = 무한 반복
}
*/

/* 실행 횟수를 정한 재귀함수
void fruit(int count);         // 매개변수 넣어줌

int main(void) {
	fruit(1);                  // 처음 호출하므로 1을 인수로 준다
	return 0;
}
void fruit(int count) {        // 호출 횟수를 매개변수에 저장
	printf("apple\n");
	if (count == 3) return;    // 호출 횟수가 3회면 반환하고 끝
	fruit(count + 1);          // 재호출 할 때 호출 횟수 1 증가
}
*/

/*팩토리얼을 구할 숫자를 입력받는다

입력받은수 * (입력받은수-1) * (입력받은수-2)* ... *2 * 1 반복한다
n = 10
i = 1
fact = n * (n-i)
i++

10*9
for (입력받은 수)
*/

/* 함수를 활용한 팩토리얼 만들기
int factorial(int n);

int main(void) {
	int n;
	printf("알고 싶은 팩토리얼 값은? : ");
	scanf("%d", &n);
	printf("%d!의 값은 %d입니다.\n", n, factorial(n));
	return 0;
}
int factorial(int n) {
	int result = 1;

	for (int i = 1; i <= n; i++)
		result = result * i;
	return result;
}
*/

/*
#include <stdlib.h>
#include <time.h>
#include <conio.h>

void disp_car(int car_number, int distance);

int main(void) {
	int i;
	int car1_dist = 0, car2_dist = 0;

	srand((unsigned)time(NULL));                    //시간 난수를 초기화

	for (i = 0; i < 6; i++) {
		car1_dist += rand()%100;                    // rand()를 사용하여 난수 발생, %연산자를 사용하여 0~99까지 범위 제한
		car2_dist += rand()%100;
		disp_car(1, car1_dist);
		disp_car(2, car2_dist);
		printf("--------------------\n");
		_getch();
	}
	return 0;
}
void disp_car(int car_number, int distance) {
	int i;
	printf("CAR #%d:", car_number);
	for (i = 0; i < distance / 10; i++) {
		printf("*");
	}
	printf("\n");
}
*/