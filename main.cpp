#include<iostream>
using namespace std;
#include"shape.cpp"
#include"canvas.cpp"

int main() {
    Canvas canvas;

    canvas.addShape(new Rectangle(100, 50));
    canvas.addShape(new Square(60));
    canvas.addShape(new Circle(40));
    canvas.addShape(new Ellipse(2, 1));

    canvas.displayCanvas();

    return 0;
}