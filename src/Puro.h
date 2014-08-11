// puro - Audio sampler library
//
// Copyright (c) 2013 Olli Erik Keskinen
// All rights reserved.
//
// This code is released under The BSD 2-Clause License.
// See the file LICENSE.txt for information.

#pragma once

#include <stdint.h>
#include <map>
#include <list>
#include <iostream>


#ifdef DEBUG
#define dout std::cout
#else
#define dout 0 && std::cout
#endif
#define dndl std::endl

// 8 characters used as identifier, passed as one 64bit int
typedef uint64_t Tag;
typedef uint64_t Time;

class PuroBase;
class AudioStorage;
class Buffer;
class Drop;
class Engine;
class Idea;
class Interpreter;
class Onset;
class Passage;
class Worker;


class Puro {
	//PuroBase* base_;
public:
	//Puro();
	//~Puro();
    
    virtual void PrepareAudioPassage() = 0;
    virtual void ReturnAudioPassage() = 0;
    
    virtual void PrepareEnvelopePassage() = 0;
    virtual void ReturnEnvelopePassage() = 0;
    
	virtual void SetMaterial(char* idea, char* material_path) = 0;
	virtual void SetSync(char* idea);
	virtual void OnsetDropFromIdea(char* idea, char* time=0);
	virtual void LoadAudioMaterial(char* association, char* path_to_file);
    
    
    
	//Interpreter* GetInterpreter();
	//Engine* GetEngine();
	//const char* HelloWorld();
};


Tag CharsToTag(char*);
void FloatListToPassage(Passage* passage_to_use, uint16_t n_data, float* data);
