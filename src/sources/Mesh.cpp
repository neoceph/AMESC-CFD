#include<iostream>

// External library headers
#include "Eigen/Dense"

// Custom headers
#include "mesh.h"
#include "physics.h"

MESH::MESH(PHYSICS *PHYSICSObj)
{

}

int MESH::meshGen()
{
    std::cout << "Initializing mesh ..." << std::endl;
    
    PHYSICS diffusion;
    diffusion.genPhysics();

    // discretize(diffusion.stateVariable);

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