#include <shapes.h>
#include <vector>

void testRendering(vector<Shape *> shapes);
void changeColor(int colors[4], int val1, int val2, int val3, int val4);

int main()
{
	Point2D test;
	vector<Shape *> shapes;
	test.setX(3);
	test.setY(5);

	int rgb[4] = { 100,233,245,44 };
	Circle circle(test, rgb, 1);
	test.setX(7);
	test.setY(8);
	changeColor(rgb, 22, 33, 44, 55);
	Triangle triangle(test, rgb, 5, 6);
	test.setX(17);
	test.setY(38);
	changeColor(rgb, 122, 133, 144, 155);
	Rectangle rectangle(test, rgb, 35, 46);
	// new Circle(test, rgb, 1)
	shapes.push_back(&circle);
	shapes.push_back(&triangle);
	shapes.push_back(&rectangle);
	testRendering(shapes);
}


void testRendering(vector<Shape *> shapes)
{
	for (auto iterator = shapes.begin(); iterator < shapes.end(); iterator++)
	{
		iterator[0]->render();
	}
}

void changeColor(int colors[4],int val1, int val2, int val3, int val4)
{
	colors[0] = val1;
	colors[1] = val2;
	colors[2] = val3;
	colors[3] = val4;
}