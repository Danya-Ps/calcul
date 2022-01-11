#include "T1.h"

int sp = 0; /* ��������� ��������� ������� � ����� */
double d[MAXDEPTH]; /* ���� */
/* push: ������� �������� n � ���� */
void push(double n)
{
	if (sp < MAXDEPTH)
		d[sp++] = n;
	else
		printf("���� �����, %g �� ����������\n", n);
}
/* pop: ����� ������� �� ����� � �������� ���������� */
double pop(void)
{
	if (sp > 0)
		return d[--sp];
	else {
		printf("���� ����\n");
		return 0.0;
	}
}