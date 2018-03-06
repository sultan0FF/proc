#ifndef __shape_atd__
#define __shape_atd__
// ����������� ����������� ����� ������
#include "box_atd.h"
#include "share_atd.h"
namespace simple_shapes {
  // ���������, ���������� ��� ��������� ������
  struct shape {
    // �������� ������ ��� ������ �� �����
    enum key {BOX, SHERE};
    key k; // ����
    // ������������ ������������
    union { // ���������� ���������
      box r;
      share t;
    };
  };
} // end simple_shapes namespace
#endif
