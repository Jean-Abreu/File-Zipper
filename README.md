# File Zipper - C++ Project
This project is a FILE ZIPPER, built using C++ for a Data Structures and Algorithms course. It provides functionality
for compressing text files using basic command-line arguments and file I/O operations. The goal of this iteration is to demonstate reading
from a file, handling command-line inputs, and preparing the base for future compression logic.

## Getting Started
These instructions will help compile and run the current version of the project on a local machine using the terminal.

Step 1) Make sure there is a sample text file in the project directory. There should already be a sample.txt in the directory, but 
if you do not see one, go ahead and create a blank text file. The current directory should look like this:
![image](https://github.com/user-attachments/assets/4077668f-01a5-4e8b-90fe-93dca26a4fb7)

Step 2) Open terminal and follow these steps:
  a. Navigate to the project directory e.g. "cd path/to/filezipper"
  b. Compile the code e.g. "g++ main.cpp -o filezipper"
    -This will create an executable named filezipper
  c. Run the program with a text file:
    -The current commands are zip or unzip, you need to include the file you want to compress or decompress along with the destination
    -For example, ".\filezipper.exe zip sample.txt compressed.bin"
  d. Check the project directory, those files should appear. If so, then this test run has been successfull. 

## How it Works 
The program takes a filename as a command line argument. The file is opened and the contents are read, this content is processed
into another file that has been pre-named. That file is created in the same directory. 

## Next Steps
1) Implement Huffman encoding or another compression algorithm.
2) Add file writing to save the compressed output.
3) Include decompression functionality.


