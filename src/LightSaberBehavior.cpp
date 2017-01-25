/*
 * LightSaber.cpp
 *
 *  Created on: Jan 24, 2017
 *      Author: Robert Larson
 */

#include "LightSaberBehavior.h"

#include <iostream>

LightSaberBehavior::LightSaberBehavior() {
}

LightSaberBehavior::~LightSaberBehavior() {
}

void LightSaberBehavior::useWeapon()
{
	std::cout << "I am using my light saber!\n";
}
