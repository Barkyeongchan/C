#include <stdio.h>

/* 배열을 활용한 기본 코드
int main(void) {
	int i;
	int scores[5];

	scores[0] = 10;
	scores[1] = 20;
	scores[2] = 30;
	scores[3] = 40;
	scores[4] = 50;

	for (i = 0; i < 5; i++)
		printf("scores[%d]는 %d\n", i, scores[i]);

	return 0;
}
*/

/* 배열을 활용한 평균값 구하기
#define STUDENT 5                                        // 배열의 요소 갯수를 5개로 선언, 전처리

int main(void) {
	int scores[STUDENT];                                 // == scored[5]
	int sum = 0;
	int  i, average;

	for (i = 0; i < STUDENT; i++) {
		printf("학생들의 성적을 입력하세요 : ");
		scanf("%d", &scores[i]);
	}
	for (i = 0; i < STUDENT; i++) {
		sum += scores[i];
	}
	average = sum / STUDENT;
	printf("성적 평균 = %d", average);

	return 0;
}
*/

/* 배열 초기화 예제
#define SIZE 5

int main(void) {
	int i;
	int scores[SIZE] = { 31, 63, 62, 87, 43 };         // 기본적인 초기화 방법 , 자료형 배열명[요소수] = {요소, (요소수만큼) , 요소}

	for (i = 0; i < SIZE; i++)
		printf("scores[%d] = %d\n", i, scores[i]);

	return 0;
}
*/

/*
int main(void) {
	int score[5];
	int i, count;
	int total = 0;
	double avg;

	count = sizeof(score) / sizeof(score[0]);
	for (i = 0; i < count; i++) {
		scanf("%d", &score);
	}
	for (i = 0; i < count; i++) {
		total += score[1];
	}
	avg = total / (double)count;

	for (i = 0; i < count; i++) {
		printf("%5d", score[i]);
	}
	printf("\n");
	printf("평균 : %.1lf\n", avg);
	return 0;
}
*/

/* 확인문제 풀이 내가 푼거
int main(void) {
	int A[3] = { 1, 2, 3 };
	int B[10];
	int i;

	for (i = 0; i < 10; i++) {
		B[i] = A[i % 3];
		printf("%5d", B[i]);
	}   
	return 0;
}
*/

/* 확인문제 풀이 답지풀이
int main(void) {
	int A[3] = { 1, 2, 3 };
	int B[10];
	int i;

	for (i = 0; i < 10; i++) {
		B[i] = A[i % 3];
	}
    for (i = 0; i < 10; i++) {
	    printf("%5d", B[i]);
	}
	return 0;
}
*/

/* 문자열을 저장하는 char배열
int main(void) {
	char str[20] = "applejam";                 // 문자열 초기화

	printf("최초의 문자열 : %s\n", str);       // 초기화 문자열 출력
	printf("바꿀 문자열 입력 : ");
	scanf("%s", &str);                         // 바꿀 문자열 입력
	printf("바꾼 문자열 : %s\n", str);         // 바꾼 문자열 출력
	
	return 0;
}
*/

/* strcpy를 활용한 문자열 대입
#include <string.h>

int main(void) {
	char str1[10] = "dog";
	char str2[10];

	strcpy(str1, "cat");
	strcpy(str2, str1);
	printf("%s %s\n", str1, str2);

	return 0;
}
*/ 

/* gets()와 puts()를 사용한 문자열 입출력
int main(void) {
	char str[80];
	
	printf("문자열 입력 : ");
	gets(str);                         // scanf()와 달리 빈칸이나 탭을 편하게 넣을 수 있다.
	puts("입력된 문자열 : ");
	puts(str);                         // 문자열을 출력한다, 알아서 줄이 바뀜

	return 0;
}
*/

/* null 문자가 없는 문자열
int main(void) {
	char str[5];                  // str 문자열이 초기화 되지 않음

	str[0] = 'O';
	str[1] = 'K';
	printf("%s\n", str);          // 요소가 정해지지 않은 요소는 null까지 쓰레기값이 출력됨

	return 0;
}
*/

/* 좌석 예약 시스템
#define SIZE 10

int main(void) {
	char ans1;
	int ans2, i;
	int seats[SIZE] = {0};

	while (1) {
		printf("예약 할까요?(Y/N) : ");
		scanf("%c", &ans1);

		if (ans1 == 'N')
			break;

		printf("\n**********************\n");
		printf(" 1 2 3 4 5 6 7 8 9 10\n");
		printf("**********************\n");

		for (i = 0; i < SIZE; i++)
			printf(" %d", seats[i]);
		printf("\n");

		printf("\n몇번째 좌석을 예약하시겠습니까? : \n");
		scanf("%d", &ans2);

		if (seats[ans2 - 1] == 0) {
			seats[ans2 - 1] = 1;
			printf("예약이 완료되었습니다\n");
		}
		else
			printf("이미 예약된 자리입니다.");
	}
	return 0;
}
*/