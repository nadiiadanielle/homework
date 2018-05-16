// Nadiia Hutcherson  nh0266 nh0266@my.unt.edu

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  //Total Population
  int total_population;
cout << "Please enter a positive, whole number for the total population
          you wish to simulate:" << '\n';<< ;
cin >> total_population;
if (total_population < 0){
 cout << "The population must be a positive whole number." << '\n';
}
//Error message to notifiy population not positive whole number.

// Infected people

int infectious_individiuals;
  cout << "Please enter a positive, whole number that is less than the total
            population for the number of infectious individuals:" << '\n';
  cin >> infectious_individiuals;
if (infectious_individiuals< 0 || > total_population){
  cout << "The number of infectious individuals must be a positive number that
    is less than the total number of people in the simulation. " << '\n';
}
// Error Message if infected is greater than population or not positive number.

float B;
// Contact Rate
std::cout << "Please enter a small positive number for B.
It must be greater than 0 but less than 1:" << '\n';
std::cin >> B;
if (B < 0 || > 1){
  cout << "The value of B must be greater than zero and less than 1. " << '\n';
}

float Y;
//Recovery Rate
std::cout << "Please enter a small positive number for Y.
It must be greater than 0 but less than 1:" << '\n';
if (Y < 0 || > 1){
  cout << "The value of Y
   must be greater than zero and less than 1. " << '\n';
}

// All Variables are declared now.

//Function Definition



  return 0;
}
