#include <iostream>

// 2. 피보나치(Fibonacci) 수열을 구현해 봅시다.
// a. 피보나치 수열 출력
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

	std::cout << "피보나치 수열 입력 : ";
	std::cin >> input;

	std::cout << Fibonacci(input) << std::endl;
}

// b. 입력한 숫자를 넘지 않는 피보나치 수열을 출력
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

	std::cout << "피보나치 수열 입력 : ";
	std::cin >> input;


	for (int number = 1; number <= input; number++)
	{
		if (input >= Fibonacci(number))
		{
			std::cout << Fibonacci(number) << " ";
		}
	}
}