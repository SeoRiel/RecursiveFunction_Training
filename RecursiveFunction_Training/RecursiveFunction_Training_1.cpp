#include <iostream>

// 1. ���丮��(Factorial)�� ������ ���ô�.
// a. For ��
int main()
{
	int factorial{ 1 };
	int get{ 0 };

	std::cout << "���丮�� �Է� : ";
	std::cin >> get;

	for (int next = get; next > 0; next--)
	{
		factorial *= next;
	}

	std::cout << "���丮�� ��� : " << factorial << std::endl;
}

// b. ���ȣ��
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
	std::cout << "���丮�� �Է� : ";
	std::cin >> input;

	std::cout << Factorial(input) << std::endl;
}
