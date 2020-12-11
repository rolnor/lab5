#pragma once
#include <point2d.h>
#include <SDL.h>

class Shape
{
private:
	int rgb[3] = { 0,0,0 };
	Point2D* point;
public:
	virtual void render(SDL_Renderer* renderer);
	Shape(Point2D& inPoint, int rgbAlpha[4]);
	~Shape();
	int getrgb(int index);
	float getX();
	float getY();
};

class Rectangle : public Shape
{
private:
	int width, height;
public:
	Rectangle(Point2D inPoint, int inRgb[], int width, int height) : Shape(inPoint, inRgb), width(width), height(height) {};
	void render(SDL_Renderer* renderer);
};

class Triangle : public Shape
{
private:
	int base, height;
public:
	Triangle(Point2D inPoint, int inRgb[], int base, int height) : Shape(inPoint, inRgb), base(base), height(height) {};
	void render(SDL_Renderer* renderer);
};

class Circle : public Shape
{
private:
	int radius;
public:
	Circle(Point2D inPoint, int inRgb[], int radius) : Shape(inPoint, inRgb), radius(radius) {};
	void render(SDL_Renderer* renderer);
};




