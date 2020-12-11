#include <shapes.h>
#include <vector>
#include <SDL.h>

void testRendering(vector<Shape *> shapes);
void changeColor(int colors[4], int val1, int val2, int val3, int val4);

int main(int argc, char* args[])
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
	shapes.push_back(&circle);
	shapes.push_back(&triangle);
	shapes.push_back(&rectangle);
	testRendering(shapes);

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *window = SDL_CreateWindow("title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);

	SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);

	SDL_Delay(3000);

	return 0;
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