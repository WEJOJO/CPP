#include "iter.hpp"


template<typename T>
void print(const T& a)
{
	std::cout << a << std::endl;
}

int main()
{
	std::cout << "=======int case-ref========" << std::endl;
	int arr[8];
	for (int i = 0; i < 8; i++)
		arr[i] = i;
	iter(arr, 8, print); //(sizeof(arr) / sizeof(*arr))
	std::cout << "^^^^^^^int case-ref^^^^^^^" << std::endl;



	std::cout << "=======char case========" << std::endl;
	char arr2[8];
	for (int i = 0; i < 8; i++)
		arr2[i] = 'a';
	iter(arr2, (sizeof(arr2) / sizeof(*arr2)), print);
	std::cout << "^^^^^^^char case^^^^^^^" << std::endl;


	std::cout << "=======float case========" << std::endl;
	float arr3[8];
	for (int i = 0; i < 8; i++)
		arr3[i] = i+2.1f;
	iter(arr3, (sizeof(arr3) / sizeof(*arr3)), print);
	std::cout << "^^^^^^^float case^^^^^^^" << std::endl;
}