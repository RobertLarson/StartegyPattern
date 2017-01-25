/*
 * Chewy.h
 *
 *  Created on: Jan 24, 2017
 *      Author: Robert Larson
 */

#ifndef CHEWY_H_
#define CHEWY_H_

#include "StarWarsCharacter.h"

class Chewy: public StarWarsCharacter {
public:
	Chewy();
	virtual ~Chewy();

	virtual void Fight();
};

#endif /* CHEWY_H_ */
