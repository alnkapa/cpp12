#include <iostream>
#include <limits>
#include <string>

int
main(int argc, char **argv)
{
    size_t count{0};
    std::string line;
    int totValue{0};
    int value{0};
    int key{0};
    auto max = std::numeric_limits<std::streamsize>::max();
    while (!std::cin.fail() || !std::cin.eof())
    {
        std::cin >> value;
        std::cin.ignore(max, '\t');
        std::cin >> key;
        std::cin.ignore(max, '\n');
        totValue += value;
        count += 1;
    }
    if (count > 0)
    {
        std::cout << static_cast<float>(totValue) / count << std::endl;
    }
    else
    {
        std::cout << "no valid integers" << std::endl;
    }

    return 0;
}