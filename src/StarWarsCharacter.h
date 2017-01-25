/*
 * StarWarsCharacter.h
 *
 *  Created on: Jan 24, 2017
 *      Author: Robert Larson
 */

#ifndef STARWARSCHARACTER_H_
#define STARWARSCHARACTER_H_

#include <string>

class WeaponBehavior;

class StarWarsCharacter {
public:
	StarWarsCharacter();
	virtual ~StarWarsCharacter();

	virtual void Fight() = 0;

	virtual void SetWeaponBehavior(WeaponBehavior * weaponBehavior)
	{ m_pWeaponBehavior = weaponBehavior; }
protected:
	WeaponBehavior * m_pWeaponBehavior;
	std::string      m_name;

};

#endif /* STARWARSCHARACTER_H_ */
