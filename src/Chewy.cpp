/*
 * Chewy.cpp
 *
 *  Created on: Jan 24, 2017
 *      Author: Robert Larson
 */

#include "Chewy.h"

#include "WeaponBehavior.h"

#include <iostream>

Chewy::Chewy() {
	m_name = std::string("Chewy");
}

Chewy::~Chewy() {
}

void Chewy::Fight()
{
	std::cout << m_name << ": ";
	m_pWeaponBehavior->useWeapon();
}
