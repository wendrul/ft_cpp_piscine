#include <iostream>
#include <fstream>
#include <sstream>


// void replace(std::string needle, std::string replacementNeedle, std::string filename)
// {
//     (void)needle
// }

int main(int argc , char **argv)
{
    std::ostringstream  text;
    std::string filename(argv[1]);
    std::ifstream inputFile(argv[1]);
    std::ofstream outputFile;
    if (argc != 4)
    {
        std::cerr << "Wrong number of arguments.\n";    
        return 0;
    }
    inputFile.open(filename);
    outputFile.open(filename + ".replace");
    text << inputFile.rdbuf();
    outputFile << text << std::endl;
    return 0;
}