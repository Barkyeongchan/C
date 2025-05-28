#include <stdio.h>

/*
// sub.c와 분할 컴파일 예제

void input_data(int*, int*);
double average(int, int);

int main(void) {
	int a, b;
	double avg;

	input_data(&a, &b);
	avg = average(a, b);
	printf("%d와 %d의 평균 : %.1lf\n", a, b, avg);

	return 0;
}
*/


/* #includ "student.h" 를 사용한 헤더파일 적용 예시
#include "student.h"

int main(void) {
	Student a = { 315, "홍길동" };
	printf("학번 : %d, 이름 : %s\n", a.num, a.name);

	return 0;
}
*/


/* 지역 변수와 정적 지역 변수 차이
void auto_func(void);
void static_func(void);

int main(void){
	int i;

	printf("일반 지역 변수(auto)를 사용한 함수...\n");
	for (i = 0; i < 3; i++) {
		auto_func();
	}

	printf("정적 지역 변수(static)를 사용한 함수...\n");
	for (i = 0; i < 3; i++) {
		static_func();
	}

	return 0;
}

void auto_func() {					// 지역 변수 선언과 초기화
	auto int a = 0;

	a++;						    // a값 1 증가
	printf("%d\n", a);              // a 출력
}

void static_func() {                // 정적 지역 변수 선언과 초기화
	static int a = 0;

	a++;							// a값 1 증가
	printf("%d\n", a);              // a 출력
}
*/