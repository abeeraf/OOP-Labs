#include <iostream>
#include <algorithm>
#include <vector> 
#include <numeric>//vector class-template
using namespace std;
int main()
{
vector<int> v;
// add integers at the end of the vector
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(7);
v.push_back(5);

v.insert (v.begin()+1, 7);
v[0]=9;
v.push_back(v[0]);
v.push_back(v[1]);

// display info about v
cout << "The size of v is: " << v.size() << "\nThe capacity of v is: " << v.capacity();
vector<int>::const_iterator it;
cout << "\nThe content of v is: ";
for (it = v.begin(); it != v.end(); it++)
{
cout << *it << " ";
}
//============================================================
it= find(  v.begin(), v.end(), 3 );
v.erase(it);
it= min_element(  v.begin(), v.end());
cout << *it <<endl;
sort( v.begin(), v.end());
//v.reverse();
it= find(  v.begin(), v.end(), 9 );
cout << *it<<endl;
return 0;
}
