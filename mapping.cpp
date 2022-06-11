#include <iostream>
#include <map>
#include <string>

void printHelp()
{
    std::cout<<"Help - your aim is to make money!"<<std::endl;
}

int main()
{
    std::map<int,void(*)()>menu;
    menu[1] = printHelp;
    menu[1]();

    std::map<std::string, unsigned long long> phoneBook;
    phoneBook["Sarah"] = 613'749'1923;
    phoneBook["Henry"] = 416'339'1923;
    phoneBook["Abercrombie"] = 613'344'4423;
    phoneBook["Victoria"] = 613'229'9201;
    phoneBook["Sydney"] = 613'229'4508;
    phoneBook["Brian"] = 613'316'5900;
    phoneBook["Jack"] = 613'755'1233;
    phoneBook["Fifi"] = 613'364'8809;

    std::cout<<"Jack's phone number is: "<<phoneBook["Jack"]<<std::endl<<std::endl;
    for (const auto& [name, number] : phoneBook)
        std::cout<<name<<" has a phone number of: "<<number<<std::endl;

}