#ifndef MESH_H
#define MESH_H

class MESH
{
        int x, y, z;
    public:
        int meshGen();
        int getID();
};

int MAC(int x, int y, int& sum);

#endif /* End guard MESH_H */