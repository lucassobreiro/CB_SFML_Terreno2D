#ifndef BASE_HPP_INCLUDED
#define BASE_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include <iostream>
#include <time.h>

using namespace sf;

//screen size
#define RESX 1280
#define RESY 720

#define RECSIZE 16
#define LIMIT 80
#define WATERSIZE 256
#define SUNSIZE 64

//default terrain configs
#define DT_TREE_D 4
#define DT_TREE_H_MIN 3
#define DT_TREE_H_MAX 5
#define DT_FREQ 4

void newTerrain(int treeD, int treeH_min, int treeH_max, int freq);
int newColor(int color_r, int color_g, int color_b, bool bg);
void custom(Event evt);
void update(void);
void draw(void);

#endif // BASE_HPP_INCLUDED
