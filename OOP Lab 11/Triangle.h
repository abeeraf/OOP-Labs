#ifndef Triangle_h
#define Triangle_h
#include "SegList.h"

class Triangle:public SegList{
public:
//Triangle();
Triangle(Vertex&,Vertex&,Vertex&);
string getSpec();
};
#endif
