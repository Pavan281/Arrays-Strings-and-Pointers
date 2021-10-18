# Arrays-Strings-and-Pointers
# Write a C++ program to access the elements of an Array using pointers.
# Your output should look something like this : Enter elements: 1 2 3 5 4 You entered: 1 2 3 5 4

#include <iostream>
using namespace std;

int main()
{
   int data[5];
   cout << "\n Enter the elements : ";

   for(int i = 0; i < 5; ++i)
      cin >> data[i];

   cout << "\n Elements that You entered are : ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(data + i);

   return 0;
}
