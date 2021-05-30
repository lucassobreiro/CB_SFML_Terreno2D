#include "base.hpp"

int u_treeD = DT_TREE_D;
int u_treeH_min = DT_TREE_H_MIN;
int u_treeH_max = DT_TREE_H_MAX;
int u_freq = DT_FREQ;

void custom(Event evt){
	//generate new terrain
	if(evt.key.code == Keyboard::Space)
		newTerrain(u_treeD, u_treeH_min, u_treeH_max, u_freq);

	//terrain frequency
	if(evt.key.code == Keyboard::Num1 && u_freq > 2)
	{
		u_freq --;
		std::cout << "terrain frequency: " << u_freq-1 << std::endl;
	}
	else if(evt.key.code == Keyboard::Num2)
	{
		u_freq ++;
		std::cout << "terrain frequency: " << u_freq-1 << std::endl;
	}

	//tree density
	if(evt.key.code == Keyboard::Q && u_treeD > 1)
	{
		u_treeD --;
		std::cout << "tree density: " << u_treeD << std::endl;
	}
	else if(evt.key.code == Keyboard::W)
	{
		u_treeD ++;
		std::cout << "tree density: " << u_treeD << std::endl;
	}

	//tree height - min
	if(evt.key.code == Keyboard::Z && u_treeH_min > 1)
	{
		u_treeH_min --;
		std::cout << "tree min height: " << u_treeH_min << std::endl;
	}
	else if(evt.key.code == Keyboard::X)
	{
		u_treeH_min ++;
		std::cout << "tree min height: " << u_treeH_min << std::endl;
	}

	//tree height - MAX
	if(evt.key.code == Keyboard::A && u_treeH_max > 1)
	{
		u_treeH_max --;
		std::cout << "tree max height: " << u_treeH_max << std::endl;
	}
	else if(evt.key.code == Keyboard::S)
	{
		u_treeH_max ++;
		std::cout << "tree max height: " << u_treeH_max << std::endl;
	}

	//generate new color
	if(evt.key.code == Keyboard::C)
		newColor(rand()%256, rand()%256, rand()%256, true);

	//reset to default config
	if(evt.key.code == Keyboard::R)
	{
		u_treeD = DT_TREE_D;
		u_treeH_min = DT_TREE_H_MIN;
		u_treeH_max = DT_TREE_H_MAX;
		u_freq = DT_FREQ;
		std::cout << "config reseted" << std::endl;
	}
}
