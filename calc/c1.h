#include <stdio.h>
#include <ctype.h>

int getch(void);
void ungetch(int);
int getop(char []);

#define MAXSIZ 10 /* макс. размер операнда или оператора */
#define NUMBER '0' /* признак числа */
#define BUFSIZE 10
