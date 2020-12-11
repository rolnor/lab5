#include <shapes.h>


void Shape::render()
{
	cout << "Basic shape. Print not implemented" << endl;
}

Shape::Shape(Point2D& inPoint, int rgbAlpha[4])
{
	for (int i = 0; i < 3; i++)
	{
		if (rgbAlpha[i] >= 0 && rgbAlpha[i] < 256)
			rgb[i] = rgbAlpha[i];
		else rgb[i] = 0;
	}

	point = new Point2D(inPoint.getX(),inPoint.getY());
	//	&inPoint;
}

Shape::~Shape()
{
	delete point;
}

int Shape::getrgb(int index)
{
	return rgb[index];
}

float Shape::getX()
{
	return this->point->getX();
}

float Shape::getY()
{
	return this->point->getY();
}

/*
int main()
{
	Point2D test;
	test.setX(3);
	test.setY(5);
	int rgb[3] = { 500,233,245 };
	Shape generic(test, rgb);
	generic.render();
		cout << generic.getX();
}*/