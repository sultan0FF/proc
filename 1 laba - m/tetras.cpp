#include <fstream>
#include <iostream>
#include "tetra_atd.h"

using namespace std;

namespace simple_shapes {
	bool Check(ifstream &ifst, tetra &f);
	// ���� ��������� ��������� �� ������
	void In(tetra &f, ifstream &ifst)
	{
		ifst >> f.a;
		Check(ifst, f);
	}
	bool Check(ifstream &ifst, tetra &f)
	{
		if (ifst.fail()) {
			cout << "�������� ������!" << endl;
			system("pause");
		}
		else if (f.a <= 0) {
			cout << "������� � ������ ���� ������ ����!" << endl;
			system("pause");
		}
		else if (f.a - (int)f.a > 0){
			cout << "� ������ ���� �����!" << endl;
			system("pause");
		}
		return 0;
	}
	// ����� ��������� �� ������
	void Out(tetra &f, ofstream &ofst)
	{
		ofst << "It is Tetraidr: a = "
			<< f.a << endl;
	}
	// ����� 
	double V(tetra &f)
	{
		return  0.18 * f.a * f.a * f.a;
	}
} // end simple_shapes namespace