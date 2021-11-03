#include "Array.hpp"
#include <iostream>

int	main()
{
	try
	{
		Array<int> array(3);
		array[0] = 4;
		array[1] = 8;
		array[2] = 12;
		std::cout << array[1] << std::endl;
		Array<int> array2(array);
		array2[0] = 42;
		std::cout << array[0] << std::endl;
		std::cout << array2[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (-1);
	}
	std::cout << std::endl;
	try
	{
		Array<std::string> array(3);
		array[0] = "hola";
		array[1] = "que";
		array[2] = "tal";
		std::cout << array[1] << std::endl;
		Array<std::string> array2(array);
		array2[0] = "adios";
		std::cout << array[0] << std::endl;
		std::cout << array2[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (-1);
	}

	return (0);
}

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

// 	std::cout << numbers[5] << std::endl;
// 	std::cout << mirror[5] << std::endl;

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }

// 	std::cout << numbers[5] << std::endl;
// 	std::cout << mirror[5] << std::endl;

//     delete [] mirror;//
//     return 0;
// }
