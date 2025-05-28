#include <stdio.h>

/* �������� �ּҸ� ����ϴ� �⺻ �ڵ�
int main(void) {
	int i = 10;
	char c = 69;
	float f = 12.3;

	// %p �������� �ּҸ� ���
	printf("i�� �ּ� : %p\n", &i);     //���� i�� �ּ� ���
	printf("c�� �ּ� : %p\n", &c);     //���� c�� �ּ� ���
	printf("f�� �ּ� : %p\n", &f);     //���� f�� �ּ� ���

	return 0;
}
*/

/* ������ ����1
int main(void) {
	int i = 10;
	double f = 12.3;
	int* pi = NULL;       // �����ʹ� �ƹ��͵� ����Ű�� �ʴ� ���� �ǹ�

	double* pf = NULL;
	pi = &i;
	pf = &f;

	printf("%p %p \n", pi, &i);
	printf("%p %p \n", pf, &f);
	return 0;
}
*/

/* ������ ���� 2
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

/* �������� ����
int main(void) {
	int a = 1, * pa = &a;                             // 4byte
	short b = 1, * pb = &b;                           // 2byte
	char c = 1, * pc = &c;                            // 1byte
	double d = 1.0, * pd = &d;                        // 8byte

	printf("%p, %p, %p, %p\n", pa, pb, pc, pd);

	pa = pa + 1;                                      // = �ּҰ��� 4byte ��ŭ ���� (�ּҰ� �ȿ� �ִ� ���� ������ ���� �ƴ�)
	pb = pb + 1;                                      // = �ּҰ��� 2byte ��ŭ ����
	pc = pc + 1;                                      // = �ּҰ��� 1byte ��ŭ ����
	pd = pd + 1;                                      // = �ּҰ��� 8byte ��ŭ ����

	printf("%p, %p, %p, %p", pa, pb, pc, pd);

	return 0;
}
*/

/* swap()�Լ��� ����Ʈ�� ������ ���� ���� �ٲ�
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

/* �ΰ� �̻��� ����� ��ȯ
int get_line_parameter(int x1, int y1, int x2, int y2, float* slope, float* yintercept);

int main(void) {
	float s, y;

	if (get_line_parameter(3, 3, 6, 6, &s, &y) == -1)
		printf("����\n");
	else
		printf("����� %f, y������ %f\n", s, y);
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

/* �����Ϳ� �迭�� ����
int main(void) {
	int a[] = { 10, 20, 30, 40, 50 };          // �迭 ������ a[5]

	printf("a = %u\n", a);                     // a = ������ �迭 a[5]�� ���� ù��° �ּҰ�

	printf("a + 1 = %u\n", a + 1);             // a + 1 = ������ �迭 a[5]�� ���� ù��° �ּҰ����� �������� ũ��(4byte)��ŭ ���� �� = �ι�° �ּҰ�

	printf("*a = %d\n", *a);                   // *a = ������ �迭 a[1]�� ù��° �ּҰ��� ������ �ִ� ��Ұ�

	printf("*(a + 1) = %d\n", *(a + 1));       // *(a + 1) = ������ �迭 a[5]�� �ι�° �ּҰ��� ������ �ִ� ��Ұ�

	return 0;
}
*/