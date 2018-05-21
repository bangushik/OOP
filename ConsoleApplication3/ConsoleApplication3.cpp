	#include "stdafx.h"
	#include "gtest/gtest.h"
	#include "..\ConsoleApplication1\matrixDiag.h"
	#include "..\ConsoleApplication1\matrix.h"
	#include "..\ConsoleApplication1\container.h"
	class SUM : public ::testing::Test {
	};

	TEST_F(SUM, CheckSumdiag)
	{
		ifstream in("diag1.txt");
		ofstream out("qwe.txt");
		matrix* matr=matrix::InMatrix(in);
		matr->MatrixSum(out);
		int actual = matr->sum;
		int expected = 60;
		ASSERT_EQ(actual, expected);
	}
	TEST_F(SUM, CheckSum2d)
	{
		ifstream in("2d1.txt");
		ofstream out("qwe.txt");
		matrix* matr = matrix::InMatrix(in);
		matr->MatrixSum(out);
		int actual = matr->sum;
		int expected = 78;
		ASSERT_EQ(actual, expected);
	}
	TEST_F(SUM, CheckSumtrg)
	{
		ifstream in("trg1.txt");
		ofstream out("qwe.txt");
		matrix* matr = matrix::InMatrix(in);
		matr->MatrixSum(out);
		int actual = matr->sum;
		int expected = 48;
		ASSERT_EQ(actual, expected);
	}
	class In : public :: testing::Test
	{};
	bool CompareFiles(ifstream& test, ifstream &test1)
	{
		char temp1;
		char temp2;
		while (!test.eof() && !test1.eof())
		{
			test >> temp1;
			test1 >> temp2;
			if (temp1 != temp2)
			{
				return false;
			}

		}
		if(test.eof()!=test1.eof())
		{
			return false;
		}
		return true;
	}
	TEST_F(In, CheckIn)
	{   
		node *cur;
		node *temp;
		node *next;
		node* a;
		ifstream in("1.txt");
		ofstream out("qwe3.txt");
		container cont;
		cont.In(in);
		cont.ViewCont(out);
		out.close();
		ifstream test("qwe2.txt");
		ifstream test1("qwe3.txt");
		bool res = CompareFiles(test, test1);
		ASSERT_TRUE(res);
	}
	class Sort : public ::testing::Test
	{};
	TEST_F(Sort, CheckSort)
	{
		node *cur;
		node *temp;
		node *next;
		node* a;
		int param = 1;
		ifstream in("1.txt");
		ofstream out("qwe.txt");
		container cont;
		cont.In(in);
		cur = cont.Gethead();
		a = cur->next;
		cur->info->MatrixSum(out);
		a->info->MatrixSum(out);
		cont.ContainerSort(param);
		cur = cont.Gethead();
		a = cur->next;

   
	
		ASSERT_LT(cur->info->sum,a->info->sum);
	}

	int main(int argc, char **argv) {
		::testing::InitGoogleTest(&argc, argv);
		return RUN_ALL_TESTS();
	}
