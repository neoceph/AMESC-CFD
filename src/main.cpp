#include<iostream>

#include "version.h"

using namespace std;

int main (int arg, char *argv[])
{
    int array[3] = {0, 1, 2};
    cout << "Hello World!\n";
    std::cout << gGIT_VERSION << std::endl << gGIT_VERSION_SHORT << std::endl;
    
}