#include <iostream>
#include "employeestruct.h"
using namespace std;

int main(void) {
	struct Employee {
		char firstInitial;
		char lastInitial;
		int employeeNumber;
		int salary;
	};
	//����ü ���� / ����忡�� ����ο� ���� ������ ����ü ������� ǥ��
	Employee anEmployee;
	anEmployee.firstInitial = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;

	Employee anotEmployee;
	anotEmployee.firstInitial = 'E';
	anotEmployee.lastInitial = 'H';
	anotEmployee.employeeNumber = 97;
	anotEmployee.salary = 100000;

	//����ü ��� Ȯ��
	cout << "Employee : " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
	cout << "Number : " << anEmployee.employeeNumber << endl;
	cout << "Salary : " << anEmployee.salary << endl;

	cout << "Employee : " << anotEmployee.firstInitial << anotEmployee.lastInitial << endl;
	cout << "Number : " << anotEmployee.employeeNumber << endl;
	cout << "Salary : " << anotEmployee.salary << endl;

	//����ü ���� �� ��ȭ üũ
	anEmployee.employeeNumber += 42;
	cout << "Number : " << anEmployee.employeeNumber << endl;//����ü �ȿ� �ִ� ���� ���� ��ȭ����




}
