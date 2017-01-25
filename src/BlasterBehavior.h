/*
 * BlasterBehavior.h
 *
 *  Created on: Jan 24, 2017
 *      Author: Robert Larson
 */

#ifndef BLASTERBEHAVIOR_H_
#define BLASTERBEHAVIOR_H_

#include "WeaponBehavior.h"

class BlasterBehavior: public WeaponBehavior {
public:
	BlasterBehavior();
	virtual ~BlasterBehavior();

	virtual void useWeapon();
};

#endif /* BLASTERBEHAVIOR_H_ */
