#include<iostream>
#include<map>

void printHelp()
{
    std::cout<<"Help - your aim is to make money!"<<std::endl;
}

int main()
{
    std::map<int,void(*)()>menu;
    menu[1] = printHelp;
    menu[1]();
}