#include <iostream>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return 0;
    }
    for (int i = 1; i < argc; i++)
    {
        std::string sentence;
        sentence = argv[i];
        for (size_t i = 0; i < sentence.size(); i++)
        {
            if (sentence[i] <= 'z' && sentence[i] >= 'a')
            {
                sentence[i] = sentence[i] - ('a' - 'A');
            }
        }
        std::cout << sentence;
    }
    std::cout << "\n";
    return (0);
}