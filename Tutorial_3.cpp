// Chapter 3. Pointers and functions.

// Pre-processes directives. 
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

// Function declaration.
double AddNumbers(double num1, double num2);
void AssignAge(int *pAge);
void DoubleArray(int *array, int size);

std::vector<int> Range(int start, int max, int step);

int main()
{
    // 1. Functions.
    double num1, num2;
    std::cout << "Enter num1: ";
    std::cin >> num1;
    std::cout << "Enter num2: ";
    std::cin >> num2;
    printf("%.1f + %.1f = %.1f\n", num1, num2, AddNumbers(num1,num2));

    // 2.Pointers. store an adress in memory
    int age = 43;
    int *pAge = NULL; 
    // Reference operator &. Return the address for the variable in front.
    pAge = &age;
    std::cout << "Address: " << pAge << "\n";
    std::cout << "Value at the address: " << *pAge << "\n";

    // Create a pointer to an array.
    int intArray[] = {1,2,3,4};
    // For arrays we can skip the & reference before.
    int *pIntArray = intArray;
    
    std::cout << "1st " << *pIntArray << "Address " << pIntArray << "\n";
    pIntArray++;
    std::cout << "2st " << *pIntArray << "Address " << pIntArray << "\n";
    pIntArray--;

    AssignAge(&age);
    std::cout << "Pointer Age " << age << "\n";

    // 3.
    DoubleArray(intArray, 4);
    for(int i=0; i<4; i++)
    {
        std::cout << "Array " << intArray   [i] << "\n";
    }

    // Problem.Create function receive starting value, max and increment.
    // Vector as a return.
    std::vector<int> range = Range(1, 10, 2);
    for(auto y: range) std::cout << y << "\n";

    // Problem. How much to invest 1000
    //  interest rate 8
    // value after 10 years.
    // use the range function.

    return 0;
}

// Function definition.
double AddNumbers(double num1, double num2)
{
    return num1 + num2;
}

void AssignAge(int *pAge)
{
    *pAge = 22;
}

void DoubleArray(int *array, int size)
{
    for(int i=0; i<size; i++)
    {
        array[i] = array[i] * 2;    
    }
}

std::vector<int> Range(int start, int max, int step)
{
    int i = start;
    std::vector<int> range;
    while(i <= max)
    {
        range.push_back(i);
        i += step;
    }
    return range;
}


// End functions.