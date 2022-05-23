#pragma once
#include <iostream>
#include <vector>
#include <windows.h>
#define RANK 1000

using namespace std;

template <typename T> int sgn(T val);

class QE
{
	double a, b, c;
public:
	QE(double a = 0, double b = 0, double c = 0)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	void SetA(double a)
	{
		this->a = a;
	}
	void SetB(double b)
	{
		this->b = b;
	}
	void SetC(double c)
	{
		this->c = c;
	}
	double GetA()
	{
		return a;
	}
	double GetB()
	{
		return b;
	}
	double GetC()
	{
		return c;
	}
	double GetDiscriminant()
	{
		return b * b - 4 * a * c;
	}
	void OutputEquation()
	{
		cout << round(a * RANK) / RANK << "x^2" << (sgn(b) >= 0 ? " + " : " - ")
			<< round(sgn(b) * b * RANK) / RANK << "x" << (sgn(c) >= 0 ? " + " : " - ")
			<< round(sgn(c) * c * RANK) / RANK << " = 0" << endl;
	}
};
vector<QE> GetListOfEquations(unsigned int num);
void InputCoefficients(QE& qe);
double InputDouble(char coef);
void OutputVector(vector<QE> v);
void OutputComplexEquations(vector<QE> v);
vector<unsigned int> GetPosOfComplexEquations(vector<QE> v);
void OutputComplexEquations(vector<QE> v);