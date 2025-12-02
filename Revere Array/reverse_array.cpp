#include <iostream>

using namespace std;
void reverseArray(int array[], int sizeOfArray);
int main()
{
    system("cls");
    int size;
    cout << "Enter size of array:";
    cin >> size;
    int array[size];
    for (int i = 0; i <= size - 1; i++)
    {
        cout << "Enter number" << i + 1 << ":";
        cin >> array[i];
    }

    cout << "\nYour entered numbers are:\n";
    for (int i = 0; i <= size - 1; i++)
    {
        cout << array[i] << ((i < (size - 1)) ? "," : "");
    }

    //  --- reversed array
    reverseArray(array, size);
    cout << "\n\nHere is reversed array:" << endl;
    for (int i = 0; i <= size - 1; i++)
    {
        cout << array[i] << ((i < (size - 1)) ? "," : "");
    }
     cout << endl <<endl;
    return 0;
}

// method 01 using a temp variable
void reverseArray(int array[], int sizeOfArray)
{
    int startValue = 0, endValue = sizeOfArray - 1;
    while (startValue < endValue)
    {
        int tempVariable = array[startValue];
        array[startValue] = array[endValue];
        array[endValue] = tempVariable;

        startValue++;
        endValue--;
    }
}

// method 02 using swap function
// void reverseArray(int array[], int sizeOfArray)
// {
//     int start = 0, end = sizeOfArray - 1;
//     while (start < end)
//     {
//         swap(array[start], array[end]);
//         start++;
//         end--;
//     }
//     cout << "\nHere is reversed array: " << endl;
//     for (int i = 0; i <= sizeOfArray - 1; i++)
//     {
//         cout << array[i] << ",";
//     }
// }

// method 03 by creating new array and then replacing their elements
//   void reverseArray(int array[], int sizeOfArray)
//  {
//      int array2[sizeOfArray];
//      int n = sizeOfArray - 1;
//      for (int i = 0; i <= sizeOfArray - 1; i++)
//      {
//          array2[i] = array[n];
//          n--;
//      }
//       for (int i = 0; i <= sizeOfArray - 1; i++)
//      {
//          array[i] = array2[i];
//      }
//      cout << "\nHere is reversed array: " << endl;
//      for (int i = 0; i <= sizeOfArray - 1; i++)
//      {
//          cout << array[i] << ",";
//      }
//  }
