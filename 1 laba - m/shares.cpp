#include <fstream>
#include "share_atd.h"

using namespace std;

namespace simple_shapes {
  // ���� ��������� ���� �� ������
  void In(share &t, ifstream &ifst) 
  {
    ifst >> t.rad;
  }
  // ����� 
  double V(share &t)
  {
	  return ((t.rad * t.rad * t.rad * 3.14 * 4) / 3);
  }
  // ����� ���� �� ������
  void Out(share &t, ofstream &ofst)
  {
    ofst << "It is Sphere: r = " 
      << t.rad << endl;
  }
} // end simple_shapes namespace

