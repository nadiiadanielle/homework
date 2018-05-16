// Name: Homework3.cpp
// Author: Nadiia Hutcherson
// CSCE 1030

#include <iostream>
using namespace std;

//  Below are the functions that will be used and their definitions.

bool validateInput (int num);
int product (int num);
void RightTriangle (int num);

int main()
{
  // This will declare my variables.

  int i,j,n;

  // This asks the user for their input between 2 and 12.
  std::cout << "Please enter an even integer between 2 and 12." << '\n';
  std::cin >> n;
  bool b= validateInput(n); //Recalling the function above to ensure input is valid.
  if (b==true)
  {
    int prod=product(n); // Calculate the product
    cout <<"The product of integers from 1 to "<<n<<" is "<<prod; // Display the product.

RightTriangle(n);
// function print RightTriangle
// parameter: integer representing a value
// return: none
// description: will show the triangle.

void displayRightTriangle (int num);

  for(int i=0;i<num;i++)
  {
    if(i<9)
    {
      for(int j=num; j>i;j--)
      {
        cout<<"";
      }
      for (int n=i;n>=0;n--)
      {
        cout<<""<<i+1;
      }
      cout<<endl;
    }
    else
    {
      for (int j=num;j>i;j--)
      {
        cout<<"";
      }
      for (int n=num;n>;n--)
      {
        cout<<i+1;
      }
      cout<<endl;
    }
  }
}

{
  std::cout << "Wrong input. The integer should be even and between 1 and 12." << '\n';
  main(); //recalling the main function that allowed user input.
}
return 0;
}

// function: validateInput
// parameter: int representing user input value
//return: boolean value
//descrip: Will check whether # is valid or not.

bool validateInput(int num)
{
  if(num>=2 && num<=12)
  {
    if(num%2==0)
    return true;
    else
    return false;
  }
  else
  {
  return false;
  }
}

// function: product
// parameters: integer representing value
// return: integer representing a product of numbers entered
// description: this will give the product of the integer inserted
int product(int num)

{
  int prod=1;
  for(int i=1;i=num;i++)
  {
    prod*=i;
  }
  return prod;
}

//
