#include <iostream> //Provides the input and output stream objects, allowing us to print messages to the console
#include <fstream> //Offers file stream classses (ifstream/ofstream), this is important to be able to handle file I/O
#include <string> //Will need this for manipulation of text data

//This function is going to help display the controls for the program
void showUsage(const std::string& programName){ //The parameter will be the program name (in this case argv[0])
    std::cout << "Usage:\n"
              << "  " << programName << " zip <input_file> <output_file>\n" //Console will display how to use the zip mode
              << "  " << programName << " unzip <input_file> <output_file>\n"; //Along with how to unzip
} //Basically, this will show the user how to write commands for this program. 

int main(int argc, char* argv[]){ //argc = argument count || argv = array of strings holding the command-line arguments
    if (argc != 4){ //Since our program expects 4 arguments, I have implemented a method that acts if the count is not four
        showUsage(argv[0]); //If our condition is met, we show instructions and return an error
        return 1;
    }
    //argv[0] is the program name
    std::string mode = argv[1]; //Zip or unzip
    std::string inputFileName = argv[2]; //File to read from
    std::string outputFileName = argv[3]; //File to write results to

    std::ifstream inputFile(inputFileName, std::ios::binary); //This line will open the input file in binary mode, ensuring the file is read exactly as is
    if(!inputFile){ //Error handling in case file cannot be opened
        std::cerr << "Error: Cannot open input file " << inputFileName << "'\n"; 
        return 1;
    }

    std::ofstream outputFile(outputFileName, std::ios::binary); //Same as before, except we are working with the output file
    if(!outputFile){
        std::cerr << "Error: Cannot open output file '" << outputFileName << "'\n";
        return 1;
    }

    if(mode == "zip") { //Simple string comparisons to check the mode
        std::cout << "Zipping file: " << inputFileName << "\n"; //Outputting a message to indicate which operation is being performed
        //TODO: Implement compression
    }

    else if(mode == "unzip") {
        std::cout << "Unzipping file: " << inputFileName << "\n";
        //TODO: Implement decompression
    }

    else {
        std::cerr << "Error: Unknown mode '" << mode << "'\n"; //Error handling in case mode does not match available modes
        showUsage(argv[0]);
        return 1;
    }

    inputFile.close(); //Closing files that were opened in this process
    outputFile.close();

    return 0;
}