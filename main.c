#include <stdio.h>

/*
// sub.c�� ���� ������ ����

void input_data(int*, int*);
double average(int, int);

int main(void) {
	int a, b;
	double avg;

	input_data(&a, &b);
	avg = average(a, b);
	printf("%d�� %d�� ��� : %.1lf\n", a, b, avg);

	return 0;
}
*/


/* #includ "student.h" �� ����� ������� ���� ����
#include "student.h"

int main(void) {
	Student a = { 315, "ȫ�浿" };
	printf("�й� : %d, �̸� : %s\n", a.num, a.name);

	return 0;
}
*/


/* ���� ������ ���� ���� ���� ����
void auto_func(void);
void static_func(void);

int main(void){
	int i;

	printf("�Ϲ� ���� ����(auto)�� ����� �Լ�...\n");
	for (i = 0; i < 3; i++) {
		auto_func();
	}

	printf("���� ���� ����(static)�� ����� �Լ�...\n");
	for (i = 0; i < 3; i++) {
		static_func();
	}

	return 0;
}

void auto_func() {					// ���� ���� ����� �ʱ�ȭ
	auto int a = 0;

	a++;						    // a�� 1 ����
	printf("%d\n", a);              // a ���
}

void static_func() {                // ���� ���� ���� ����� �ʱ�ȭ
	static int a = 0;

	a++;							// a�� 1 ����
	printf("%d\n", a);              // a ���
}
*/