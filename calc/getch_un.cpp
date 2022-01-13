#include "c1.h"


char buf[BUFSIZE]; /* ����� ��� ungetch */
int bufp = 0; /* ��������� ��������� ������� � ������ */
int getch(void) /* ����� ������ */
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c) /* ���������� ������ �� ���� */
{
	if (bufp >= BUFSIZE)
		printf("ungetch: ������� ����� ��������\n");
	else
		buf[bufp++] = c;
}
