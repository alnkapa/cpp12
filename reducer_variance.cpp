#include <iostream>
#include <limits>
#include <string>

int
main(int argc, char **argv)
{
    size_t count{0};
    std::string line;
    double total_variance_sum = 0.0;
    int value{0};
    int mean_price{0};
    auto max = std::numeric_limits<std::streamsize>::max();
    while (!std::cin.fail() || !std::cin.eof())
    {
        std::cin >> value;
        std::cin.ignore(max, '\t');
        std::cin >> mean_price;
        std::cin.ignore(max, '\n');
        total_variance_sum += (value - mean_price) * (value - mean_price);
        count += 1;
    }
    if (count > 0)
    {
        std::cout << static_cast<double>(total_variance_sum) / count << std::endl;
    }
    else
    {
        std::cout << "no valid integers" << std::endl;
    }

    return 0;
}