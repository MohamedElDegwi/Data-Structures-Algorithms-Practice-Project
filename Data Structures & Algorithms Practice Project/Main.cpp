#include <iostream>
#include "clsMyString.h"

int main()
{
    std::cout << "\n\n\t\t\t\t\t\tUndo/Redo Project\n\n";

    clsMyString S1;

    std::cout << "\n S1 = " << S1.GetStrValue() << "\n";

    S1.SetStrValue("Mohamed");

    std::cout << "\n S1 = " << S1.GetStrValue();

    S1.SetStrValue("Mohamed2");

    std::cout << "\n S1 = " << S1.GetStrValue();

    S1.SetStrValue("Mohamed3");

    std::cout << "\n S1 = " << S1.GetStrValue();

    std::cout << "\n\nUndo:";
    std::cout << "\n--------\n";

    S1.Undo();

    std::cout << "S1 after undo : " << S1.GetStrValue() << "\n";

    S1.Undo();

    std::cout << "S1 after undo : " << S1.GetStrValue() << "\n";

    S1.Undo();

    std::cout << "S1 after undo : " << S1.GetStrValue() << "\n";

    std::cout << "\n\nRedo:";
    std::cout << "\n--------\n";

    S1.Redo();

    std::cout << "S1 after Redo : " << S1.GetStrValue() << "\n";

    S1.Redo();

    std::cout << "S1 after Redo : " << S1.GetStrValue() << "\n";

    S1.Redo();

    std::cout << "S1 after Redo : " << S1.GetStrValue() << "\n";

    system("pause>0");
}