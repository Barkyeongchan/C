#include <stdio.h>

/* �迭�� Ȱ���� �⺻ �ڵ�
int main(void) {
	int i;
	int scores[5];

	scores[0] = 10;
	scores[1] = 20;
	scores[2] = 30;
	scores[3] = 40;
	scores[4] = 50;

	for (i = 0; i < 5; i++)
		printf("scores[%d]�� %d\n", i, scores[i]);

	return 0;
}
*/

/* �迭�� Ȱ���� ��հ� ���ϱ�
#define STUDENT 5                                        // �迭�� ��� ������ 5���� ����, ��ó��

int main(void) {
	int scores[STUDENT];                                 // == scored[5]
	int sum = 0;
	int  i, average;

	for (i = 0; i < STUDENT; i++) {
		printf("�л����� ������ �Է��ϼ��� : ");
		scanf("%d", &scores[i]);
	}
	for (i = 0; i < STUDENT; i++) {
		sum += scores[i];
	}
	average = sum / STUDENT;
	printf("���� ��� = %d", average);

	return 0;
}
*/

/* �迭 �ʱ�ȭ ����
#define SIZE 5

int main(void) {
	int i;
	int scores[SIZE] = { 31, 63, 62, 87, 43 };         // �⺻���� �ʱ�ȭ ��� , �ڷ��� �迭��[��Ҽ�] = {���, (��Ҽ���ŭ) , ���}

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
	printf("��� : %.1lf\n", avg);
	return 0;
}
*/

/* Ȯ�ι��� Ǯ�� ���� Ǭ��
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

/* Ȯ�ι��� Ǯ�� ����Ǯ��
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

/* ���ڿ��� �����ϴ� char�迭
int main(void) {
	char str[20] = "applejam";                 // ���ڿ� �ʱ�ȭ

	printf("������ ���ڿ� : %s\n", str);       // �ʱ�ȭ ���ڿ� ���
	printf("�ٲ� ���ڿ� �Է� : ");
	scanf("%s", &str);                         // �ٲ� ���ڿ� �Է�
	printf("�ٲ� ���ڿ� : %s\n", str);         // �ٲ� ���ڿ� ���
	
	return 0;
}
*/

/* strcpy�� Ȱ���� ���ڿ� ����
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

/* gets()�� puts()�� ����� ���ڿ� �����
int main(void) {
	char str[80];
	
	printf("���ڿ� �Է� : ");
	gets(str);                         // scanf()�� �޸� ��ĭ�̳� ���� ���ϰ� ���� �� �ִ�.
	puts("�Էµ� ���ڿ� : ");
	puts(str);                         // ���ڿ��� ����Ѵ�, �˾Ƽ� ���� �ٲ�

	return 0;
}
*/

/* null ���ڰ� ���� ���ڿ�
int main(void) {
	char str[5];                  // str ���ڿ��� �ʱ�ȭ ���� ����

	str[0] = 'O';
	str[1] = 'K';
	printf("%s\n", str);          // ��Ұ� �������� ���� ��Ҵ� null���� �����Ⱚ�� ��µ�

	return 0;
}
*/

/* �¼� ���� �ý���
#define SIZE 10

int main(void) {
	char ans1;
	int ans2, i;
	int seats[SIZE] = {0};

	while (1) {
		printf("���� �ұ��?(Y/N) : ");
		scanf("%c", &ans1);

		if (ans1 == 'N')
			break;

		printf("\n**********************\n");
		printf(" 1 2 3 4 5 6 7 8 9 10\n");
		printf("**********************\n");

		for (i = 0; i < SIZE; i++)
			printf(" %d", seats[i]);
		printf("\n");

		printf("\n���° �¼��� �����Ͻðڽ��ϱ�? : \n");
		scanf("%d", &ans2);

		if (seats[ans2 - 1] == 0) {
			seats[ans2 - 1] = 1;
			printf("������ �Ϸ�Ǿ����ϴ�\n");
		}
		else
			printf("�̹� ����� �ڸ��Դϴ�.");
	}
	return 0;
}
*/