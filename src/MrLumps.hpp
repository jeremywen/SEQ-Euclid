#pragma once
#include "rack.hpp"

using namespace rack;
extern Plugin *plugin;

struct SEQEuclidWidget : ModuleWidget { 
	SEQEuclidWidget(); 
};

struct MyBlueValueLight : ModuleLightWidget {
	MyBlueValueLight() {
		firstLightId = 1;
		addBaseColor(nvgRGB(25, 150, 252));
	}
};
