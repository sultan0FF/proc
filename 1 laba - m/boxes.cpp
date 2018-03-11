#include <fstream>
#include <iostream>
#include <fstream>
#include "box_atd.h"
using namespace std;

namespace simple_shapes 
{
	bool Check(ifstream &ifst, box &r);
	void In(box &r, ifstream &ifst)
	{
		ifst >> r.x >> r.y >> r.z;
	    Check(ifst, r);
	}

	bool Check(ifstream &ifst, box &r)
	{
		if (ifst.fail()){
			cout << "�������� ������!" << endl;
			system("pause");
		}
		else if (r.x <= 0){
			cout << "������ ������ ���� ������ ����!" << endl;
			system("pause");
		}
		else if (r.y <= 0){
			cout << "����� ������ ���� ������ ����!" << endl;
			system("pause");
		}
		else if (r.z <= 0){
			cout << "������ ������ ���� ������ ����!" << endl;
			system("pause");
		}
		else if (r.x - (int)r.x > 0){
			cout << "������ ������ ���� ����� ������!" << endl;
			system("pause");
		}
		else if (r.y - (int)r.y > 0){
			cout << "����� ������ ���� ����� ������!" << endl;
			system("pause");
		}
		else if (r.z - (int)r.z > 0){
			cout << "������ ������� ���� ����� ������!" << endl;
			system("pause");
		}
		return 0;
	}
	void Out(box &r, ofstream &ofst) 
	{
		ofst << "It is Box: x = " << r.x 
		<< ", y = " << r.y <<", z = " << r.z << endl;
	}

	  // ����� 
	double V(box &r)
	{
		return r.x * r.y * r.z;
	}
} // end simple_shapes namespace


