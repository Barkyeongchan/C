#include <stdio.h>

// 구조체

/* 구조체를 선언하고 멤버를 사용하는 예제
struct student                                // 구조체 선언
{
	int num;                                  // int형 멤버
	double grade;							  // double형 멤버

};                                            // 세미콜론

int main(void) {
	struct student s1;                        // struct student형 변수 선언

	s1.num = 2;                               // s1의 멤버 num에 2 저장 (정수형)
	s1.grade = 2.7;                           // s1의 멤버 grade에 2.7 저장 (인수형)
	printf("학번 : %d\n", s1.num);            // num 멤버 출력
	printf("학점 : %.1lf\n", s1.grade);		  // grade 멤버 출력

	return 0;
}
*/ 

/* 예제 1
#include <string.h>

struct student
{
	int number;
	char name[10];
	double grade;
};

int main(void) {
	struct student s;

	s.number = 20230001;
	strcpy(s.name, "홍길동");
	s.grade = 4.3;

	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.1lf\n", s.grade);

	return 0;
}
*/

/* 예제1의 다른 표현
struct student
{
	int number;
	char name[10];
	double grade;
};

int main(void) {
	struct student s = {20230001, "홍길동", 4.3};      //한 줄에 표현

	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.1lf\n", s.grade);

	return 0;
}
*/

/* 구조체 변수에서 각 멤버 비교
struct student                                           // 학생 구조체 선언
{
	int id;
	char name[20];
	double grade;
};

int main(void) {
	struct student s1 = {315, "홍길동", 2.4 },           //구조체 변수 선언과 초기화
		s2 = { 316, "이순신", 3.7 },
		s3 = {317, "세종대왕", 4.4 };

	struct student max;                                  // ※최고 학점을 저장할 구조체 변수 선언※

	max = s1;                                            // s1을 최고 학점으로 저장
	if (s2.grade > max.grade) max = s2;                  // if s2 학점이 max 학점보다 높으면 s2가 max
	if (s3.grade > max.grade) max = s3;                  // if s3 학점이 max 학점보다 높으면 s3가 max

	printf("학번 : %d\n", max.id);                       // 최고 학점의 멤버 출력
	printf("이름 : %s\n", max.name);
	printf("학점 : %0.1lf\n", max.grade);

	return 0;
}
*/

