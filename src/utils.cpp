////////////////////////////////////////////////////////////////////////////////
//
// (C) 2010 Sarah Eris Horsley Caffee
//
// utils
//
// Library of general utility functions.
//
////////////////////////////////////////////////////////////////////////////////

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <sstream>


#define DEBUG

#include "utils.h"


/******************************************************************************/
std::string & lstrip(std::string & s)
   {
   size_t i = 0;
   while (i < s.length() && isspace(s[i]))
      i++;
   if (i > 0) 
      s.erase(0, i);
   return s;
   }

/******************************************************************************/
std::string & rstrip(std::string & s)
   {
   size_t i;

   i = s.length();
   while (i > 0)
      {
      if (!isspace(s[i-1]))
	 break;
      i--;
      }
   s.erase(i, s.length()-i);
   return s;
   }

/******************************************************************************/
std::string & strip(std::string & s)
   {
   lstrip(s);
   rstrip(s);
   return s;
   }

/******************************************************************************/
bool stob(std::string s, bool def)
   {
   strip(s);

   // First try extracting as an integer.  If we get a 1 or 0 then we're done.
   int v = stoi(s, -1);
   if (v == 0)
      return false;
   else if (v == 1)
      return true;

   // Why not use stringstream?  Because it only recognizes lowercase words.
   std::transform(s.begin(), s.end(), s.begin(), tolower);

   if (s == "false") 
      return false;
   else if (s == "true") 
      return true;
   else 
      return def;
   }


/******************************************************************************/
std::string & btos(bool b, std::string & s)
   {
   std::stringstream ss;

   s.clear();
   ss << b;
   ss >> s;
   return s;
   }

/******************************************************************************/
std::string & ftos(float f, std::string & s)
   {
   std::stringstream ss;

   s.clear();
   ss << f;
   ss >> s;
   return s;
   }


/******************************************************************************/
std::string & itos(int i, std::string & s)
   {
   std::stringstream ss;

   s.clear();
   ss << i;
   ss >> s;
   return s;
   }


/******************************************************************************/
float stof(std::string s, float def)
   {
   float value;
   std::stringstream ss;

   strip(s);
   ss << s;
   ss >> std::noskipws >> value;
   if (ss.eof() && !ss.fail()) 
      return value;
   else 
      return def;
   }


/******************************************************************************/
int stoi(std::string s, int def)
   {
   int value;
   std::stringstream ss;

   strip(s);
   if (ishex(s)) 
      ss << std::hex << s;
   else 
      ss << s;
   ss >> std::noskipws >> value;
   if (ss.eof() && !ss.fail()) 
      return value;
   else 
      return def;
   }


/******************************************************************************/
/* Note that ishex() requires the string s to have no trailing or leading
   whitespace.  Also, the string _must_ begin with 0x or 0X.
 */
bool ishex(const std::string & s)
   {
   if ((s.length() > 2) && (s[0] == '0') && ((s[1] == 'x') || s[1] == 'X'))
      {
      for (int i = 2; i < s.length(); i++)
	 {
	 if (!isxdigit(s[i])) return false;
	 }
      return true;
      }
   return false;
   }

