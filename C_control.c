#include <stdio.h> //��ó����, standard input output header

/*
// if ���
int main(void) {
	int number;
	
	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &number);

	if (number > 0) {
		printf("����Դϴ�.");
	}

	printf("�Էµ� ���� %d�Դϴ�.", number);

	return 0;
}
*/

/*
// if ~ else��
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
	printf("������ �Է��ϼ���.");
	scanf("%d", &a);

	if (a % 2 == 0) {
		printf("%d�� ¦���Դϴ�", a);
	}
	else {
		printf("%d�� Ȧ���Դϴ�.", a);
	}
	return 0;
}
*/

/*
// if ~ else if ~ else��
int main(void) {
	int grade = 0;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &grade);

	if (grade >= 90) {
		printf("������ A�Դϴ�.");
	}
	else if (grade >= 80) {
		printf("������ B�Դϴ�.");
	}
	else {
		printf("����� ����� �ƴմϴ�.");
	}

	return 0;
}
*/

/*
int main(void) {
	int a = 0, b;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &a);

	if (a > 0) {
		printf("b�� 1�� �����մϴ�.");
		b = 1;
	}
	else if (a == 0) {
		printf("b�� 2�� �����մϴ�.");
		b = 2;
	}
	else{
		printf("b�� 3�� �����մϴ�.");
		b = 3;
	}

	return 0;
}
*/

/*
// if~else if~else ����Ǯ��
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

	printf("%c�� ��������", size);

	return 0;
}
*/

/*
// $$ �������ڸ� Ȱ���� if~else��
int main(void) {
	double height = 0, weight = 0;
	printf("Ű�� �Է��ϼ��� : ");
	scanf("%lf", &height);
	printf("�����Ը� �Է��ϼ��� : ");
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
// swich~case braek���� �⺻ Ȱ��
int main(void) {
	int rank = 0, m = 0;
	printf("����� �Է��ϼ��� : ");
	scanf("%d", &rank);

	switch (rank) {      // rank ���� Ȯ��
		case 1:          // rank ���� 1
			m = 300;     // m = 300�� ����
			break;       // ����� ���
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

/* if�� Ȯ�ι���
int main(void) {
	int n;
	printf("insert Int : ");
	scanf("%d", &n);
	switch(n % 3) {
		case 0:
		    printf("Fales");
			break;
		default:                // 0�� ������ �������̹Ƿ� default
			printf("True");
			break;
	}
	return 0;
}
*/

/* if�� Ȯ�ι���
int main(void) {
	int age = 0, chest = 0;
	char size;
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);
	printf("�����ѷ��� �Է��ϼ��� : ");
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
	printf("������� %c�Դϴ�.\n", size);

	return 0;
}
*/

/* ���� �����
int main(void) {
	int num1, num2;
	char t;
	printf("ù��° ������ �Է��ϼ��� : ");
	scanf("%d", &num1);
	printf("�ι�° ������ �Է��ϼ��� : ");
	scanf("%d", &num2);
	printf("����� ������ �Է��ϼ���(+,-,/,*) : ");
	scanf(" %c", &t);

	printf("�������� �Է�(����) : ");              // ������ ��Ģ���� �� ���� �Է�
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

	switch(t)                                                        //swich ���
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

/* while���� Ȱ���� ������
int main(void) {
	int n ;
	int i = 1;
	
	printf("����ϰ� ���� �� : ");
	scanf("%d", &n);
	
	while (i <= 9) {
		printf("%d*%d = %d\n", n, i, n * i);
		i++;
	}
	return 0;
}
*/

/* while���� Ȱ���� 
int main(void) {
	int i, n, sum;                         // int ����

	printf("������ �Է��Ͻÿ� : ");        // n �� �Է�
	scanf("%d", &n);

	i = 1;                                 // ���� �ʱ�ȭ
	sum = 0;                               // ���� �ʱ�ȭ

	while (i <= n) {                       // i�� �Էµ� �������� �۰ų� ������ ����
		sum += i;                          // 0�� 1�� ���� ���� sum�� �����Ѵ�
		i++;                               // i�� 1�� ���Ѵ� �ݺ�
	}
	printf("1���� %d������ ���� %d�Դϴ�.", n, sum);

	return 0;
}
*/

/*��Ŭ���� �˰���
int main(void) {
	int x, y, r;

	printf("�� ���� �Է��ϼ���(ū ��, ���� ��) : ");
	scanf("%d%d", &x, &y);

	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ� ������� %d�Դϴ�.\n", x);

	return 0;
}
*/

/* for���� �̿��� �׸� �����
int main(void) {
	int i;
	printf("**********\n");

	for (i = 0; i < 5; i++)
		printf("*        *\n");

	printf("**********");

	return 0;
}
*/

/* goto���� ���
int main(void) {
	int x, y;

	for (y = 1; y < 10000; y++)
	{
		for(x = 1; x < 50; x++)
		{
			if (kbhit()) goto OUT;     // goto�� ����ؼ� �Ʒ��� OUT�� ��ġ�� �̵�
			printf("*");
		}
		printf("\n");
	}
OUT:
	return 0;
}
*/

/* �ݰ��� ���ϱ� ���� ���� Ǭ��
int main(void) {
	int half = 0, pro = 100, pre_pro = 100, time_ = 0;

	printf("�ݰ��⸦ �Է��ϼ��� : ");
	scanf("%d", &half);

	while (pro > (pre_pro * 0.1)) {
		time_ = time_ + half;
		pro = pro / 2;
	}
	printf("%d", pro);
	return 0;
}
*/

/* �ش�
int main(void) {
	int halflife, years = 0;                   // �ݰ���� �ð��� ���� �ʱ�ȭ (����)
	double initial, current;                   // �ʱ� ���� ��� ������ �� �ʱ�ȭ (�Ǽ�)

	printf("�ݰ��⸦ �Է��Ͻÿ�(��) : ");
	scanf("%d", &halflife);

	initial = 100.0;                           // �ʱ� ������ �� ���Ƿ� ����
	current = initial;                         // ���ϴ� �ʱ� ������ ���� ���� ������ ������ ����

	while (current > initial/10.0) {           // ���� ������ ���� �ʱ� ������ ���� 1/10���� �������� �ݺ�
		years += halflife;                     // �ð��� �ݰ��⸦ �ݺ��ؼ� ����
		current = current / 2.0;               // �� �ݰ��� ���� ���� 1/2�� ��
		printf("%d�� �Ŀ� ���� �� = %f\n", years, current);    // �����Ȳ ������
	}
	printf("1/10 ���Ϸ� �Ǳ���� �ɸ��� �ð� = %d��", years);  // ���

	return 0;
}
*/


/* ���� �߻��⸦ Ȱ���� ���� ���� ã��
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((unsigned)time(NULL));    // ���� �߻���
	int answer = rand() % 100;      // 0 ~ 99 ���� ����
	int guess;
	int tries = 0;

	do {
		printf("������ ���纸���� : ");
		scanf("%d", &guess);
		++tries;

		if (guess > answer) {
			printf("High!\n");
		}
		else if (guess < answer) {
			printf("Low!\n");
		}
		else {
			printf("�����մϴ�. %dȸ �õ�\n", tries);
		}
	} while (guess != answer);

	return 0;
}
*/

/*����ǥ�� �׸���
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