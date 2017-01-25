/*
 * LukeSkywalker.cpp
 *
 *  Created on: Jan 24, 2017
 *      Author: Robert Larson
 */

#include "LukeSkywalker.h"

#include "WeaponBehavior.h"

#include <iostream>

LukeSkywalker::LukeSkywalker() {
	m_name = std::string("Luke Skywalker");
}

LukeSkywalker::~LukeSkywalker() {
}

void LukeSkywalker::Fight()
{
	std::cout << m_name << ": "
	m_pWeaponBehavior->useWeapon();
}

