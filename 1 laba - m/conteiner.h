#ifndef __conteiner__
#define __conteiner__
namespace simple_shapes {
// ������ �� �������� �������������� ������. 
// ������ ��������� ����� ������ ��� �������������� 
// ���������� ���������� �� ���������
struct shape;
// ���������� ��������� �� ������ ����������� �������
  struct container
  {
    //const int max_len=100; //������������ �����
	enum {max_len = 100};
    int len; // ������� �����
    shape *cont[max_len];
  };
}
#endif