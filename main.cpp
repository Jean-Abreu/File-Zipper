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

    std::string mode = argv[1];
    std::string inputFileName = argv[2];
    std::string outputFileName = argv[3];

    std::ifstream inputFile(inputFileName, std::ios::binary);
    if(!inputFile){
        std::cerr << "Error: Cannot open input file " << inputFileName << "'\n";
        return 1;
    }

    std::ofstream outputFile(outputFileName, std::ios::binary);
    if(!outputFile){
        std::cerr << "Error: Cannot open output file '" << outputFileName << "'\n";
        return 1;
    }

    if(mode == "zip") {
        std::cout << "Zipping file: " << inputFileName << "\n";
        //TODO: Implement compression
    }

    else if(mode == "unzip") {
        std::cout << "Unzipping file: " << inputFileName << "\n";
        //TODO: Implement decompression
    }

    else {
        std::cerr << "Error: Unknown mode '" << mode << "'\n";
        showUsage(argv[0]);
        return 1;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}