#include <string>
#include <vector>
#include <iostream>
#include <fstream>

std::vector<std::string> tokenise(std::string csvLine, char separator)
{
    std::vector<std::string> tokens;

    signed int start, end;
    std::string token;

    start = csvLine.find_first_not_of(separator, 0);
    // std::cout<<"Start = "<<start<<std::endl<<std::endl;

     do{
         end = csvLine.find_first_of(separator, start);
         //std::cout<<"End = "<<end<<std::endl;
         //std::cout<<"Start = "<<start<<std::endl<<std::endl;
         // if (start == csvLine.length() || start == end) break;
         if (start == csvLine.length()) break;
         if (end >= 0) token = csvLine.substr(start, end - start);
         else token = csvLine.substr(start, csvLine.length() - start);
         tokens.push_back(token);
         start = end + 1;
     } while (end > 0);

    return tokens;
}

int main()
{
    // std::vector<std::string> tokens;
    // std::string testStr = "thing, thing1, thing2,, thing3,";
    // tokens = tokenise(testStr, ',');
    // for (std::string& t : tokens)
    // {
    //     std::cout<<t<<std::endl;
    // }

    std::ifstream csvFile{"20200317.csv"};
    std::string line;
    std::vector<std::string> tokens;

    if (csvFile.is_open())
    {
        std::cout<<"File has been opened!"<<std::endl<<std::endl;

        while(std::getline(csvFile,line))
        {
            std::cout<<"Read line: "<<line<<std::endl;
            tokens = tokenise(line, ',');
            if (tokens.size() != 5)
            {
                std::cout<<"Bad line"<<std::endl;
                continue;
            }

            try {
                double price = std::stod(tokens[3]);
                double amount = std::stod(tokens[4]);
                std::cout<<price<<": "<<amount<<std::endl;
                
            } catch (const std::exception& e) {
                std::cout<<"Bad float: "<<tokens[3]<<std::endl;
                std::cout<<"Bad float: "<<tokens[4]<<std::endl;
                continue;
            }


            for (std::string& t : tokens)
            {
                // std::cout<<t<<std::endl;
            }
        }
        csvFile.close();
    }
    else
    {
        std::cout<<"Could not open file."<<std::endl;
    }

    return 0;
}