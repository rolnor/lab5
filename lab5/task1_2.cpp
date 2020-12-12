#include <shapes.h>
#include <vector>
#include <SDL.h>

void testRendering(vector<Shape *> shapes, SDL_Renderer* renderer);
void changeColor(int colors[4], int val1, int val2, int val3, int val4);

/*
int main(int argc, char* args[])
{
	Point2D test;
	vector<Shape *> shapes;
	test.setX(100);
	test.setY(100);

	int rgb[4] = { 100,233,245,44 };
	Circle circle(test, rgb, 30);
	test.setX(107);
	test.setY(108);
	changeColor(rgb, 22, 33, 44, 55);
	Triangle triangle(test, rgb, 150, 160);
	test.setX(17);
	test.setY(38);
	changeColor(rgb, 122, 133, 144, 155);
	Rectangle rectangle(test, rgb, 35, 46);
	shapes.push_back(&circle);
	shapes.push_back(&triangle);
	shapes.push_back(&rectangle);
	

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *window = SDL_CreateWindow("title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);


	
	SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255);

	SDL_RenderClear(renderer);
	testRendering(shapes, renderer);
	SDL_RenderPresent(renderer);
	
	SDL_Delay(8000);
	return 0;
}*/


void testRendering(vector<Shape *> shapes, SDL_Renderer* renderer)
{
	for (auto iterator = shapes.begin(); iterator < shapes.end(); ++iterator)
	{
		iterator[0]->render(renderer);
	}
}

void changeColor(int colors[4],int val1, int val2, int val3, int val4)
{
	colors[0] = val1;
	colors[1] = val2;
	colors[2] = val3;
	colors[3] = val4;
}