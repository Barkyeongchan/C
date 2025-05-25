#include <stdio.h>

/*
#include <stdio.h>       //전처리기 지시문 = 무조건 이거 쓰고 시작해야 함

int main(void)           //{int=함수출타입}{main=함수이름}(void={함수입력타입})
{                        // 함수 시작
	printf("Be happy!"); // 함수 내용

	return 0;            // 함수 내용 끝
}                        // 함수 끝
*/

/*
int main(void)
{
	printf("2 + 3 : %d\n", 2 + 3);
	printf("2 - 3 : %d\n", 2 - 3);
	printf("2 * 3 : %d\n", 2 * 3);
	printf("2 / 3 : %d\n", 2 / 3);

	return 0;
}
*/

/*
int main(void)
{
	int x, y, sum;

	x = 1;
	y = 2;
	sum = x + y; // int x = 1, y = 2, sum = x + y; 로 줄일 수 있다

	printf("%d + %d = %d", x, y, sum);

	return 0;
}
*/

/*
int main(void)
{
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short형의 변수 출력 : %d\n", sh);
	printf("int형의 변수 출력 : %d\n", in);
	printf("long형의 변수 출력 : %d\n", ln);
	printf("long long형의 변수 출력 : %d\n", lln);
	printf("long long형의 크기 : %d바이트\n", sizeof(long long));

	return 0;
}
*/

/*
int main(viod)
{
	double db = 1.234567890123456789;

	printf("flaot형의 변수값 : %.20f\n", ft);
	printf("double형의 변수값 : %.20lf\n", db);
	float ft = 1.234567890123456789;

	return 0;
}
*/

/*
#include <string.h>

int main(void)
{
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);

	return 0;
}
*/

/*
int main(void)
{
	int income = 0;
	double tax;
	const double tax_rate = 0.12;

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax);

	return 0;
}
*/

/*
// scanf 함수
int main(void)
{
	int a;                          //변수

	scanf("%d", &a);                //&를 사용하여 변수의 주소를 지정
	printf("입력된 값 : %d\n", a);

	return 0;
}
*/

/*
// 정수와 실수의 scanf
int main(void)
{
	int age;
	double height;

	printf("나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age, &height);
	printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);

	return 0;
}
*/

/*
// 문자와 문자열을 scanf하고 printf하기
int main(void)
{
	char name[20];
	char grade[2];

	printf("이름 입력 : ");
	scanf("%s", name);
	printf("등급 입력 : ");
	scanf("%s", &grade);
	printf("%s의 등급은 %s입니다.\n", name, grade); 

	return 0;
}
*/

/*
// 평균을 계산하는 프로그램 만들기
int main(void)
{
	double num1, num2, num3;
	double sum, avg;

	printf("평균을 구하려는 세개의 숫자를 입력하세요\n");
	printf("첫번째 : ");
	scanf("%lf", &num1);
	printf("두번째 : ");
	scanf("%lf", &num2);
	printf("세번째 : ");
	scanf("%lf", &num3);

	sum = num1 + num2 + num3;
	avg = sum / 3.0;

	printf("합계=%.2lf\n", sum); // 소숫점 이하 2자리까지 표시
	printf("평균=%.2lf\n", avg); // 소숫점 이하 2자리까지 표시

	return 0;
}
*/

/*
// 몫과 나머지
int main(void)
{
	double apple;
	int banana;
	int orange;

	apple = 0.5 / 2.0;
	banana = 5 / 2;
	orange = 5 % 2;

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	return 0;
}
*/

/*
// ++과 -- 증감 연산자
int main(void)
{
	int a = 10, b = 10;

	++a;    // 변수의 값을 1만큼 증가
	--b;    // 변수의 값을 1만큼 감소

	printf("a : %d\n", a);
	printf("b : %d\n", b);

	return 0;
}
*/

/*
// 증감 연산자의 저누이 표기와 후위 표기
int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;       // 전위형 증감 연산자
	post = (b++) * 3;      // 후위형 증감 연산자

	printf("증감 연산 후 초기값 a = %d, b = %d\n", a, b);
	printf("전위형 : (++a) * 3 = %d, 후위형 : (b++) *3 = %d\n", pre, post);

	return 0;
}
*/

/*
* // 후위 표기의 경우 앞의 연산이 끝난 후 증감한 값이 남는다
int main(void)
{
	int a = 1;
	int b = a++;

	printf("%d\n", b);
	printf("%d\n", a);

	return 0;     // 결과값 b = 1, a = 2
}
*/

/*
// for문과 증감 연산자를 사용한 간단한 코드
int main(void) {
	for (int i = 1;
		i <= 10;
		i++) 
	{  // i를 1부터 시작해서 10까지 1씩 증가
		
		printf("%d\n", i);
	}
	return 0;
}
*/

/*
// 논리연산자
int main(void)
{
	int x, y;

	printf("두개의 정수를 입력하시오 : ");               // a = 1, b = 0을 넣었을 때
	scanf("%d%d", &x, &y);

	printf("%d && %d의 결과값 : %d\n", x, y, x && y);    // 양쪽이 다 True여야함 = (참 and 거짓) = False = 0
	printf("%d || %d의 결과값 : %d\n", x, y, x || y);    // 양쪽 중 하나만 True여도 됌 = (참 or 거짓) = True = 1
	printf("!%d의 결과값 : %d\n", x, !x);                // True가 아니다 = (not 참) = False = 0

	return 0;
}
*/

/*
// 형 변환 연산자 = (연산자)피연산자 구조
int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res);
	
	a = (int)res;
	printf("(int)%.1lf의 결과 : %d\n", res, a);

	return 0;

}
*/

/*
// sizeof() 연산자의 사용 예
int main(void)
{
	int a = 10;
	double b = 3.4;

	printf("int형 변수의 크기 : %d\n", sizeof(a));
	printf("double형 변수의 크기 : %d\n", sizeof(b));
	printf("정수형 상수의 크기 : %d\n", sizeof(10));
	printf("수식의 결과값의 크기 : %d\n", sizeof(1.5 + 3.4));
	printf("char 자료형의 크기 : %d\n", sizeof(char));

	return 0;
}
/*
Test
*/