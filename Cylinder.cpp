//volume of cylinder

#include<iostream>
using namespace std;


class Cylinder
{
    private:
    float radius;
    float height;

    public:
    void setRadius(float r)
    {
        radius = r;
    }
    void setheight(float h)
    {
        height =h;
    }
    float volume()
    {
        return 3.14*radius*radius*height;
    }

};

int main()
{
    float r, h;
    cout<<"Enter the radius: ";
    cin>> r;

    cout<<"Enter the height : ";
    cin>>h;

    Cylinder cyl;
    cyl.setRadius(r);
    cyl.setheight(h);
    cout<<"The voulme of cylinder is "<<cyl.volume()<<endl;
    return 0;
}
