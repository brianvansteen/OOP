#include <iostream>
#include <set>

void printSet(const std::set<int>& mySet);

void printMultiSet(const std::multiset<int>& myMultiSet);

int main()
{
    std::set<int> mySet;
    mySet.insert(1);
    mySet.insert(5);
    mySet.insert(2);
    mySet.insert(1);
    mySet.insert(4);
    mySet.insert(3);
    mySet.insert(2);
    mySet.insert(1);
    mySet.insert(6);

    printSet(mySet);

    //std::cout << "The element 1 occurs " << mySet.count(1) << " times."<<std::endl<<std::endl;

    mySet.erase(1);
    printSet(mySet);

    mySet.clear();
    printSet(mySet);

    std::multiset<int> myMultiSet;
    myMultiSet.insert(11);
    myMultiSet.insert(15);
    myMultiSet.insert(12);
    myMultiSet.insert(11);
    myMultiSet.insert(14);
    myMultiSet.insert(13);
    myMultiSet.insert(12);
    myMultiSet.insert(11);
    myMultiSet.insert(16);

    printMultiSet(myMultiSet);

}

void printSet(const std::set<int>& mySet)
{
    //std::cout<< "There are " <<mySet.size() << " elements in the mySet set."<<std::endl;
    for (int element: mySet)
        {
            std::cout<<element;
            std::cout<<std::endl;
        }
}

void printMultiSet(const std::multiset<int>& myMultiSet)
{
    for (int element: myMultiSet)
        {
            std::cout<<element;
            std::cout<<std::endl;
        }
}