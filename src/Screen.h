#include <iostream>
#include <SDL/SDL.h>
#include <pthread.h>
#include <string>

class Screen {
  private:
  	SDL_Surface *screen;

  public:
  	//constructor and destructor
  	Screen(std::string);
  	~Screen();

	//operations
	//void addObject(GraphicObject obj);

	//GraphicObject* getObject(String id);
};
