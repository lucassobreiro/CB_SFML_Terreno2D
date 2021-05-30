/*
-- Gerador de Terreno 2D --
By lucassobreiro
May 2021
*/

#include "base.hpp"
#include "terrainRec.hpp"

RenderWindow window(VideoMode(RESX, RESY), "Gerador de terreno 2D", Style::Close);
//RenderWindow window(VideoMode(RESX, RESY), "Gerador de terreno 2D", Style::Fullscreen);

terrainRec t_Rec[LIMIT];

RectangleShape waterRec(Vector2f(RESX, WATERSIZE));
RectangleShape sunRec(Vector2f(SUNSIZE, SUNSIZE));

Sprite bgSpr, cloudsSpr;

Texture tileTex;
Texture treeTex;

int main(void)
{
	std::cout << "-- Gerador de Terreno 2D --\nBy lucassobreiro\nMay 2021\n\n";

	srand(time(NULL));
	window.setKeyRepeatEnabled(true);
	window.setVerticalSyncEnabled(true);

	//textures
	Texture bgTex;
	Texture cloudsTex;
	Texture waterTex;

	if(!bgTex.loadFromFile("images/background.png")
	|| !cloudsTex.loadFromFile("images/clouds.png")
	|| !tileTex.loadFromFile("images/tile.png")
	|| !treeTex.loadFromFile("images/tree.png")
	|| !waterTex.loadFromFile("images/water.png"))return -1;

	bgSpr.setTexture(bgTex);
	cloudsTex.setRepeated(true);
	cloudsSpr.setColor(Color(255, 255, 255, 100));
	cloudsSpr.setTexture(cloudsTex);
	tileTex.setRepeated(true);
	waterTex.setRepeated(true);

	//water
	waterRec.setPosition(0.0f, RESY - WATERSIZE);
	waterRec.setTexture(&waterTex);
	waterRec.setTextureRect(IntRect(0, 0, waterRec.getSize().x, waterRec.getSize().y));

	//sun
	sunRec.setPosition(Vector2f(256, 64));
	sunRec.setFillColor(Color::Yellow);

	newTerrain(DT_TREE_D, DT_TREE_H_MIN, DT_TREE_H_MAX, DT_FREQ);

	//update
	while(window.isOpen())
	{
		update();
		draw();
	}
	return 0;
}
