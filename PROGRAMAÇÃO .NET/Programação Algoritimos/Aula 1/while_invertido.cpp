#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));
    // Random numbers between 1 and 100
    int random;
    do {
        random = rand() % 100 + 1; // Generate random 1 and 100
        cout << random << endl;
    } while (random > 0);
    cout << endl;
    return 0;

}
