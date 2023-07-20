////////////////////////////////////////////////////////////////////////////////
//
// (C) 2010 Sarah Eris Horsley Caffee
//
// utils
//
// Library of general utility functions.
//
////////////////////////////////////////////////////////////////////////////////


#ifndef UTILS_H

#define UTILS_H

#include <string>

#ifdef DEBUG
#include <iostream>
#define DEBUG_PRINT(x) std::cerr << "DEBUG " << x << std::endl << std::flush;
#else
#define DEBUG_PRINT(x)
#endif


std::string & lstrip(std::string & s);
std::string & rstrip(std::string & s);
std::string & strip(std::string & s);

std::string & btos(bool b, std::string & s);
std::string & ftos(float f, std::string & s);
std::string & itos(int i, std::string & s);

bool stob(std::string s, bool def);
float stof(std::string s, float def);
int stoi(std::string s, int def);

bool ishex(const std::string & s);

#endif
