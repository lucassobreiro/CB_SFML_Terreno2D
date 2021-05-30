#ifndef UPDATE_HPP_INCLUDED
#define UPDATE_HPP_INCLUDED

#include "terrainRec.hpp"

extern RenderWindow window;

extern terrainRec t_Rec[LIMIT];

extern RectangleShape waterRec;
extern Sprite cloudsSpr;

extern Texture tileTex;
extern Texture treeTex;

extern float bgPosX;
extern float waterPosX;

float bgPosX = 0;
float waterPosX = 0;
Clock cl;
float deltaTime;

std::string ss_fileName = "screenshot";

#endif // UPDATE_HPP_INCLUDED
