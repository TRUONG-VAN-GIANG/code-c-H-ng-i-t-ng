 #include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    const double PI = 3.14159;
public:
    Circle(double r) {
        radius = r;
    }
    double getCircleArea() {
        return PI * (radius * radius);
    }
};

int main() {
    Circle myCircle(7);
    cout << "Dien tich: " << myCircle.getCircleArea() << endl;
    return 0;
}

