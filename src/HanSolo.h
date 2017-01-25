/*
 * HanSolo.h
 *
 *  Created on: Jan 24, 2017
 *      Author: Robert Larson
 */

#ifndef HANSOLO_H_
#define HANSOLO_H_

#include "StarWarsCharacter.h"

class HanSolo: public StarWarsCharacter {
public:
	HanSolo();
	virtual ~HanSolo();

	virtual void Fight();
};

#endif /* HANSOLO_H_ */
