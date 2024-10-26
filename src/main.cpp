#include <iostream>
#include "treelist/treelist.cpp"
#include "treelist/treenode.cpp"

int main(int, char**){
    std::cout << "Testing Insert" << std::endl;
    TreeList<int>  * list = new TreeList<int>(1);
    list->insert(5);
    list->insert(3);
    list->insert(7);
    list->insert(2);
    list->insert(4);
    list->insert(6);
    list->insert(8);
    list->print();

    std::cout << "Testing Remove" << std::endl;

    list->remove(5);
    list->print();

    std::cout << "Testing Contains" << std::endl;
    list->contains(5) ? std::cout << "5 is in the list" << std::endl : std::cout << "5 is not in the list" << std::endl;
    list->contains(3) ? std::cout << "3 is in the list" << std::endl : std::cout << "3 is not in the list" << std::endl;

    delete list;
    return 0;
}
