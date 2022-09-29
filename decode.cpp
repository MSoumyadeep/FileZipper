#include <iostream>
#include "huffman.hpp"
using namespace std;
int main(int ac, char* av[]) 
{
    if (ac != 3) 
    {
        cout << "File detection Failed.";
		exit(1);
    }
    huffman f(av[1], av[2]);
    f.decompress();
    cout << "Decompressed successfully" << endl;
    return 0;
}