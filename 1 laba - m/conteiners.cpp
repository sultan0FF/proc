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
  double V(shape &s);
  bool Compare(shape *first, shape *second);
  //-----------------------------------------------------
  // ���������� ����������� ����������
  void Sort(container &c)
  {
	  for (int i = 0; i < c.len - 1; i++)
	  {
		  for (int j = i + 1; j < c.len; j++)
		  {
			  if (Compare(c.cont[i], c.cont[j]))
			  {
				  shape *tmp = c.cont[i];
				  c.cont[i] = c.cont[j];
				  c.cont[j] = tmp;
			  }
		  }
	  }
  }
  //-----------------------------------------------------
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
	  ofst << "V = "
		  << V(*(c.cont[i])) << endl;

    }
  }
} // end simple_shapes namespace




