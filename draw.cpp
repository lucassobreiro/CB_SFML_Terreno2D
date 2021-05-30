#include "base.hpp"
#include "terrainRec.hpp"

extern RenderWindow window;

extern terrainRec t_Rec[LIMIT];

extern RectangleShape waterRec;
extern RectangleShape sunRec;

extern Sprite bgSpr, cloudsSpr;

void draw(void)
{
	window.draw(bgSpr);
	window.draw(sunRec);
	window.draw(cloudsSpr);
	window.draw(waterRec);
	for(int a=0; a<LIMIT; a++)
	{
		window.draw(t_Rec[a].rec);
		window.draw(t_Rec[a].recB);
		window.draw(t_Rec[a].treeRec);
		window.draw(t_Rec[a].treeWRec);
	}
	window.display();
}
