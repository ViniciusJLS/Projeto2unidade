#include <iostream>
#include <fstream>
#include "sculptor.cpp"
#include "voxel.h"
using namespace std;
int main(void)
{
    sculptor bola(250,250,250);
    bola.setColor(1,1,1,1);
    //Bola
    bola.putSphere(10,10,10,10);
    
    //Simbolos adidas
    bola.setColor(0,0,0,1);
    	//Simbolos na Horizontal
    	//primero simbolo
	    
	    bola.putBox(11,12,10,13,19,20);
	    bola.putBox(10,11,10,12,19,20);
	    bola.putVoxel(9,10,19);
	    
	    //segundo simbolo
    	bola.putBox(1,2,10,13,11,12);
    	bola.putBox(1,2,10,12,10,11);
	    bola.putVoxel(1,10,9);
	    
    	//terceiro simbolo
    	bola.putBox(9,10,10,13,1,2);
    	bola.putBox(10,11,10,12,1,2);
	    bola.putVoxel(11,10,1);
	    
    	//quarto simbolo
    	bola.putBox(19,20,10,13,9,10);
    	bola.putBox(19,20,10,12,10,11);
	    bola.putVoxel(19,10,11);
	    
    	//Simbolos na Vertical
		//Quinto simbolo
    	bola.putBox(11,12,19,20,8,11);
	    bola.putBox(10,11,19,20,9,11);
	    bola.putVoxel(9,19,10);
	    
	    //Sexto simbolo
    	bola.putBox(11,12,1,2,10,13);
	    bola.putBox(10,12,1,2,10,12);
	    bola.putVoxel(9,1,10);
    
    //desenho lado direito do primeiro simbolo da adidas
    bola.setColor(1,0,0,1);
    bola.putBox(14,20,8,12,15,20);
    bola.putBox(15,20,12,13,15,20);
    bola.putBox(16,20,13,14,15,20);
    bola.cutBox(17,20,8,14,17,20);
    bola.cutBox(18,20,8,14,16,17);
    bola.cutBox(19,20,8,14,15,16);
    bola.cutBox(14,17,8,14,19,20);
    bola.cutBox(16,17,8,14,18,19);
    bola.putBox(14,15,9,12,19,20);
    
    //desenho lado direito do segundo simbolo da adidas
    bola.setColor(1,0,0,1);
    bola.putBox(2,7,8,12,15,20);
    bola.putBox(3,7,12,13,15,20);
    bola.putBox(4,7,13,14,15,20);
    bola.cutBox(5,7,8,14,19,20);
    bola.cutBox(6,7,8,14,17,18);
    bola.putBox(6,7,9,12,19,20);
    bola.cutBox(2,4,8,14,17,20);
    bola.cutBox(2,3,8,12,16,20);
    bola.cutBox(4,5,8,14,18,20);
    
    //desenho lado direito do terceiro simbolo da adidas
    bola.setColor(1,0,0,1);
    bola.putBox(2,7,8,12,1,6);
    bola.putBox(2,6,12,13,1,6);
    bola.putBox(2,5,13,14,1,6);
    bola.cutBox(5,7,8,14,1,2);
    bola.cutBox(6,7,8,14,3,4);
    bola.putBox(6,7,9,12,1,2);
    bola.cutBox(2,4,8,14,1,4);
    bola.cutBox(2,3,8,12,1,5);
    bola.cutBox(4,5,8,14,1,3);
    bola.cutBox(2,4,12,14,1,5);
    bola.putBox(3,4,12,14,4,5);
    
    //desenho lado direito do quarto simbolo da adidas
    bola.setColor(1,0,0,1);
    bola.setColor(1,0,0,1);
    bola.putBox(14,20,8,12,1,6);
    bola.putBox(14,18,12,13,1,6);
    bola.putBox(14,17,13,14,1,6);
    bola.cutBox(17,20,8,14,1,4);
    bola.cutBox(18,20,8,14,4,5);
    bola.cutBox(19,20,8,14,5,6);
    bola.cutBox(14,17,8,14,1,2);
    bola.cutBox(16,17,8,14,2,3);
    bola.putBox(14,15,9,12,1,2);
    
    //desenho a cima do primeiro simbolo da adidas
    bola.setColor(1,0,0,1);
    bola.putBox(9,13,14,20,15,20);
    bola.putBox(8,9,15,20,15,20);
    bola.putBox(7,8,16,20,15,20);
    bola.cutBox(7,14,17,20,17,20);
    bola.cutBox(7,14,18,20,16,17);
    bola.cutBox(7,14,19,20,15,16);
    bola.cutBox(7,14,14,17,19,20);
    bola.cutBox(7,14,16,17,18,19);
    bola.putBox(9,12,14,15,19,20);
    
    //desenho a baixo do primeiro simbolo da adidas
    bola.setColor(1,0,0,1);
    bola.putBox(9,13,1,7,15,20);
    bola.putBox(8,9,2,7,15,20);
    bola.putBox(7,8,3,7,15,20);
    bola.cutBox(7,14,5,7,19,20);
    bola.cutBox(7,14,6,7,17,18);
    bola.putBox(9,12,6,7,19,20);
    bola.cutBox(7,14,2,4,17,20);
    bola.cutBox(7,12,2,3,16,20);
    bola.cutBox(7,14,4,5,18,20);
    bola.cutBox(7,14,1,2,15,20);
    
    //desenho a cima do segundo simbolo da adidas
    bola.setColor(1,0,0,1);
    bola.putBox(9,13,14,20,1,6);
    bola.putBox(8,9,14,20,1,5);
    bola.putBox(7,8,14,20,1,4);
    bola.cutBox(7,14,17,20,1,4);
    bola.cutBox(7,14,14,17,1,2);
    bola.putBox(9,12,14,15,1,2);
    bola.cutBox(7,14,18,20,4,5);
    bola.cutBox(7,14,19,20,5,6);
    bola.cutBox(7,14,16,17,2,3);
    
    //desenho a baixo do segundo simbolo da adidas
    bola.setColor(1,0,0,1);
    bola.putBox(9,13,1,7,1,6);
    bola.putBox(8,9,1,7,2,6);
    bola.putBox(7,8,1,7,3,6);
    bola.cutBox(7,14,1,4,1,4);
    bola.cutBox(7,14,4,7,1,2);
    bola.putBox(9,12,6,7,1,2);
    bola.cutBox(7,14,4,5,2,3);
    bola.cutBox(7,14,1,3,4,5);
    bola.cutBox(7,14,1,2,5,6);
    
    bola.writeOFF((char*)"bola.off");
    return 0;
}
