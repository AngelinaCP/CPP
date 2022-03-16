#include <iostream>
#include <fstream>

void ReadAll(std::ifstream& infile, std::ofstream& outfile, std::string str1, std::string str2) {
    std::string line;
    while (getline(infile, line)) {
        int res = 0;
        while (1) {
            res = line.find(str1, res);
            if (res == std::string::npos)
                break;
            line.replace(res, str1.size(), str2);
        }
        outfile << line << std::endl;
    }
}

int main(int argc, char **argv) {

    std::string s1;
    std::string s2;

    if (argc != 4) {
        std::cerr << "Wrong number of arguments" << std::endl;
        return (1);
    }
    std::ifstream infile(argv[1]);
    std::ofstream outfile(argv[1] + (const std::string)".replace");
    if (!infile || !outfile) {
        std::cerr << "Error: file couldn't be opened" << std::endl;
        infile.close();
        outfile.close();
        return (1);
    }
    ReadAll(infile, outfile, argv[2], argv[3]);
    return (0);
}