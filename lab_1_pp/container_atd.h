#pragma once
#ifndef __container_atd__
#define __container_atd__
namespace simple_shapes {
	// ������ �� �������� �������������� ������.
	// ������ ��������� ����� ������ ��� ��������������
	// ���������� ���������� �� ���������
	struct shape;
	// ���������� ��������� �� ������ ����������� �������
	struct container
	{
		enum { max_len = 100 }; // ������������ �����
		int len; // ������� �����
		shape *cont[max_len];
	};
} // end simple_shapes namespace
#endif
