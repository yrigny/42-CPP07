#include <iostream>
#include "Array.hpp"
#define CLR "\e[33m"
#define NONE "\e[0m"

#define MAX_VAL 100
int main(int, char**)
{
    std::cout << CLR "Test: empty array" NONE << std::endl;
	Array<int> empty_int = Array<int>();
	std::cout << "Array size is: " << empty_int.size() << std::endl;
    std::cout << "Try to access an element" << std::endl;
    try
    {
        empty_int[0] = 42;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << CLR "Test: int array of size 10" NONE << std::endl;
    Array<int> int_array(10);
    std::cout << "Array size is: " << int_array.size() << std::endl;
    std::cout << "Printing the array" << std::endl;
    for (unsigned int i = 0; i < int_array.size(); i++)
        std::cout << int_array[i] << " ";
    std::cout << std::endl;
    
    std::cout << "Modifying the array" << std::endl;
    for (unsigned int i = 0; i < int_array.size(); i++)
        int_array[i] = i;
    std::cout << "Printing the array" << std::endl;
    for (unsigned int i = 0; i < int_array.size(); i++)
        std::cout << int_array[i] << " ";
    std::cout << std::endl;

    std::cout << "Trying to access an element out of limits" << std::endl;
    try
    {
        int_array[10] = 42;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << CLR "Test: copy constructor" NONE << std::endl;
    Array<int> copy_int_array = int_array;
    std::cout << "Printing the copy" << std::endl;
    for (unsigned int i = 0; i < copy_int_array.size(); i++)
        std::cout << copy_int_array[i] << " ";
    std::cout << std::endl;

    std::cout << "Modifying the copy" << std::endl;
    for (unsigned int i = 0; i < copy_int_array.size(); i++)
        copy_int_array[i] = copy_int_array.size() - i;
    std::cout << "Printing the copy" << std::endl;
    for (unsigned int i = 0; i < copy_int_array.size(); i++)
        std::cout << copy_int_array[i] << " ";
    std::cout << std::endl;

    std::cout << "Printing the original" << std::endl;
    for (unsigned int i = 0; i < int_array.size(); i++)
        std::cout << int_array[i] << " ";
    std::cout << std::endl;

    std::cout << "Modifying the original" << std::endl;
    for (unsigned int i = 0; i < int_array.size(); i++)
        int_array[i] += 42;
    std::cout << "Printing the original" << std::endl;
    for (unsigned int i = 0; i < int_array.size(); i++)
        std::cout << int_array[i] << " ";
    std::cout << std::endl;
    std::cout << "Printing the copy" << std::endl;
    for (unsigned int i = 0; i < copy_int_array.size(); i++)
        std::cout << copy_int_array[i] << " ";
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << CLR "Test: assignment operator" NONE << std::endl;
    Array<std::string> string_array = Array<std::string>(5);
    string_array[0] = "Hello";
    string_array[1] = "World";
    string_array[2] = "!";
    string_array[3] = "How";
    string_array[4] = "are you?";
    std::cout << "Printing the string array" << std::endl;
    for (unsigned int i = 0; i < string_array.size(); i++)
        std::cout << string_array[i] << " ";
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << CLR "Test: big array" NONE << std::endl;
    std::cout << "Creating int array of size 100" << std::endl;
    Array<int> numbers(MAX_VAL);
    std::cout << "Creating a mirror array" << std::endl;
    int* mirror = new int[MAX_VAL];
    std::cout << "Filling the arrays with the same random values" << std::endl;
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    std::cout << "Comparing the arrays" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
        std::cout << numbers[i] << " - " << mirror[i] << " = " << numbers[i] - mirror[i] << std::endl;
    }
    std::cout << "Trying to access an element out of limits (index too small)" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "Trying to access an element out of limits (index too big)" << std::endl;
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete [] mirror;
    return 0;
}