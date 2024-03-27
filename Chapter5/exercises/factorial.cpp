// Import libraries
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

// Main function
int main() {

    // Declare variables
    int n = 10;
    int n = 20;
    long factorial = 1;

    // Start counter
    high_resolution_clock::time_point start = high_resolution_clock::now();

    // Compute factorial
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    // Stop counter
    high_resolution_clock::time_point stop = high_resolution_clock::now();

    // Execution time
    microseconds duration = duration_cast<microseconds>(stop - start);
    cout << "Factorial result: " << factorial << endl;
    cout << "Execution time: " << duration.count() / 1000000.0 << " seconds" << endl;

    return 0;

}