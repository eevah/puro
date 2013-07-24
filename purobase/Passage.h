/*
 * Passage.h
 *
 *  Created on: Jul 12, 2013
 *      Author: oek
 */

#ifndef PASSAGE_H_
#define PASSAGE_H_

#include "Puro.h"

#define PASSAGE_MAX_SIZE 128

struct PassageEntry {
	float time;
	float value;
};

class Passage {
	uint16_t capacity_;
	uint16_t size_;
	PassageEntry* list_;
public:
	Passage(uint16_t capacity);
	uint16_t GetSize();
	float GetTime(uint16_t index);
	float GetValue(uint16_t index);
	void SetSize(uint16_t size);
	void SetEntry(uint16_t index, float time, float value);
};

#endif /* PASSAGE_H_ */
