#ifndef SegList_h
#define SegList_h
#include "Vertex.h"
class SegList{
Vertex arr[10];
int count=0;
public:
SegList();
//SegList(Vertex);
void addVertex(Vertex&);
virtual string getSpec();
};
#endif
