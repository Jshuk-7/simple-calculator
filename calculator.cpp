#include <iostream>

using namespace std;

void calculateNumbers()
{
  cout << "What math operation would you like to perform? (Add, Subtract, Multiply, Divide)" << endl;
  string response;
  cin >> response;
  int num1;
  int num2;
  cout << "What is the first number? ";
  cin >> num1;
  cout << "What is the second number? ";
  cin >> num2;
  int result;
  if (response == "Add")
  {
    result = num1 + num2;
    cout << "Result is: " << result << endl;
  } else if (response == "Subtract")
  {
    result = num1 - num2;
    cout << "Result is: " << result << endl;
  } else if (response == "Multiply")
  {
    result = num1 * num2;
    cout << "Result is: " << result << endl;
  } else
  {
    result = num1 / num2;
    cout << "Result is: " << result << endl;
  }
}

int main()
{
  calculateNumbers();
  return 0;
}