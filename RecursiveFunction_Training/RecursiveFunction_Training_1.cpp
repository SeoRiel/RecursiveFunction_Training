#include <iostream>

// 1. 팩토리얼(Factorial)을 구현해 봅시다.
// a. For 문
int main()
{
	int factorial{ 1 };
	int get{ 0 };

	std::cout << "팩토리얼 입력 : ";
	std::cin >> get;

	for (int next = get; next > 0; next--)
	{
		factorial *= next;
	}

	std::cout << "팩토리얼 출력 : " << factorial << std::endl;
}

// b. 재귀호출
int Factorial(int get)
{
	if (get == 0)
	{
		get = 1;
		return get;
	}

	return get * Factorial(get - 1);
}

int main()
{
	int input{ 0 };
	std::cout << "팩토리얼 입력 : ";
	std::cin >> input;

	std::cout << Factorial(input) << std::endl;
}
