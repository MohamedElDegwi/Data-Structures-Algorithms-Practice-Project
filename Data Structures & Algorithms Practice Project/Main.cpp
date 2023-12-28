#include <iostream>
#include "clsDblLinkedList.h"



int main()
{
    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    std::cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    std::cout << "\nNumber of items in the linked list is : " << MydblLinkedList.Size()<<std::endl;

    system("pause>0");
}

