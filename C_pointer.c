#include <stdio.h>

/* 포인터의 주소를 출력하는 기본 코드
int main(void) {
	int i = 10;
	char c = 69;
	float f = 12.3;

	// %p 포인터의 주소를 출력
	printf("i의 주소 : %p\n", &i);     //변수 i의 주소 출력
	printf("c의 주소 : %p\n", &c);     //변수 c의 주소 출력
	printf("f의 주소 : %p\n", &f);     //변수 f의 주소 출력

	return 0;
}
*/

/* 포인터 예제1
int main(void) {
	int i = 10;
	double f = 12.3;
	int* pi = NULL;       // 포인터는 아무것도 가르키지 않는 것을 의미

	double* pf = NULL;
	pi = &i;
	pf = &f;

	printf("%p %p \n", pi, &i);
	printf("%p %p \n", pf, &f);
	return 0;
}
*/

/* 포인터 예제 2
int main(void) {
	int x = 10, y = 20;
	int *p;

	p = &x;
	printf("p = %p\n", p);
	printf("*p = %d\n\n", *p);

	p = &y;
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);

	return 0;
}
*/

/* 포인터의 연산
int main(void) {
	int a = 1, * pa = &a;                             // 4byte
	short b = 1, * pb = &b;                           // 2byte
	char c = 1, * pc = &c;                            // 1byte
	double d = 1.0, * pd = &d;                        // 8byte

	printf("%p, %p, %p, %p\n", pa, pb, pc, pd);

	pa = pa + 1;                                      // = 주소값이 4byte 만큼 증가 (주소값 안에 있는 값에 연산한 것이 아님)
	pb = pb + 1;                                      // = 주소값이 2byte 만큼 증가
	pc = pc + 1;                                      // = 주소값이 1byte 만큼 증가
	pd = pd + 1;                                      // = 주소값이 8byte 만큼 증가

	printf("%p, %p, %p, %p", pa, pb, pc, pd);

	return 0;
}
*/

/* swap()함수를 포인트의 변수의 값을 서로 바꿈
void swap(int *px, int *py);

int main(void) {
	int a = 100, b = 200;
	printf("a = %d, b = %d\n", a, b);

	swap(&a, &b);

	printf("a = %d, b = %d", a, b);

	return 0;
}
void swap(int *px, int *py) {
	int temp;

	temp = *px;
	*px = *py;
	*py = temp;
}
*/

/* 두개 이상의 결과를 반환
int get_line_parameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept);

int main(void) {
	float s, y;

	if (get_line_parameter(3, 3, 6, 6, &s, &y) == -1)
		printf("에러\n");
	else
		printf("기울기는 %f, y절편은 %f\n", s, y);
	return 0;
}
int get_line_parameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept) {
	if (x1 == x2)
		return -1;
	else {
		*slope = (float)(y2 - y1) / (float)(x2 - x1);
		*yintercept = y1 - (*slope) * x1;
		return 0;
	}
}
*/

/* 포인터와 배열의 관계
int main(void) {
	int a[] = { 10, 20, 30, 40, 50 };          // 배열 정수형 a[5]

	printf("a = %u\n", a);                     // a = 정수형 배열 a[5]의 가장 첫번째 주소값

	printf("a + 1 = %u\n", a + 1);             // a + 1 = 정수형 배열 a[5]의 가장 첫번째 주소값에서 정수형의 크기(4byte)만큼 더한 값 = 두번째 주소값

	printf("*a = %d\n", *a);                   // *a = 정수형 배열 a[1]의 첫번째 주소값이 가지고 있는 요소값

	printf("*(a + 1) = %d\n", *(a + 1));       // *(a + 1) = 정수형 배열 a[5]의 두번째 주소값이 가지고 있는 요소값

	return 0;
}
*/