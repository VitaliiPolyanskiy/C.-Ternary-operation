#include <iostream>
using namespace std;

int main()
{
	// � ��������� ������� ������ ��������� if-else ����� ������������ ��������� �������� "? :".
	// ��������� ���������� ���������:
	//      ��������� ? �����������_���������_1 : �����������_���������_2;
	// ��������� - ���������� ���������, ����������� �������� ����� ������ ��� ����.
	// ������� ������: ���� ���������� ��������� - ������, �� ����������� �������� ��������� ��������
	// ����� �������� ������������ ��������� 1, � ��������� ������ - �������� ������������ ��������� 2.

	// ���������� �������� ��������� � ���������� �����.
	int number;
	cout << "Enter a number: ";
	cin >> number;
	number % 2 == 0 ? cout << "Number is even!" : cout << "Number is odd!";

	// ���������� ���������� �� ���� �����.
	int number1, number2;
	cout << "\nEnter two numbers: (numbers are not equal!)";
	cin >> number1 >> number2;
	int result = number1 < number2 ? number1 : number2;
	cout << "Minimum: " << result;

	// ���������� ����(� + � ��� � - �) ��������� �����.
	int value;
	cout << "\nEnter number: ";
	cin >> value;
	value > 0 ? cout << "Your number is positive" :
		value < 0 ? cout << "Your number is negative" :
		cout << "Your number is zero";

	// �������1	? ���������1 : �������2 ? ���������2 : ���������3


	return 0;
}