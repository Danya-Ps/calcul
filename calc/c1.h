#include <stdio.h>
#include <ctype.h>

int getch(void);
void ungetch(int);
int getop(char []);

#define MAXSIZ 10 /* ����. ������ �������� ��� ��������� */
#define NUMBER '0' /* ������� ����� */
#define BUFSIZE 10
