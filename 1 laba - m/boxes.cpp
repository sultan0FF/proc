#include <fstream>
#include "box_atd.h"

using namespace std;

namespace simple_shapes 
{
<<<<<<< HEAD
  // ���� ���������� �������������� �� �����
=======
  // ���� ���������� ��������������� �� �����
>>>>>>> 2-4
  void In(box &r, ifstream &ifst)
  {
    ifst >> r.x >> r.y >> r.z;
  }
<<<<<<< HEAD
  // ����� ���������� �������������� 
=======
  // ����� ��������������� 
>>>>>>> 2-4
  void Out(box &r, ofstream &ofst) 
  {
    ofst << "It is Box: x = " << r.x 
	<< ", y = " << r.y <<", z = " << r.z << endl;
  }
<<<<<<< HEAD
=======
  // ����� 
  double V(box &r)
  {
	  return r.x * r.y * r.z;
  }
>>>>>>> 2-4
} // end simple_shapes namespace


