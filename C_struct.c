#include <stdio.h>

// ����ü

/* ����ü�� �����ϰ� ����� ����ϴ� ����
struct student                                // ����ü ����
{
	int num;                                  // int�� ���
	double grade;							  // double�� ���

};                                            // �����ݷ�

int main(void) {
	struct student s1;                        // struct student�� ���� ����

	s1.num = 2;                               // s1�� ��� num�� 2 ���� (������)
	s1.grade = 2.7;                           // s1�� ��� grade�� 2.7 ���� (�μ���)
	printf("�й� : %d\n", s1.num);            // num ��� ���
	printf("���� : %.1lf\n", s1.grade);		  // grade ��� ���

	return 0;
}
*/ 

/* ���� 1
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
	strcpy(s.name, "ȫ�浿");
	s.grade = 4.3;

	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.1lf\n", s.grade);

	return 0;
}
*/

/* ����1�� �ٸ� ǥ��
struct student
{
	int number;
	char name[10];
	double grade;
};

int main(void) {
	struct student s = {20230001, "ȫ�浿", 4.3};      //�� �ٿ� ǥ��

	printf("�й� : %d\n", s.number);
	printf("�̸� : %s\n", s.name);
	printf("���� : %.1lf\n", s.grade);

	return 0;
}
*/

/* ����ü �������� �� ��� ��
struct student                                           // �л� ����ü ����
{
	int id;
	char name[20];
	double grade;
};

int main(void) {
	struct student s1 = {315, "ȫ�浿", 2.4 },           //����ü ���� ����� �ʱ�ȭ
		s2 = { 316, "�̼���", 3.7 },
		s3 = {317, "�������", 4.4 };

	struct student max;                                  // ���ְ� ������ ������ ����ü ���� �����

	max = s1;                                            // s1�� �ְ� �������� ����
	if (s2.grade > max.grade) max = s2;                  // if s2 ������ max �������� ������ s2�� max
	if (s3.grade > max.grade) max = s3;                  // if s3 ������ max �������� ������ s3�� max

	printf("�й� : %d\n", max.id);                       // �ְ� ������ ��� ���
	printf("�̸� : %s\n", max.name);
	printf("���� : %0.1lf\n", max.grade);

	return 0;
}
*/

