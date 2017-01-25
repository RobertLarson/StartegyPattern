/*
 * LukeSkywalker.h
 *
 *  Created on: Jan 24, 2017
 *      Author: Robert Larson
 */

#ifndef LUKESKYWALKER_H_
#define LUKESKYWALKER_H_

#include "StarWarsCharacter.h"

class LukeSkywalker: public StarWarsCharacter {
public:
	LukeSkywalker();
	virtual ~LukeSkywalker();

	virtual void Fight();

};

#endif /* LUKESKYWALKER_H_ */
