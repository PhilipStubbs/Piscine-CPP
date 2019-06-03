#include <iostream>

std::string cap(std::string str) {
    std::locale loc;
    std::string ret;
    for (std::string::size_type i=0; i < str.length(); ++i)
        std::cout << std::toupper(str[i],loc);
    return (ret);
}

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    for (int i = 1; i < argc; ++i) {
        cap(argv[i]);
    }
    std::cout << "\n";
}