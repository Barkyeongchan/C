#include <stdio.h>

/*
#include <stdio.h>       //��ó���� ���ù� = ������ �̰� ���� �����ؾ� ��

int main(void)           //{int=�Լ���Ÿ��}{main=�Լ��̸�}(void={�Լ��Է�Ÿ��})
{                        // �Լ� ����
	printf("Be happy!"); // �Լ� ����

	return 0;            // �Լ� ���� ��
}                        // �Լ� ��
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
	sum = x + y; // int x = 1, y = 2, sum = x + y; �� ���� �� �ִ�

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

	printf("short���� ���� ��� : %d\n", sh);
	printf("int���� ���� ��� : %d\n", in);
	printf("long���� ���� ��� : %d\n", ln);
	printf("long long���� ���� ��� : %d\n", lln);
	printf("long long���� ũ�� : %d����Ʈ\n", sizeof(long long));

	return 0;
}
*/

/*
int main(viod)
{
	double db = 1.234567890123456789;

	printf("flaot���� ������ : %.20f\n", ft);
	printf("double���� ������ : %.20lf\n", db);
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
	printf("������ : %.1lf�Դϴ�.\n", tax);

	return 0;
}
*/

/*
// scanf �Լ�
int main(void)
{
	int a;                          //����

	scanf("%d", &a);                //&�� ����Ͽ� ������ �ּҸ� ����
	printf("�Էµ� �� : %d\n", a);

	return 0;
}
*/

/*
// ������ �Ǽ��� scanf
int main(void)
{
	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� : ");
	scanf("%d%lf", &age, &height);
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�.\n", age, height);

	return 0;
}
*/

/*
// ���ڿ� ���ڿ��� scanf�ϰ� printf�ϱ�
int main(void)
{
	char name[20];
	char grade[2];

	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("��� �Է� : ");
	scanf("%s", &grade);
	printf("%s�� ����� %s�Դϴ�.\n", name, grade); 

	return 0;
}
*/

/*
// ����� ����ϴ� ���α׷� �����
int main(void)
{
	double num1, num2, num3;
	double sum, avg;

	printf("����� ���Ϸ��� ������ ���ڸ� �Է��ϼ���\n");
	printf("ù��° : ");
	scanf("%lf", &num1);
	printf("�ι�° : ");
	scanf("%lf", &num2);
	printf("����° : ");
	scanf("%lf", &num3);

	sum = num1 + num2 + num3;
	avg = sum / 3.0;

	printf("�հ�=%.2lf\n", sum); // �Ҽ��� ���� 2�ڸ����� ǥ��
	printf("���=%.2lf\n", avg); // �Ҽ��� ���� 2�ڸ����� ǥ��

	return 0;
}
*/

/*
// ��� ������
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
// ++�� -- ���� ������
int main(void)
{
	int a = 10, b = 10;

	++a;    // ������ ���� 1��ŭ ����
	--b;    // ������ ���� 1��ŭ ����

	printf("a : %d\n", a);
	printf("b : %d\n", b);

	return 0;
}
*/

/*
// ���� �������� ������ ǥ��� ���� ǥ��
int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;       // ������ ���� ������
	post = (b++) * 3;      // ������ ���� ������

	printf("���� ���� �� �ʱⰪ a = %d, b = %d\n", a, b);
	printf("������ : (++a) * 3 = %d, ������ : (b++) *3 = %d\n", pre, post);

	return 0;
}
*/

/*
* // ���� ǥ���� ��� ���� ������ ���� �� ������ ���� ���´�
int main(void)
{
	int a = 1;
	int b = a++;

	printf("%d\n", b);
	printf("%d\n", a);

	return 0;     // ����� b = 1, a = 2
}
*/

/*
// for���� ���� �����ڸ� ����� ������ �ڵ�
int main(void) {
	for (int i = 1;
		i <= 10;
		i++) 
	{  // i�� 1���� �����ؼ� 10���� 1�� ����
		
		printf("%d\n", i);
	}
	return 0;
}
*/

/*
// ��������
int main(void)
{
	int x, y;

	printf("�ΰ��� ������ �Է��Ͻÿ� : ");               // a = 1, b = 0�� �־��� ��
	scanf("%d%d", &x, &y);

	printf("%d && %d�� ����� : %d\n", x, y, x && y);    // ������ �� True������ = (�� and ����) = False = 0
	printf("%d || %d�� ����� : %d\n", x, y, x || y);    // ���� �� �ϳ��� True���� �� = (�� or ����) = True = 1
	printf("!%d�� ����� : %d\n", x, !x);                // True�� �ƴϴ� = (not ��) = False = 0

	return 0;
}
*/

/*
// �� ��ȯ ������ = (������)�ǿ����� ����
int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
	printf("a = %d, b = %d\n", a, b);
	printf("a / b�� ��� : %.1lf\n", res);
	
	a = (int)res;
	printf("(int)%.1lf�� ��� : %d\n", res, a);

	return 0;

}
*/

/*
// sizeof() �������� ��� ��
int main(void)
{
	int a = 10;
	double b = 3.4;

	printf("int�� ������ ũ�� : %d\n", sizeof(a));
	printf("double�� ������ ũ�� : %d\n", sizeof(b));
	printf("������ ����� ũ�� : %d\n", sizeof(10));
	printf("������ ������� ũ�� : %d\n", sizeof(1.5 + 3.4));
	printf("char �ڷ����� ũ�� : %d\n", sizeof(char));

	return 0;
}
/*
Test
*/