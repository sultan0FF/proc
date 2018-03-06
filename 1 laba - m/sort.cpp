#include <fstream>
#include "shape_atd.h"
#include "conteiner.h"

using namespace std;

namespace simple_shapes {
	// Сигнатуры требуемых функций
	double V(shape &s);
	
	// Cравнение ключей двух программных объектов
	bool Compare(shape *first, shape *second) {
		return V(*first) < V(*second);
	}
}


	

