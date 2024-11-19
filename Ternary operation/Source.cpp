#include <iostream>
using namespace std;

int main()
{
	// В некоторых случаях вместо оператора if-else можно использовать тернарный оператор "? :".
	// Синтаксис тернарного оператора:
	//      выражение ? операторное_выражение_1 : операторное_выражение_2;
	// выражение - логическое выражение, результатом которого будет ИСТИНА или ЛОЖЬ.
	// Принцип работы: если логическое выражение - ИСТИНА, то результатом условной тернарной операции
	// будет значение операторного выражения 1, в противном случае - значение операторного выражения 2.

	// Определить четность вводимого с клавиатуры числа.
	int number;
	cout << "Enter a number: ";
	cin >> number;
	number % 2 == 0 ? cout << "Number is even!" : cout << "Number is odd!";

	// Определить наименьшее из двух чисел.
	int number1, number2;
	cout << "\nEnter two numbers: (numbers are not equal!)";
	cin >> number1 >> number2;
	int result = number1 < number2 ? number1 : number2;
	cout << "Minimum: " << result;

	// Определить знак(« + » или « - ») введённого числа.
	int value;
	cout << "\nEnter number: ";
	cin >> value;
	value > 0 ? cout << "Your number is positive" :
		value < 0 ? cout << "Your number is negative" :
		cout << "Your number is zero";

	// условие1	? выражение1 : условие2 ? выражение2 : выражение3


	return 0;
}