#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>
using namespace std;

int main() {
    int size = 1;
    while (size <= 9000000) {
        auto start = chrono::high_resolution_clock::now();
        double* ptr = static_cast<double*>(malloc(size)); // Cast the pointer to the correct type.
        auto end = chrono::high_resolution_clock::now();
        double duration = chrono::duration_cast<chrono::milliseconds>(end - start).count(); // Specify the duration unit and add .count() to get the duration value.
        if (ptr == nullptr) {
            cout << "Error " << size << endl;
        } else {
            cout << size << " " << duration << " ms" << endl; // Print the duration unit.
            free(ptr);
        }
        size += 100000;
    }
    return 0;
}
