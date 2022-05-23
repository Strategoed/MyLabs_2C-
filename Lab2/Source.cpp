#include "Header.h"

int main()
{
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
	unsigned int n;
	cout << "������� ���������� ���������, ������� ������ ������: "; cin >> n;
    if (n > 0)
    {
        vector<QE> arr = GetListOfEquations(n);
        OutputVector(arr);
        OutputComplexEquations(arr);
    }
    else
    {
        cout << "����� �� ���������...";
    }
    return 0;
}