#ifndef MESH_H
#define MESH_H

// user-defined headers
#include <physics.h>

class PHYSICS;

class MESH
{
    public:
        // Constructor
        MESH(PHYSICS *physicsObject);

        int x, y, z;
    public:
        int meshGen();
        int getID();
        int discretize(int physicsEquation);
};

int MAC(int x, int y, int& sum);

#endif /* End guard MESH_H */