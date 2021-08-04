#include <iostream>

// 2. �Ǻ���ġ(Fibonacci) ������ ������ ���ô�.
// a. �Ǻ���ġ ���� ���
int Fibonacci(int get)
{
	// Base Case -> F1 = F2 = 1;
	if (get == 1 || get == 2)
	{
		return 1;
	}
	// Recursive Case -> Fn = Fn-1 + fn-2
	return Fibonacci(get - 1) + Fibonacci(get - 2);
}

int main()
{
	int input{};

	std::cout << "�Ǻ���ġ ���� �Է� : ";
	std::cin >> input;

	std::cout << Fibonacci(input) << std::endl;
}

// b. �Է��� ���ڸ� ���� �ʴ� �Ǻ���ġ ������ ���
int Fibonacci(int get)
{
	// Base Case -> F1 = F2 = 1;
	if (get == 1 || get == 2)
	{
		return 1;
	}
	// Recursive Case -> Fn = Fn-1 + fn-2
	return Fibonacci(get - 1) + Fibonacci(get - 2);
}

int main()
{
	int input{};

	std::cout << "�Ǻ���ġ ���� �Է� : ";
	std::cin >> input;


	for (int number = 1; number <= input; number++)
	{
		if (input >= Fibonacci(number))
		{
			std::cout << Fibonacci(number) << " ";
		}
	}
}