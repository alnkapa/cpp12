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

int
main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << "mean_price" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(std::cin, line))
    {
        std::cout << parser_row(line, row_numer_price) << "\t"
                  << argv[1] << std::endl;
    }

    return 0;
}