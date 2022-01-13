#include "c1.h"


char buf[BUFSIZE]; /* буфер для ungetch */
int bufp = 0; /* следующая свободная позиция в буфере */

///Функция, берущая символ из буфера
int getch(void) /* берем символ */
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

///Функция, возвращающая символ на вывод
void ungetch(int c) /* возвращаем символ на ввод */
{
	if (bufp >= BUFSIZE)
		printf("ungetch: слишком много символов\n");
	else
		buf[bufp++] = c;
}
