#include "pch.h"
#include "stdafx.h"
#include <fstream>
#include "container_atd.h"
using namespace std;
namespace simple_shapes {
	// ��������� ��������� ������� �������
	shape *In(ifstream &ifdt);
	// ���� ����������� ���������� �� ���������� ������
	void In(container &c, ifstream &ifst) {
		while (!ifst.eof()) {
			if ((c.cont[c.len] = In(ifst)) != 0) { c.len++; }
		}
	}
} // end simple_shapes namespace