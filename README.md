# Arrays-Strings-and-Pointers
# C++ to Access Array Elements Using Pointer

#include <iostream>
using namespace std;

int main()
{
   int data[5];
   cout << "\n Enter the elements : ";

   for(int i = 0; i < 5; ++i)
      cin >> data[i];

   cout << "\n Elements You entered are : ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(data + i);

   return 0;
}
