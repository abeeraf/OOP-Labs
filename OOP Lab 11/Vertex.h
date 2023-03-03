#ifndef Vertex_h
#define Vertex_h
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std; 

class Vertex{
int x;
int y; 
public: 
Vertex ();
Vertex (int,int);
void setx(int);
void sety(int);
int getx();
int gety();
string stringRep();
};

#endif
