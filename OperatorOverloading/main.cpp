#include <iostream>

using namespace std;

class Box{
    int width = 0;
    int depth = 0;
    int height = 0;

    friend ostream &operator<<(ostream& output, Box& b)
    {
        output << "Box parameters - width:" << b.width << ", depth: " << b.depth << ", height:" << b.height << endl;
        return output;
    }

    friend istream &operator>>(istream& input, Box& b)
    {
        input >> b.width >> b.depth >> b.height;
        return input;
    }
public:
    Box()
    {

    };

    Box(double w, double d, double h):width(w), depth(d), height(h)
    {

    };

    double getWidth()
    {
        return width;
    };
    
    double getDepth()
    {
        return depth;
    };

    double getHeight()
    {
        return height;
    };

    double getVolume() const 
    {
        return width*depth*height;
    }

    Box &operator+(Box& box)
    {
        this->width = (this->width > box.width) ? this->width : box.width;
        this->depth = (this->depth > box.depth)? this->depth : box.depth;
        this->height += box.height;
        return *this;
    }
 
};

bool operator>(const Box& box1, const Box& box2)
{
    return box1.getVolume() > box2.getVolume();
}

bool operator<(const Box& box1, const Box& box2)
{
    return box1.getVolume() < box2.getVolume();
}

bool operator==(const Box& box1, const Box& box2)
{
    return box1.getVolume() == box2.getVolume();
}


int main()
{
    Box Box1(6, 15, 60);
    cout << Box1;
    Box Box2(8, 12, 15);
    cout << Box2;

    Box Box3 = Box1 + Box2;
    cout << Box3;

    cout << boolalpha;
    cout << (Box1 < Box2) << endl;
    cout << (Box1 > Box2) << endl;

    Box Box4;
    cin >> Box4;
    cout << (Box3 == Box4) << endl;

    return 0;
}