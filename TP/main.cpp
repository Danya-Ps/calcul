
#include "T1.h"
#include "..\calc\c1.h"

int getop(char[]);
void push(double);
double pop(void);
using namespace std;
/**************** ����������� � �������� �������� ������� ****************/
int main()
{
	setlocale(LC_ALL, "rus");
	int type;
	double opp;
	char s[MAXSIZ];
	while ((type = getop(s)) != EOF) {
		switch (type) {
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			opp = pop();
			push(pop() - opp);
			break;
		case '/':
			opp = pop();
			if (opp != 0.0)
				push(pop() / opp);
			else
				printf("������: ������� �� ����\n");
			break;
		case '\n':
			printf("\t%.8g\n", pop());
			break;
		default:
			printf("������: ����������� �������� %s\n", s);
			break;
		}
	}
	return 0;
}