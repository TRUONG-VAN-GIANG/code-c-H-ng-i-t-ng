#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }
    double getPerimeter() {
        return 2 * (width + height);
    }
    double getArea() {
	return width * height;
	}
	
};

int main() {
    Rectangle myRectangle(5, 10);
    cout << "Perimeter: " << myRectangle.getPerimeter() << endl;
    Rectangle hinhcn3(3, 4);
    cout << "chu vi:" << hinhcn3.getPerimeter() << endl;
    Rectangle dientichcn(6, 3);
    cout << "dien tich:" << dientichcn.getArea() << endl;
	return 0;
}
