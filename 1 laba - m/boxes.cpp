#include <fstream>
#include "box_atd.h"

using namespace std;

namespace simple_shapes 
{
<<<<<<< HEAD
  // Ввод параметров прямоугольника из файла
=======
  // Ввод параметров параллелепипеда из файла
>>>>>>> 2-4
  void In(box &r, ifstream &ifst)
  {
    ifst >> r.x >> r.y >> r.z;
  }
<<<<<<< HEAD
  // Вывод параметров прямоугольника 
=======
  // Вывод параллелепипеда 
>>>>>>> 2-4
  void Out(box &r, ofstream &ofst) 
  {
    ofst << "It is Box: x = " << r.x 
	<< ", y = " << r.y <<", z = " << r.z << endl;
  }
<<<<<<< HEAD
=======
  // Обьем 
  double V(box &r)
  {
	  return r.x * r.y * r.z;
  }
>>>>>>> 2-4
} // end simple_shapes namespace


