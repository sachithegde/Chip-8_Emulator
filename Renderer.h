#pragma once
#include <cstdint>
class SDL_Window;
class SDL_Renderer;
class SDL_Texture;
class Renderer
{
public:
	Renderer(char const* title, int windowWidth, int windowHeight, int textureWidth, int textureHeight);
	~Renderer();
	void Update(void const* buffer, int pitch);
	bool ProcessInput(uint8_t* keys);
private:
	SDL_Window* window{};
	SDL_Renderer* renderer{};
	SDL_Texture* texture{};
};