#include <iostream>

int main()
{
    std::string adjective {"hornswoggling"};
    std::cout<<adjective<<std::endl;
    std::cout<<"Hello big World!"<<std::endl;
    std::string word("rubbish");
    std::cout<<word<<std::endl;
    word = adjective;
    std::cout<<word<<std::endl;
    adjective = "complicated";
    std::cout<<adjective<<std::endl;
    return 0;
}