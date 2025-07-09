#include<iostream>
#include<math.h>
#include <SFML/Graphics.hpp>

using namespace std;
class Shape{
    public:
        virtual int getShape()=0;
        virtual void draw(sf::RenderWindow& window) = 0;
        virtual ~Shape(){}
};
class Rectangle: public Shape{
    private:
        int Length;
        int Breadth;
    public:
        Rectangle(){
            Length=0;
            Breadth=0;
        }
        Rectangle(int a,int b){ //constructor
            Length=a;
            Breadth=b;
        }
        int getLength(){  //member functions
            return Length;
        }
        int getBreadth(){
            return Breadth;
        }
        int getArea(){
            return Length*Breadth;
        }
        bool isSquare(){
            return Length==Breadth;
        }
        int getShape(){
            return 0;
        }
        void draw(sf::RenderWindow& window){
            sf::RectangleShape rect(sf::Vector2f(Length, Breadth));
            rect.setFillColor(sf::Color::Green); // any color
            rect.setPosition(100, 100); // Arbitrary position
            window.draw(rect);
        }
};

class Square: public Rectangle{
    public:
        Square():Rectangle(0,0){
            if(!isSquare()) cout<<"sides not equal";
        }
        Square(int a):Rectangle(a,a){}
        int getShape(){
            return 1;
        }
        void draw(sf::RenderWindow& window){
            sf::RectangleShape square(sf::Vector2f(getLength(), getLength()));
            square.setFillColor(sf::Color::Blue);
            square.setPosition(200, 200);
            window.draw(square);
        }
};

class Circle: public Shape{
    private:
        int Radii;
    public:
        Circle(int r){
            Radii=r;
        }
        int getRadius(){
            return Radii;
        }
        float getArea(){
            return M_PI*pow(Radii,2);
        }
        int getShape(){
            return 2;
        }
        void draw(sf::RenderWindow& window) override {
            sf::CircleShape circle(Radii);
            circle.setFillColor(sf::Color::Red);
            circle.setPosition(300, 100);
            window.draw(circle);
        }

};

class Ellipse: public Shape{
    private:
        int XLength;
        int YLength;
    public:
        Ellipse(int a,int b){
            XLength=a;
            YLength=b;
        }
        int getXLength(){
            return XLength;
        }
        int getYLength(){
            return YLength;
        }
        float getArea(){
            return M_PI*XLength*YLength/4;
        }
        int getShape(){
            return 3;
        }
        void draw(sf::RenderWindow& window) override {
            sf::CircleShape ellipse(1.0f);
            ellipse.setScale(XLength, YLength);
            ellipse.setFillColor(sf::Color::Yellow);
            ellipse.setPosition(400, 200);
            window.draw(ellipse);
        }

};   
