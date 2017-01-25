/*
 * WeaponBehavior.h
 *
 *  Created on: Jan 24, 2017
 *      Author: Robert Larson
 */

#ifndef WEAPONBEHAVIOR_H_
#define WEAPONBEHAVIOR_H_

class WeaponBehavior
{
public:
	virtual ~WeaponBehavior() {}
	virtual void useWeapon() = 0;
};


#endif /* WEAPONBEHAVIOR_H_ */
