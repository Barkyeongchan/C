#include <stdio.h> //전처리기, standard input output header

/*
// if 제어문
int main(void) {
	int number;
	
	printf("정수를 입력하시오 :");
	scanf("%d", &number);

	if (number > 0) {
		printf("양수입니다.");
	}

	printf("입력된 값은 %d입니다.", number);

	return 0;
}
*/

/*
// if ~ else문
int main(void) {
	int a = 10;

	if (a >= 0) {
		a = 1;
	}
	else
	{
		a = -1;
	}
	printf("a : %d\n", a);

	return 0;
}
*/

/*
int main(void) {
	int a = 0;
	printf("정수를 입력하세요.");
	scanf("%d", &a);

	if (a % 2 == 0) {
		printf("%d는 짝수입니다", a);
	}
	else {
		printf("%d는 홀수입니다.", a);
	}
	return 0;
}
*/

/*
// if ~ else if ~ else문
int main(void) {
	int grade = 0;
	printf("점수를 입력하세요 : ");
	scanf("%d", &grade);

	if (grade >= 90) {
		printf("학점은 A입니다.");
	}
	else if (grade >= 80) {
		printf("학점은 B입니다.");
	}
	else {
		printf("당신은 사람이 아닙니다.");
	}

	return 0;
}
*/

/*
int main(void) {
	int a = 0, b;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &a);

	if (a > 0) {
		printf("b에 1을 대입합니다.");
		b = 1;
	}
	else if (a == 0) {
		printf("b에 2를 대입합니다.");
		b = 2;
	}
	else{
		printf("b에 3을 대입합니다.");
		b = 3;
	}

	return 0;
}
*/

/*
// if~else if~else 예제풀이
int main(void) {
	int chest = 95;
	char size;

	if (chest <= 90) {
		size = 'S';
	}
	else if ((chest > 90) && (chest <= 100)) {
		size = 'M';
	}
	else {
		size = 'L';
	}

	printf("%c를 입으세요", size);

	return 0;
}
*/

/*
// $$ 논리연산자를 활용한 if~else문
int main(void) {
	double height = 0, weight = 0;
	printf("키를 입력하세요 : ");
	scanf("%lf", &height);
	printf("몸무게를 입력하세요 : ");
	scanf("%lf", &weight);

	if ((height >= 187.5) && (weight < 80)) {
		printf("OK");
	}
	else {
		printf("SORRY");
	}

	return 0;
}
*/

/*
// swich~case braek문의 기본 활용
int main(void) {
	int rank = 0, m = 0;
	printf("등수를 입력하세요 : ");
	scanf("%d", &rank);

	switch (rank) {      // rank 값을 확인
		case 1:          // rank 값이 1
			m = 300;     // m = 300을 수행
			break;       // 블록을 벗어남
		case 2:
			m = 200;
			break;
		case 3:
			m = 100;
			break;
		default:
			m = 10;
		    break;
	}
	printf("m = %d", m);

	return 0;
}
*/

/* if문 확인문제
int main(void) {
	int n;
	printf("insert Int : ");
	scanf("%d", &n);
	switch(n % 3) {
		case 0:
		    printf("Fales");
			break;
		default:                // 0을 제외한 나머지이므로 default
			printf("True");
			break;
	}
	return 0;
}
*/

/* if문 확인문제
int main(void) {
	int age = 0, chest = 0;
	char size;
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	printf("가슴둘레를 입력하세요 : ");
	scanf("%d", &chest);

	if (age < 20) {
		if (chest >= 95) {
			size = 'L';
		}
		else if ((90 > chest) && (chest >= 85)) {
			size = 'M';
		}
		else {
			size = 'S';
		}
	}
	else {
		if (chest >= 100) {
			size = 'L';
		}
		else if ((100 > chest) && (chest >= 90)) {
			size = 'M';
		}
		else {
			size = 'S';
		}
	}
	printf("사이즈는 %c입니다.\n", size);

	return 0;
}
*/

/* 계산기 만들기
int main(void) {
	int num1, num2;
	char t;
	printf("첫번째 정수를 입력하세요 : ");
	scanf("%d", &num1);
	printf("두번째 정수를 입력하세요 : ");
	scanf("%d", &num2);
	printf("계산할 수식을 입력하세요(+,-,/,*) : ");
	scanf(" %c", &t);

	printf("사직연산 입력(정수) : ");              // 정수와 사칙연산 한 번에 입력
	scanf("%d%c%d", &num1, &t, &num2);
	
	if (t == '+') {
	    printf("%d + %d = %d", num1, num2, num1+num2);
		}
	else if (t == '-') {
		printf("%d - %d = %d", num1, num2, num1-num2);
		}
	else if (t == '/') {
		if (num2 == 0) {
			printf("%d / 0 = 0", num1);
		}
		else
		printf("%d / %d = %d", num1, num2, num1/num2);
		}
	else if (t == '*') {
		printf("%d * %d = %d", num1, num2, num1*num2);
		}
	return 0;

	switch(t)                                                        //swich 사용
		case '+':
			printf("%d + %d = %d", num1, num2, num1 + num2);
	        break;
		case '-':
			printf("%d - %d = %d", num1, num2, num1 - num2);
			break;
		case '*':
			printf("%d * %d = %d", num1, num2, num1 * num2);
			break;
		case '-': 
			if (num2 == 0)
				printf("%d / 0 = 0");
			else
			    printf("%d / %d = %d", num1, num2, num1 / num2);
			break;
	
	return 0;
}
*/

/* while문을 활용한 구구단
int main(void) {
	int n ;
	int i = 1;
	
	printf("출력하고 싶은 단 : ");
	scanf("%d", &n);
	
	while (i <= 9) {
		printf("%d*%d = %d\n", n, i, n * i);
		i++;
	}
	return 0;
}
*/

/* while문을 활용한 
int main(void) {
	int i, n, sum;                         // int 설정

	printf("정수를 입력하시오 : ");        // n 값 입력
	scanf("%d", &n);

	i = 1;                                 // 변수 초기화
	sum = 0;                               // 변수 초기화

	while (i <= n) {                       // i가 입력된 정수보다 작거나 같을때 까지
		sum += i;                          // 0에 1을 더한 값을 sum에 저장한다
		i++;                               // i에 1을 더한다 반복
	}
	printf("1부터 %d까지의 합은 %d입니다.", n, sum);

	return 0;
}
*/

/*유클리드 알고리즘
int main(void) {
	int x, y, r;

	printf("두 수를 입력하세요(큰 수, 작은 수) : ");
	scanf("%d%d", &x, &y);

	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	printf("최대 공약수는 %d입니다.\n", x);

	return 0;
}
*/

/* for문을 이용한 네모 만들기
int main(void) {
	int i;
	printf("**********\n");

	for (i = 0; i < 5; i++)
		printf("*        *\n");

	printf("**********");

	return 0;
}
*/

/* goto문의 사용
int main(void) {
	int x, y;

	for (y = 1; y < 10000; y++)
	{
		for(x = 1; x < 50; x++)
		{
			if (kbhit()) goto OUT;     // goto를 사용해서 아래의 OUT의 위치로 이동
			printf("*");
		}
		printf("\n");
	}
OUT:
	return 0;
}
*/

/* 반감기 구하기 문제 내가 푼거
int main(void) {
	int half = 0, pro = 100, pre_pro = 100, time_ = 0;

	printf("반감기를 입력하세요 : ");
	scanf("%d", &half);

	while (pro > (pre_pro * 0.1)) {
		time_ = time_ + half;
		pro = pro / 2;
	}
	printf("%d", pro);
	return 0;
}
*/

/* 해답
int main(void) {
	int halflife, years = 0;                   // 반감기와 시간의 변수 초기화 (정수)
	double initial, current;                   // 초기 물질 양과 물질의 양 초기화 (실수)

	printf("반감기를 입력하시오(년) : ");
	scanf("%d", &halflife);

	initial = 100.0;                           // 초기 물질의 양 임의로 지정
	current = initial;                         // 변하는 초기 물질의 양을 현재 물질의 양으로 지정

	while (current > initial/10.0) {           // 현재 물질의 양이 초기 물질의 양의 1/10보다 많을동안 반복
		years += halflife;                     // 시간에 반감기를 반복해서 더함
		current = current / 2.0;               // 한 반감기 마다 양이 1/2가 됨
		printf("%d년 후에 남은 양 = %f\n", years, current);    // 진행상황 보여줌
	}
	printf("1/10 이하로 되기까지 걸리는 시간 = %d년", years);  // 결과

	return 0;
}
*/


/* 난수 발생기를 활용한 랜덤 정수 찾기
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((unsigned)time(NULL));    // 난수 발생기
	int answer = rand() % 100;      // 0 ~ 99 난수 생성
	int guess;
	int tries = 0;

	do {
		printf("정답을 맞춰보세요 : ");
		scanf("%d", &guess);
		++tries;

		if (guess > answer) {
			printf("High!\n");
		}
		else if (guess < answer) {
			printf("Low!\n");
		}
		else {
			printf("축하합니다. %d회 시도\n", tries);
		}
	} while (guess != answer);

	return 0;
}
*/

/*엑스표시 그리기
int main(void) {
	int i, j;
	int size = 5;

	for(i = 0; i < size; i++) {
		for (j = 0; j <= size; j++) {
			if (i == j || j == size - 1 - i) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
*/