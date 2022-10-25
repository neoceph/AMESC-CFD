#include<iostream>
#include <string.h>

#include "version.h"
#include "Eigen/Dense"


int main (int arg, char *argv[])
{
    if (arg < 2)
    {
        int array[3] = {0, 1, 2};
        std::cout << "Welcome to AMESC-CFD!\n";
        std::cout << "Please provide appropriate arguments" << std::endl;
        exit(1);
        return 0;
    }

    else
    {
        if (strcmp(argv[1], "--version") == 0)
        {
            std::cout << "AMESC-CFD version: ";
            std::cout << gGIT_VERSION << std::endl;
            std::cout << "A thermal cfd solver for laser powder bed fusion additive manufacturing process modeling tool" << std::endl;
            std::cout << "All rights reserved by Abdullah Al Amin and Satyajit Mojumder" << std::endl;
        }

        else if (strcmp(argv[1], "-v") == 0)
        {
            std::cout << gGIT_VERSION_SHORT << std::endl;
        }
        else
        {
            std::cout << "Argument not recognized!" << std::endl;
        }
    }
    
}