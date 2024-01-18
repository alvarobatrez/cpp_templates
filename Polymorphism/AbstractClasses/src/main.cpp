#include <iostream>
#include <vector>

// ***** ABSTRACT BASE CLASS *****

class Shape
{
    public:
    // pure virtual functions
    virtual void draw() = 0;
    virtual void rotate() = 0;
    virtual ~Shape() {};
};

// ***** ABSTRACT DERIVED CLASSES *****

class OpenShape: public Shape
{
    public:

    virtual ~OpenShape() {}
};

class ClosedShape: public Shape
{
    public:

    virtual ~ClosedShape() {}
};

// ***** CONCRETE DERIVED CLASSES *****

class Line: public OpenShape
{
    public:

    virtual void draw() override
    {
        std::cout << "Line::draw\n";
    }

    virtual void rotate() override
    {
        std::cout << "Line::rotate\n";
    }

    virtual ~Line() {}
};

class Circle: public ClosedShape
{
    public:

    virtual void draw() override
    {
        std::cout << "Circle::draw\n";
    }

    virtual void rotate() override
    {
        std::cout << "Circle::rotate\n";
    }

    virtual ~Circle() {}
};

class Square: public ClosedShape
{
    public:

    virtual void draw() override
    {
        std::cout << "Square::draw\n";
    }

    virtual void rotate() override
    {
        std::cout << "Square::rotate\n";
    }

    virtual ~Square() {}
};

void show(const std::vector <Shape *> &shapes)
{
    for (const auto s: shapes)
    {
        s->draw();
    }
}

int main()
{
    // Shape s; // not possible
    // Shape *ptr = new Shape(); // not possible

    Circle circle;
    circle.draw();

    Shape *ptr = new Circle();
    ptr->draw();
    ptr->rotate();

    Shape *c = new Circle();
    Shape *l = new Line();
    Shape *s = new Square();

    std::vector <Shape *> shapes {c, l, s};

    show(shapes);

    delete ptr;
    delete c;
    delete l;
    delete s;
    
    return 0;
}