#include <fstream>
#include "shape_atd.h"
#include "conteiner.h"

using namespace std;

namespace simple_shapes {
	// ��������� ��������� �������
	double V(shape &s);
	
	// C�������� ������ ���� ����������� ��������
	bool Compare(shape *first, shape *second) {
		return V(*first) < V(*second);
	}
}


	

