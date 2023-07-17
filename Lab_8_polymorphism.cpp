#include<iostream>
using namespace std;

class CPolygon {
    protected:
    int width, height;
    public:
    void set_values(int a, int b){
        width = a, height = b;
    }
    
    virtual int area (void){
        return 0;
    }
        };

    class CRectangle : public CPolygon{
        public:
        int area(){
            return width*height;
        }
        
    };

    class CTriangle : public CPolygon{
        public:
        int area(){
            return width*height*0.5;
        }
    };

int main(){

    CRectangle rect;
    CTriangle trgl;
    CPolygon poly;

    CPolygon* ppoly1 = &rect;
    CPolygon* ppoly2 = &trgl;
    CPolygon* ppoly3 = &poly;

    ppoly1->set_values(10,15);
    ppoly2->set_values(10,15);
    ppoly3->set_values(10,15);

    cout <<"The calculated area of the rectangle is: "<< rect.area() <<endl;
    cout <<"The calculated area the triangle is: "<< trgl.area() <<endl;
    cout <<"The calculated area the polygon is: "<< poly.area() <<endl;

    return 0;
}