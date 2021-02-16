#include <iostream>
#include <cstdlib>     // For rand and srand
#include <ctime>       // For the time function
using namespace std;

int y;
int main() {
   // Constants
   const int MIN_VALUE = 100;   // Minimum die value
   const int MAX_VALUE = 200;   // Maximum die value
   y = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
   cout << y << endl;
   
   
   // Variables
   int die1;   // To hold the value of die #1
   int die2;   // To hold the value of die #2



   // Get the system time.
   unsigned seed = time(0);
   // Seed the random number generator.
   srand(seed);

}