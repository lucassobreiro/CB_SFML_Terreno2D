#include "base.hpp"
#include "terrainRec.hpp"

extern terrainRec t_Rec[LIMIT];
extern RectangleShape waterRec;
extern RectangleShape sunRec;
extern Sprite bgSpr;
extern Sprite cloudsSpr;

int newColor(int color_r, int color_g, int color_b, bool bg)
{
	if(bg)
	{
		bgSpr.setColor(Color(color_r, color_g, color_b));
		cloudsSpr.setColor(Color(color_r, color_g, color_b));
		waterRec.setFillColor(Color(color_r, color_g, color_b));
		sunRec.setFillColor(Color(color_r, color_g, color_b));

		return newColor(rand()%256, rand()%256, rand()%256, false);
	}
	else
	{
		for(int a=0; a<LIMIT; a++)
		{
			t_Rec[a].rec.setFillColor(Color(color_r, color_g, color_b));
			t_Rec[a].recB.setFillColor(Color(color_r, color_g, color_b));
			t_Rec[a].treeWRec.setFillColor(Color(color_r, color_g, color_b));
			t_Rec[a].treeRec.setFillColor(Color(color_r, color_g, color_b));
		}

		return 0;
	}
}
