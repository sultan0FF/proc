#include <fstream>
#include "tetra_atd.h"

using namespace std;

namespace simple_shapes {
	// ���� ��������� ��������� �� ������
	void In(tetra &f, ifstream &ifst)
	{
		ifst >> f.a;
	}
	void Out(tetra &f, ofstream &ofst)
	{
		ofst << "It is Tetraidr: a = "
			<< f.a << endl;
	}
} // end simple_shapes namespace