#include <iostream>

using namespace std;

int sum(int num)
{
  int total = 0;
  for(int i = 1; i <= num; i++)
    total = total + i;
  return total;
}

int product(int num)
{
  int total = 1;
  for(int i = 1; i <= num; i++)
    total = total * i;
  return total;
}

int main()
{
  int userEntry = 0;
  cout << "Please enter a number: ";
  cin >> userEntry;
  cout << "The sum of integers up to that is: " << sum(userEntry) << endl;
  cout << "The product of integers up to that is: " << product(userEntry) << endl;
  
  return 0;
}
