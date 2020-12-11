#include <shapes.h>

void Rectangle::render()
{
	cout << "Rectangle" << endl << "Width: " << this->width << " Height: " << this->height << endl;
	cout << "Position:  X = " << this-> getX() << " Y = " << this->getY() << endl << endl;
}

void Triangle::render()
{
	cout << "Triangle" << endl << "Base: " << this->base << " Height: " << this->height << endl;
	cout << "Position:  X = " << this->getX() << " Y = " << this->getY() << endl << endl;
}

void Circle::render()
{
	cout << "Circle" << endl << "Radius: " << this->radius << endl;
	cout << "Position:  X = " << this->getX() << " Y = " << this->getY() << endl << endl;
}
