#include "conteiner.h"
#include "shape_atd.h"
#include <fstream>

using namespace std;

namespace simple_shapes {
  // ������������� ����������
  void Init(container &c) { c.len = 0; }
  // ������� ���������� �� ��������� 
  // (������������ ������)

  void Clear(container &c) {
    for(int i = 0; i < c.len; i++){
      delete c.cont[i];
    }
    c.len = 0;
  }
  // ��������� ��������� ������� �������
  shape *In(ifstream &ifdt);

  // ���� ����������� ���������� �� ���������� ������
  void In(container &c, ifstream &ifst) {
    while(!ifst.eof()) 
	{
	  if (c.len > 99)
	  {
		  break;
	  }
	  else
	  {
		  if((c.cont[c.len] = In(ifst)) != 0)
	  		  c.len++; 
	  }
    }

  }
  // ��������� ��������� ������� �������

  void Out(shape &s, ofstream &ofst);
  // ����� ����������� ���������� � ��������� �����
  void Out(container &c, ofstream &ofst) 
  {
	ofst << "Container contains " << c.len 
	<< " elements." << endl;
    for(int i = 0; i < c.len; i++) 
	{
      ofst << i << ": ";
      Out(*(c.cont[i]), ofst);
    }
  }
} // end simple_shapes namespace




