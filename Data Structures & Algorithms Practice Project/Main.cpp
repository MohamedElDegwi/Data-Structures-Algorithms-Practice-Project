#include <iostream>
#include "clsDynamicArray.h"



int main()
{
    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty?  " << MyDynamicArray.IsEmpty();
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    cout << "\nArray Items: \n";

    MyDynamicArray.PrintList();


    std::cout << "\nItem 2 is : " << MyDynamicArray.GetItem(2)<<"\n";

    MyDynamicArray.Reverse();

    MyDynamicArray.PrintList();

    MyDynamicArray.Clear();

    MyDynamicArray.PrintList();

    system("pause>0");
}

