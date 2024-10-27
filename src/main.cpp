#include <iostream>
#include "treelist.h"

int main(int, char**){
    std::cout << "Testing Insert" << std::endl;
    TreeList<int>  * list = new TreeList<int>();
    list->insert(5);
    list->insert(3);
    list->insert(1);
    list->insert(7);
    list->insert(2);
    list->insert(4);
    list->insert(6);
    list->insert(8);
    std::cout << "Actual:";
    list->print();
    std::cout << std::endl;
    std::cout << "expected: 1 2 3 4 5 6 7 8" << std::endl;

    std::cout << "Testing Insert: Duplicate" << std::endl;
    list->insert(5);
    std::cout << "Actual:";
    list->print();
    std::cout << std::endl;
    std::cout << "expected: 1 2 3 4 5 6 7 8" << std::endl;

    std::cout << "Testing Remove: Number in tree" << std::endl;
    int val = list->remove(5);
    std::cout << "Returned:" << std::endl << "Actual: " << val << std::endl << "Expected: 0" << std::endl;
    std::cout << "Actual:";
    list->print();
    std::cout << std::endl;
    std::cout << "expected: 1 2 3 4 6 7 8" << std::endl;

    std::cout << "Testing Remove: Number not in tree" << std::endl;
    val = list->remove(9);
    std::cout << "Returned:" << std::endl << "Actual: " << val << std::endl << "Expected: 5" << std::endl;
    std::cout << "Actual:";
    list->print();
    std::cout << std::endl;
    std::cout << "expected: 1 2 3 4 6 7 8" << std::endl;

    std::cout << "Testing Contains" << std::endl;
    list->contains(5) ? std::cout << "5 is in the list" << std::endl : std::cout << "5 is not in the list" << std::endl;
    list->contains(3) ? std::cout << "3 is in the list" << std::endl : std::cout << "3 is not in the list" << std::endl;

    delete list;
    return 0;
}
