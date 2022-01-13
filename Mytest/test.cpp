#include "pch.h"
#include "../calc/c1.h"
#include "../T1.h"
/*TEST(Test, Test_push_pop_1) {
	extern double d[MAXDEPTH];
	double* result_push = new double[10]{ 5, 3, 1, -15, 10, 8, 28, 16, 0, 1 };
	push(5);
	push(3);
	push(1);
	push(-15);
	push(10);
	push(8);
	push(28);
	push(16);
	push(0);
	push(1);

	for (int i = 0; i < MAXDEPTH; i++) {
		EXPECT_EQ(d[i], result_push[i]);
	}

	double* result_pop = new double[10]{ 1, 0, 16, 28, 8, 10, -15, 1, 3, 5 };
	double* result = new double[MAXDEPTH];
	for (int i = 0; i < MAXDEPTH; i++) {
		result[i] = pop();
		EXPECT_EQ(result_pop[i], result[i]);
	}

	delete[] result_push;
	delete[] result_pop;
	delete[] result;
}


TEST(Test, Test_push_pop_1) {
	extern double d[MAXDEPTH];
	double* result_push = new double[10]{ 1, 32, 15, -15, 7, 120, 0, 0, 0, 0 };
	push(1);
	push(32);
	push(15);
	push(-15);
	push(7);
	push(120);


	for (int i = 0; i < MAXDEPTH; i++) {
		EXPECT_EQ(d[i], result_push[i]);
	}

	double* result_pop = new double[10]{ 120, 7, -15, 15, 32, 1, 0, 0, 0, 0 };
	double* result = new double[MAXDEPTH];
	for (int i = 0; i < MAXDEPTH; i++) {
		result[i] = pop();
		EXPECT_EQ(result_pop[i], result[i]);
	}

	delete[] result_push;
	delete[] result_pop;
	delete[] result;
}*/
