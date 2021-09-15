#ifndef SCULPTOR_H_INCLUDED
#define SCULPTOR_H_INCLUDED
#include <string>
#include <vector>
#include "voxel.h"

enum {OFF, VECT};
enum {XY, ZX, YZ};

class sculptor{
    private:
        voxel ***v;
        float lado;
        float delta;
        float r, g, b, a;
        int nx, ny, nz;
        int i, j, k, x, y, z;
    public:
        sculptor(int _nx = 1, int _ny=1, int _nz=1);//Construtor da classe
        ~sculptor();//Destrutor da classe
        void alocaRecursos();
        void liberaRecursos();
        void setColor(float r, float g, float b, float a);//Define a cor atual de desenho.
        void putVoxel (int x0, int y0, int z0);//desenha o voxel na posição determinada verificando se iSon for true, aplicando a cor esperada
        void cutVoxel(int x0, int y0, int z0);//apaga o voxel na posição determinada
        void putBox(int x0, int x1, int y0, int y1, int z0, int z1);//
        void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);//
        void putSphere (int x0, int y0, int z0, int r);//Ativa todos os voxels que satisfazem à equação da esfera e atribui aos mesmos a cor atual de desenho (r,g,b,a)
        void cutSphere(int x0, int y0, int z0, int r);//Desativa todos os voxels no intervalo x?[x0,x1], y?[y0,y1], z?[z0,z1]
        void putEllipsoid (int x0, int y0, int z0, int rx, int ry, int rz);//Ativa todos os voxels que satisfazem à equação do elipsóide e atribui aos mesmos a cor atual de desenho
        void cutEllipsoid (int x0, int y0, int z0, int rx, int ry, int rz);//Desativa todos os voxels que satisfazem à equação do elipsóide
        void clear (void);//
        void writeOFF (char* f);//grava a escultura no formato OFF no arquivo filename
};

#endif // SCULPTOR_H_INCLUDED
