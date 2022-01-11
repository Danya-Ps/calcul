#include "T1.h"

int sp = 0; /* следующая свободная позиция в стеке */
double d[MAXDEPTH]; /* стек */
/* push: заносим значение n в стек */
void push(double n)
{
	if (sp < MAXDEPTH)
		d[sp++] = n;
	else
		printf("стек полон, %g не помещается\n", n);
}
/* pop: берем верхнее из стека в качестве результата */
double pop(void)
{
	if (sp > 0)
		return d[--sp];
	else {
		printf("стек пуст\n");
		return 0.0;
	}
}