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
    huffman f(av[1],av[2]);
    f.compress();
    cout << "Compressed Successfully" << endl;
    return 0;
}