#ifndef __shape_atd__
#define __shape_atd__
// ����������� ����������� ����� ������
#include "box_atd.h"
#include "share_atd.h"
#include "tetra_atd.h"


namespace simple_shapes {
  // ���������, ���������� ��� ��������� ������
  struct shape {
    // �������� ������ ��� ������ �� �����
    enum key {BOX, SHERE, TETRA};
    key k; // ����
	int temp;
    // ������������ ������������
    union { // ���������� ���������
      box r;
      share t;
	  tetra f;
    };
  };
} // end simple_shapes namespace
#endif
