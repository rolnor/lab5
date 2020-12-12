#include <point2d.h>
#include <shapes.h>
#include <SDL.h>
#include <vector>

//void createObject(Shape* object);
void changeColor(int colors[4], int val1, int val2, int val3, int val4);
void pushRectangle(vector<Shape*> &shapes);
void pushTriangle(vector<Shape*> shapes);
void pushCircle(vector<Shape*> shapes);
void testRendering(vector<Shape*> shapes, SDL_Renderer* renderer);


int main(int argc, char* args[])
{
	vector<Shape*> shapes;
	SDL_Keycode key = NULL;
	SDL_Event event;
	bool quit = false;

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* window = SDL_CreateWindow("title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
	Point2D test;
	int rgb[4] = { 100,233,245,44 };
	test.setX(17);
	test.setY(38);
	Rectangle rectangle(test, rgb, 35, 46);
	changeColor(rgb, 22, 33, 44, 55);
	test.setX(107);
	test.setY(108);
	Triangle triangle(test, rgb, 150, 160);
	Triangle triangle2(test, rgb, 250, 260);
	shapes.push_back(&triangle2);



	while(!quit)
	{
		SDL_WaitEvent(&event);

		switch (event.type)
		{		
			case SDL_QUIT:
				quit = true;
				break;
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym)
				{
					case SDLK_q:
						quit = true;
						break;
					case SDLK_c:
						cout << "circle" << endl;
						break;
					case SDLK_r:
						cout << "rectangle" << endl;
						shapes.push_back(&rectangle);
						break;
					case SDLK_t:
						cout << "triangle" << endl;
						shapes.push_back(&triangle);
						break;
					case SDLK_x:
						cout << "remove shapes" << endl;
						break;
				}
		}
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		SDL_RenderClear(renderer);
		testRendering(shapes, renderer);
		SDL_RenderPresent(renderer);
	}
	//SDL_Delay(2000);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}

void pushRectangle(vector<Shape*> &shapes)
{
	Point2D test;

	int rgb[4] = { 100,233,245,44 };
	test.setX(17);
	test.setY(38);
//	changeColor(rgb, 0, 0, 255, 155);
	Rectangle rectangle(test, rgb, 35, 46);
	shapes.push_back(&rectangle);
}

void pushTriangle(vector<Shape*> shapes)
{
	Point2D test;
	int rgb[4] = { 22, 33, 44, 55 };
	test.setX(107);
	test.setY(108);
	Triangle triangle(test, rgb, 150, 160);
	shapes.push_back(&triangle);
}

void pushCircle(vector<Shape*> shapes)
{
	Point2D test;
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
}


/*
void changeColor(int colors[4], int val1, int val2, int val3, int val4)
{
	colors[0] = val1;
	colors[1] = val2;
	colors[2] = val3;
	colors[3] = val4;
}*/
