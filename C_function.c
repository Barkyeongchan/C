#include <stdio.h>

/*�Լ��� �⺻��
int sum(int x, int y);                        // sum �Լ� ����

int main(void) {                              // main �Լ� ����
	int a = 10, b = 20;
	int result;                               // �� ���ڸ� ���� ����� ����

	result = sum(a, b);                       // sum �Լ� ȣ��
	printf("result : %d\n", result);

	return 0;
}                                             // main �Լ� ��

int sum(int x, int y) {                       // sum �Լ� ����
	int temp;                                 // temp = ��� ������ ���� , �̸� �ٲ㵵 ��

	temp = x + y;                             // sum �Լ��� ������� temp�� ����

	return temp;                              // temp �� ��ȯ
}                                             // sum �Լ� ��
*/

/*�Լ��� Ȱ���� ū �� ���ϱ�
int max(int x, int y);

int main(void) {
	int value, a, b;

	printf("���� �ΰ��� �Է��Ͻÿ� : ");
	scanf("%d %d", &a, &b);

	value = max(a, b);
	printf("�� ū ���� %d�Դϴ�.", value);
	return 0;
}
int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}
*/

/*�Ű������� ���� �Լ�
int get_num(void);                             // �Ű����� �ڸ��� void(���ٶ�� ��)

int main(void) {
	int result;

	result = get_num();
	printf("��ȯ�� ; %d\n", result);

	return 0;
}
int get_num(void) {
	int num;

	printf("��� �Է� : ");
	scanf("%d", &num);

	return num;
}
*/

/*��ȯ���� ���� �Լ�
void print_char(char ch, int count);             // ��ȯ�� �ڸ��� void

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

/*��ȯ���� �Ű����� �� ���� �Լ�
void print_line(void);                                     // ��ȯ���� �Ű����� �ڸ��� void

int main(void) {
	print_line();
	printf("�й�      �̸�      ����      ����\n");
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

/* �Լ� �ȿ� �����θ� �θ��� ����Լ�
void fruit(void);

int main(void) {
	fruit();
	return 0;
}
void fruit(void) {
	printf("apple\n");         // apple ��� ��
	fruit();                   // �ڽ��� �ٽ� ȣ�� = ���� �ݺ�
}
*/

/* ���� Ƚ���� ���� ����Լ�
void fruit(int count);         // �Ű����� �־���

int main(void) {
	fruit(1);                  // ó�� ȣ���ϹǷ� 1�� �μ��� �ش�
	return 0;
}
void fruit(int count) {        // ȣ�� Ƚ���� �Ű������� ����
	printf("apple\n");
	if (count == 3) return;    // ȣ�� Ƚ���� 3ȸ�� ��ȯ�ϰ� ��
	fruit(count + 1);          // ��ȣ�� �� �� ȣ�� Ƚ�� 1 ����
}
*/

/*���丮���� ���� ���ڸ� �Է¹޴´�

�Է¹����� * (�Է¹�����-1) * (�Է¹�����-2)* ... *2 * 1 �ݺ��Ѵ�
n = 10
i = 1
fact = n * (n-i)
i++

10*9
for (�Է¹��� ��)
*/

/* �Լ��� Ȱ���� ���丮�� �����
int factorial(int n);

int main(void) {
	int n;
	printf("�˰� ���� ���丮�� ����? : ");
	scanf("%d", &n);
	printf("%d!�� ���� %d�Դϴ�.\n", n, factorial(n));
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

	srand((unsigned)time(NULL));                    //�ð� ������ �ʱ�ȭ

	for (i = 0; i < 6; i++) {
		car1_dist += rand()%100;                    // rand()�� ����Ͽ� ���� �߻�, %�����ڸ� ����Ͽ� 0~99���� ���� ����
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