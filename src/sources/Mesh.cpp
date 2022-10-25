#include<iostream>

#include "mesh.h"
#include "Eigen/Dense"

int MESH::meshGen()
{
    std::cout << "Initializing mesh ..." << std::endl;
    return 0;
}

int MAC(int x, int y, int& sum)
{
    Eigen::MatrixXd m(2,2);

    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);
    std::cout << m << std::endl;
    sum += x*y;
    return sum;
}