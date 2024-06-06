#include <iostream>
#include "klasy.h"


int Square::m_numberOfSquares = 0;
int Rectangle::m_numberOfRectangles = 0;
int Circle::m_numberOfCircles = 0;


Square::Square() {
    s_name = "kwadrat bez nazwy";
    s_a=1;
    Square::m_numberOfSquares++;
}

Rectangle::Rectangle() {
    r_name = "prostokat bez nazwy";
    r_a = 1;
    r_b = 1;
    Rectangle::m_numberOfRectangles++;
}
Circle::Circle() {
    c_name = "kolo bez nazwy";
    c_r = 1;
    Circle::m_numberOfCircles++;
}


Square::Square(const std::string& name, double a) {
    s_name = name;
    s_a = a;
    Square::m_numberOfSquares++;
}

Rectangle::Rectangle(const std::string& name, double a, double b) {
    r_name = name;
    r_a = a;
    r_b = b;
    Rectangle::m_numberOfRectangles++;
}

Circle::Circle(const std::string& name, double r) {
    c_name = name;
    c_r = r;
    Circle::m_numberOfCircles++;
}


Square::~Square()
{
    Square::m_numberOfSquares--;
}

Rectangle::~Rectangle()
{
    Rectangle::m_numberOfRectangles--;
}

Circle::~Circle()
{
    Circle::m_numberOfCircles--;
}



void Square::setName(const std::string& name) {
    s_name = name;
}
void Rectangle::setName(const std::string& name) {
    r_name = name;
}
void Circle::setName(const std::string& name) {
    c_name = name;
}


void Square::setSa(double a) {
    s_a = a;
}
void Rectangle::setRab(double a, double b) {
    r_a = a;
    r_b = b;
}
void Circle::setCr(double r) {
    c_r = r;
}



double Square::getSa() const {
    return s_a;
}
double Rectangle::getRa() const{
    return r_a;
}
double Rectangle::getRb() const{
    return r_b;
}
double Circle::getCr() const{
    return c_r;
}


void Square::show() const {
    std::cout << "Kwadrat: " << s_name << " o boku " << s_a << std::endl;
}
void Rectangle::show() const {
    std::cout << "Prostokot: " << r_name << " o bokach " << r_a << " i " << r_b << std::endl;
}
void Circle::show() const {
    std::cout << "Kolo: " << c_name << " o promieniu " << c_r << std::endl;
}

int Square::numberOfSquares() {
    return Square::m_numberOfSquares;
};

int Rectangle::numberOfRectangles() {
    return Rectangle::m_numberOfRectangles;
};

int Circle::numberOfCircles() {
    return Circle::m_numberOfCircles;
};