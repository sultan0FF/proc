#include <fstream>
#include <iostream>
#include "share_atd.h"

using namespace std;

namespace simple_shapes {

	bool Check(ifstream &ifst, share &t);
	  // ���� ��������� ���� �� ������
  void In(share &t, ifstream &ifst) 
  {
    ifst >> t.rad;
	Check(ifst, t);
  }

  bool Check(ifstream &ifst, share &t)
  {
	  if (ifst.fail()){
		  cout << "�������� ������!" << endl;
		  system("pause");
	  }
	  else if (t.rad <= 0) {
		  cout << "������ ����� ���� ������ ����!" << endl;
		  system("pause");
	  }
	  else if (t.rad - (int)t.rad > 0){
		  cout << "������ ������ ���� �����!" << endl;
		  system("pause");
	  }
	  return 0;
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

