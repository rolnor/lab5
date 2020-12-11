#include <shapes.h>

void Rectangle::render(SDL_Renderer* renderer)
{
	cout << "Rectangle" << endl << "Width: " << this->width << " Height: " << this->height << endl;
	cout << "Position:  X = " << this-> getX() << " Y = " << this->getY() << endl << endl;
//	SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
	SDL_SetRenderDrawColor(renderer, this->getrgb(0), this->getrgb(1), this->getrgb(2), this->getrgb(3));
	SDL_RenderDrawLine(renderer, this->getX(), this->getY(), this->getX() + this->width, this->getY());
	SDL_RenderDrawLine(renderer, this->getX(), this->getY(), this->getX(), this->getY() + this->height);
	SDL_RenderDrawLine(renderer, this->getX() + this->width, this->getY(), this->getX() + this->width, (int)this->getY() + this->height);
	SDL_RenderDrawLine(renderer, this->getX(), this->getY() + this->height, this->getX() + this->width, (int)this->getY() + this->height);

}

void Triangle::render(SDL_Renderer* renderer)
{
	cout << "Triangle" << endl << "Base: " << this->base << " Height: " << this->height << endl;
	cout << "Position:  X = " << this->getX() << " Y = " << this->getY() << endl << endl;
	SDL_SetRenderDrawColor(renderer, this->getrgb(0), this->getrgb(1), this->getrgb(2), this->getrgb(3));
	SDL_RenderDrawLine(renderer, this->getX(), this->getY(), this->getX(), this->getY()+this->height);
	SDL_RenderDrawLine(renderer, this->getX(), this->getY()+this->height, this->getX() + this->base, this->getY() + this->height);
	SDL_RenderDrawLine(renderer, this->getX(), this->getY(), this->getX() + this->base, this->getY() + this->height);
}

void Circle::render(SDL_Renderer* renderer)
{
	cout << "Circle" << endl << "Radius: " << this->radius << endl;
	cout << "Position:  X = " << this->getX() << " Y = " << this->getY() << endl << endl;
}
