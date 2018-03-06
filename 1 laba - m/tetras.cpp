#include <fstream>
#include "tetra_atd.h"

using namespace std;

namespace simple_shapes {
	// Ввод параметра тетраэдра из потока
	void In(tetra &f, ifstream &ifst)
	{
		ifst >> f.a;
	}
	// Вывод тетраэдра из потока
	void Out(tetra &f, ofstream &ofst)
	{
		ofst << "It is Tetraidr: a = "
			<< f.a << endl;
	}
	// Обьем 
	double V(tetra &f)
	{
		return  0.18 * f.a * f.a * f.a;
	}
} // end simple_shapes namespace