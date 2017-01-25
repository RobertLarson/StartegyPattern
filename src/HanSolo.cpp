/*
 * HanSolo.cpp
 *
 *  Created on: Jan 24, 2017
 *      Author: Robert Larson
 */

#include "HanSolo.h"

#include "WeaponBehavior.h"

#include <iostream>

HanSolo::HanSolo() {
	m_name = std::string("Han Solo");
}

HanSolo::~HanSolo() {
}

void HanSolo::Fight()
{
	std::cout << m_name << ": ";
	m_pWeaponBehavior->useWeapon();
}
