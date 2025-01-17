#include <algorithm>
#include <iostream>
#include <string>

const int row_numer_price = 10;

const std::string
parser_row(const std::string &line, const int row_number)
{
    auto begin = line.begin();
    auto current = line.begin();
    int current_row{1};
    bool in_quotes = false;
    while (current != line.end())
    {
        if (*current == '"')
        {
            in_quotes = !in_quotes;
        }
        else if (!in_quotes && *current == ',')
        {
            if (current_row == row_number)
            {
                return {begin, current};
            }
            begin = current + 1;
            current_row++;
        }
        ++current;
    }
    return {};
}

// int
// main()
// {
//     std::string line = "6949526,\"Brooklyn's heart, Ft Greene! 1day free bicycle\",36434721,Gabriel,Brooklyn,Fort Greene,40.68503,-73.9742,Entire home/apt,160,1,70,2019-06-30,1.43,1,356";
//     int row_number = 10; // Example row number to parse
//     std::string result = parser_row(line, row_number);
//     // Output the result
//     std::cout << "Parsed row: " << result << std::endl;
//     return 0;
// }

int
main(int argc, char **argv)
{
    std::string line;
    while (std::getline(std::cin, line))
    {
        std::cout << parser_row(line, row_numer_price) << "\t"
                  << "1" << std::endl;
    }

    return 0;
}