#include <iostream>
#include <fstream>
#include <string>

void showUsage(const std::string& programName){
    std::cout << "Usage:\n"
              << "  " << programName << " zip <input_file> <output_file>\n"
              << "  " << programName << " unzip <input_file> <output_file>\n";
}

int main(int argc, char* argv[]){
    if (argc != 4){
        showUsage(argv[0]);
        return 1;
    }

    return 0;
}