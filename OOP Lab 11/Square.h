#ifndef Square_h
#define Square_h
#include "SegList.h"

class Square:public SegList{

public: 
string getSpec();
Square(Vertex&,Vertex&,Vertex&,Vertex&);
};
#endif
