#include "Header.h"
#define Max 32767

template <typename T> int sgn(T val) {
	return (T(0) < val) - (val < T(0));
}

vector<QE> GetListOfEquations(unsigned int num)
{
	vector<QE> arr;
	QE qe;
	for (unsigned int i = 0; i < num; i++)
	{
		cout << "Введите коэффициенты " << i + 1 << " уравнения:" << endl;
		InputCoefficients(qe);
		arr.push_back(qe);
	}
	return arr;
}

void InputCoefficients(QE& qe)
{
	double k;
	k = InputDouble('a');
	qe.SetA(k);
	k = InputDouble('b');
	qe.SetB(k);
	k = InputDouble('c');
	qe.SetC(k);
}

double InputDouble(char coef) 
{
	double d;
	while (1) {
		cout << '\t' << coef << ": "; cin >> d;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(Max, '\n');
		}
		else break;
	}
	return d;
}

void OutputVector(vector<QE> v)
{
	for (unsigned int i = 0; i < v.size(); i++)
	{
		cout << i + 1 << ": "; v.at(i).OutputEquation();
	}
}

void OutputComplexEquations(vector<QE> v)
{
	vector<unsigned int> pos = GetPosOfComplexEquations(v);
	cout << endl << "Уравнения, которые не имеют действительных решений : " << endl;
	for (unsigned int i = 0; i < pos.size(); i++) {
		cout << pos.at(i) + 1 << ": "; v.at(pos.at(i)).OutputEquation();
	}
}

vector<unsigned int> GetPosOfComplexEquations(vector<QE> v) {
	vector<unsigned int> nums;
	for (unsigned int i = 0; i < v.size(); i++) {
		if (v.at(i).GetDiscriminant() < 0) {
			nums.push_back(i);
		}
	}
	return nums;
}
