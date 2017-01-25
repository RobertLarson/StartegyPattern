/*
 * LightSaber.h
 *
 *  Created on: Jan 24, 2017
 *      Author: Robert Larson
 */

#ifndef LIGHTSABER_H_
#define LIGHTSABER_H_

#include "WeaponBehavior.h"

class LightSaberBehavior: public WeaponBehavior {
public:
	LightSaberBehavior();
	virtual ~LightSaberBehavior();

	virtual void useWeapon();
};

#endif /* LIGHTSABER_H_ */
