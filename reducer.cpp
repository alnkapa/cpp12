#include <iostream>
#include <string>


int main(int argc, char ** argv)
{
    size_t count = 0;
    std::string line;
    while (std::getline(std::cin, line))
    {
        count += 1;
    }
    std::cout << count << std::endl;
    return 0;
}