#pragma once
#include <string>


class Square
{
private:
    static int m_numberOfSquares;
    std::string s_name;
    double s_a;
public:
    static int numberOfSquares();
    Square();
    Square(const std::string& name, double a=1);
    ~Square();
    void setName(const std::string& name);
    void setSa(double a);
    double getSa() const;
    void show() const;
};

class Rectangle
{
private:
    static int m_numberOfRectangles;
    std::string r_name;
    double r_a;
    double r_b;
public:
    static int numberOfRectangles();
    Rectangle();
    Rectangle(const std::string& name, double a=1, double b=1);
    ~Rectangle();
    void setName(const std::string& name);
    void setRab(double a, double b);
    double getRa() const;
    double getRb() const;
    void show() const;
};

class Circle
{
private:
    static int m_numberOfCircles;
    std::string c_name;
    double c_r;
public:
    static int numberOfCircles();
    Circle();
    Circle(const std::string& name, double r=1);
    ~Circle();
    void setName(const std::string& name);
    void setCr(double r);
    double getCr() const;
    void show() const;
};