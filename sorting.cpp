#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> names {
        "Frodo Baggins", "Gandalf the Gray", "Aragon",
        "Samwise Gamgee", "Peregrin Took", "Meriadoc Brandybuck",
        "Gimli", "Legolas Greenleaf", "Boromir", "Wonderful Wonderful Wongooneering"
    };

    std::sort(begin(names), end(names));
    std::cout<<"Names sorted: "<<std::endl;
    for (const auto& name : names)
        std::cout<<name<<", "<<std::endl;
        std::cout<<std::endl;

    std::sort(begin(names), end(names), [](const auto& left, const auto& right) {return left.length() < right.length(); });
    std::cout<<"Names sorted by length: "<<std::endl;
    for (const auto& name : names)
        std::cout<<name<<", "<<std::endl;
        std::cout<<std::endl;

}