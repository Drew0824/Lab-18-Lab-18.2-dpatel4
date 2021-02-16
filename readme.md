## Range limiting of random numbers
If you wish to limit the range of the random number, use the following formula:
```
y = (rand() % ( maxValue − minValue + 1)) + minValue ;
```
In the formula, `minValue` is the lowest number in the range, and `maxValue` is the highest number in the range. For example, the following code assigns a random number in the range of 1 through 100 to the variable `y`:
```
const int MIN_VALUE = 1;
const int MAX_VALUE = 100;
y = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
```
As another example, the following code assigns a random number in the range of 100 through 200 to the variable `y`:
```
const int MIN_VALUE = 100;
const int MAX_VALUE = 200;
y = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
```
## Exercise
Examine and execute the program `main.cpp` demonstrating how to use random numbers to simulate rolling dice.

Now modify the program so that it rolls a 20-sided die by increasing the maximum value for each roll from 6 to 20.

Additionally, modify the code to use a for loop to roll both dice 10 times.
