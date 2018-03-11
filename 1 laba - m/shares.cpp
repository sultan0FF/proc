#include <fstream>
#include <iostream>
#include "share_atd.h"

using namespace std;

namespace simple_shapes {

	bool Check(ifstream &ifst, share &t);
	  // Ввод параметра шара из потока
  void In(share &t, ifstream &ifst) 
  {
    ifst >> t.rad;
	Check(ifst, t);
  }

  bool Check(ifstream &ifst, share &t)
  {
	  if (ifst.fail()){
		  cout << "Неверный формат!" << endl;
		  system("pause");
	  }
	  else if (t.rad <= 0) {
		  cout << "Радиус должн быть больше нуля!" << endl;
		  system("pause");
	  }
	  else if (t.rad - (int)t.rad > 0){
		  cout << "Радиус должен быть целым!" << endl;
		  system("pause");
	  }
	  return 0;
  }
  // Обьем 
  double V(share &t)
  {
	  return ((t.rad * t.rad * t.rad * 3.14 * 4) / 3);
  }
  // Вывод шара из потока
  void Out(share &t, ofstream &ofst)
  {
    ofst << "It is Sphere: r = " 
      << t.rad << endl;
  }
} // end simple_shapes namespace

