#include <iostream>

using namespace std;

class punto3D
{
    public:
        punto3D (double _x, double _y, double _z) : x{_x}, y{_y}, z{_z} //come inizializzare subito
        {

        }
        punto3D () : punto3D (0,0,0)
        {

        }

    //private:
        double x=0, y=0,z=0;


};

int main()
{
    punto3D *a=new punto3D {2,3,4};
    cout << a->x;
}
