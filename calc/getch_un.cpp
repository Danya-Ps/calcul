#include "c1.h"


char buf[BUFSIZE]; /* буфер для ungetch */
int bufp = 0; /* следующая свободная позиция в буфере */
int getch(void) /* берем символ */
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int с) /* возвращаем символ на ввод */
{
	if (bufp >= BUFSIZE)
		printf("ungetch: слишком много символов\n");
	else
		buf[bufp++] = с;
}