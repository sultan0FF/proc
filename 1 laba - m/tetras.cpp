#include <fstream>
#include "tetra_atd.h"

using namespace std;

namespace simple_shapes {
	// ���� ��������� ��������� �� ������
	void In(tetra &f, ifstream &ifst)
	{
		ifst >> f.a;
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