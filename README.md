# repository_1
#include<iostream>
using namespace std;

class three_d{ 
int x, y, z;
public:
 three_d()
 {x=y=z=0;}
 three_d(int i, int j, int k)
 { x = i; y = j; z = k;}
 three_d operator +(three_d op2);
 three_d operator = (three_d op2);
 three_d operator ++ ();
 three_d operator ++ (int);
 
 void show();
 three_d three_d :: operator +(three_d op2){ 
 three_d temp;
 temp.x = x + op2.x;
 temp.y = y + op2.y;
 temp.z = z + op2.z;
 return temp;
 }
  
 three_d three_d :: operator =(three_d op2){ 
 x = op2.x;
 y = op2.y;
 z = op2.z;
 return *this;
 }
 
