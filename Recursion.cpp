//Noah Miller


#include <iostream>
#include <cmath>

void RecursionFunction(double number, int times, int counter)
{
    // compares counter to how many times where entered
    if (counter < times) {
        
        //prints number to current power (times)
        std::cout << "\n"<< pow(number, counter);
        //call  RecursionFunction in itself there for doing Recursion
        RecursionFunction(number, times, counter + 1);
    
    }

    // once it has finish will print completed
    if (counter == times) {
        std::cout << "\nCompleted";
    }
  
   
}
int main()
{
    // declare variables 
    double number = 0; 
    int times = 0;
    int counter = 0;

    // gets what number user wants 
    std::cout << "enter number to times by its self\n";
    std::cin >> number;

    // gets how many times this will decide what power the number will go up to 
    std::cout << "how many times?\n";
    std::cin >> times;

    //this just makes sure it skips calculating power of 1 
    counter = counter + 1;
    times = times + 1;

    //call function 
    RecursionFunction(number,times,counter);
}


