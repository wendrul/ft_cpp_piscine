#include <iostream>
#include <fstream>
#include <sstream>

void sed(std::string fileName, std::string needle, std::string newNeedle)
{
    std::ifstream file(fileName);
    if (!file)
    {
        std::cerr << "Couldn't open " << fileName << std::endl;
        return;
    }
    std::ostringstream text;
    text << file.rdbuf();
    std::string s = text.str();
    size_t index = newNeedle.length() * -1;
    
    while (1)
    {
        index = s.find(needle, index + newNeedle.length());
        if (index == std::string::npos)
            break;
        s.erase(index, needle.length());
        s.insert(index, newNeedle);
    }
    file.close();
    
    std::ofstream ret(fileName + ".replace");
    ret << s;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Wrong number of arguments.\n";
        return 0;
    }

    std::string fileName(argv[1]);
    std::string needle(argv[2]);
    std::string newNeedle(argv[3]);
    
    if (fileName.length() == 0 || needle.length() == 0 || newNeedle.length() == 0)
    {
        std::cerr << "Invalid or empty parameters" << std::endl;
        return (0);
    }
    
    sed(fileName, needle, newNeedle);
    
    return 0;
}
