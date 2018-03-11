#include <fstream>
#include <iostream>
#include "tetra_atd.h"

using namespace std;

namespace simple_shapes {
	bool Check(ifstream &ifst, tetra &f);
	// Ввод параметра тетраэдра из потока
	void In(tetra &f, ifstream &ifst)
	{
		ifst >> f.a;
		Check(ifst, f);
	}
	bool Check(ifstream &ifst, tetra &f)
	{
		if (ifst.fail()) {
			cout << "Неверный формат!" << endl;
			system("pause");
		}
		else if (f.a <= 0) {
			cout << "Сторона А должна быть больше нуля!" << endl;
			system("pause");
		}
		else if (f.a - (int)f.a > 0){
			cout << "А должно быть целым!" << endl;
			system("pause");
		}
		return 0;
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