////////////////////////////////////////////////////////////////////////////////
//
// (C) 2010 Sarah Eris Horsley Caffee
//
// utils
//
// Library of general utility functions.
//
////////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include <limits>

using namespace std;

#define DEBUG

#include "utils.h"


// lstrip()
void test_lstrip(void)
   {
   cout << "------------------------------------------------" << endl << "Testing lstrip():" << endl;

   string s;

   s = "This has no leading or trailing space.";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << lstrip(s) << "<" << endl;

   s = " \t\n  This has leading space.";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << lstrip(s) << "<" << endl;

   s = "This has trailing space. \t\n  ";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << lstrip(s) << "<" << endl;

   s = " \t\n  This has both leading and trailing space. \t\n  ";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << lstrip(s) << "<" << endl;

   s = " 1 ";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << lstrip(s) << "<" << endl;
   
   s = "   ";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << lstrip(s) << "<" << endl;
  
   s = "";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << lstrip(s) << "<" << endl;
   }

// rstrip()
void test_rstrip(void)
   {
   cout << "------------------------------------------------" << endl << "Testing rstrip():" << endl;

   string s;

   s = "This has no leading or trailing space.";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << rstrip(s) << "<" << endl;

   s = " \t\n  This has leading space.";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << rstrip(s) << "<" << endl;

    s = "This has trailing space. \t\n  ";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << rstrip(s) << "<" << endl;

   s = " \t\n  This has both leading and trailing space. \t\n  ";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << rstrip(s) << "<" << endl;

   s = " 1 ";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << rstrip(s) << "<" << endl;

   s = "   ";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << rstrip(s) << "<" << endl;

   s = "";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << rstrip(s) << "<" << endl;
   }

// strip()
void test_strip(void)
   {
   cout << "------------------------------------------------" << endl << "Testing strip():" << endl;

   string s;

   s = "This has no leading or trailing space.";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << strip(s) << "<" << endl;

   s = " \t\n  This has leading space.";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << strip(s) << "<" << endl;

   s = "This has trailing space. \t\n  ";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << strip(s) << "<" << endl;

   s = " \t\n  This has both leading and trailing space. \t\n  ";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << strip(s) << "<" << endl;

   s = " 1 ";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << strip(s) << "<" << endl;

   s = "   ";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << strip(s) << "<" << endl;

   s = "";
   cout << "s before: " << ">" << s << "<" << endl;
   cout << "s after: " << ">" << strip(s) << "<" << endl;
   }


void test_stob()
   {
   cout << "------------------------------------------------" << endl << "Testing stob():" << endl;

   string s;
   bool b;
   bool def;

  
   s = "false";
   def = true;
   b = stob(s, def);
   cout << "stob(\"" << s << "\", " << boolalpha << def << ") returned " << b << endl << noboolalpha;

   s = "False";
   def = true;
   b = stob(s, def);
   cout << "stob(\"" << s << "\", " << boolalpha << def << ") returned " << b << endl << noboolalpha;

   s = " FALSE ";
   def = true;
   b = stob(s, def);
   cout << "stob(\"" << s << "\", " << boolalpha << def << ") returned " << b << endl << noboolalpha;

   s = "sdfsd sadf";
   def = true;
   b = stob(s, def);
   cout << "stob(\"" << s << "\", " << boolalpha << def << ") returned " << b << endl << noboolalpha;

   s = "0";
   def = true;
   b = stob(s, def);
   cout << "stob(\"" << s << "\", " << boolalpha << def << ") returned " << b << endl << noboolalpha;

   s = "000";
   def = true;
   b = stob(s, def);
   cout << "stob(\"" << s << "\", " << boolalpha << def << ") returned " << b << endl << noboolalpha;

   s = " 0 ";
   def = true;
   b = stob(s, def);
   cout << "stob(\"" << s << "\", " << boolalpha << def << ") returned " << b << endl << noboolalpha;

   s = "true";
   def = false;
   b = stob(s, def);
   cout << "stob(\"" << s << "\", " << boolalpha << def << ") returned " << b << endl << noboolalpha;

   s = "True";
   def = false;
   b = stob(s, def);
   cout << "stob(\"" << s << "\", " << boolalpha << def << ") returned " << b << endl << noboolalpha;

   s = " TRUE ";
   def = false;
   b = stob(s, def);
   cout << "stob(\"" << s << "\", " << boolalpha << def << ") returned " << b << endl << noboolalpha;

   s = " sdflkasd ;flk";
   def = false;
   b = stob(s, def);
   cout << "stob(\"" << s << "\", " << boolalpha << def << ") returned " << b << endl << noboolalpha;

   s = "1";
   def = false;
   b = stob(s, def);
   cout << "stob(\"" << s << "\", " << boolalpha << def << ") returned " << b << endl << noboolalpha;

   s = "1111";
   def = false;
   b = stob(s, def);
   cout << "stob(\"" << s << "\", " << boolalpha << def << ") returned " << b << endl << noboolalpha;

   s = " 1 ";
   def = false;
   b = stob(s, def);
   cout << "stob(\"" << s << "\", " << boolalpha << def << ") returned " << b << endl << noboolalpha;
   }


void test_stof()
   {
   cout << "------------------------------------------------" << endl << "Testing stof():" << endl;

   string s;
   float f, def;

   def = 9.99;

   s = "3.14";
   f = stof(s, def);
   cout << "stof(\"" << s << "\", " << def << ") returned " << f << endl;
   
   s = " 3.14 ";
   f = stof(s, def);
   cout << "stof(\"" << s << "\", " << def << ") returned " << f << endl;
   
   s = " 3.14 asdf";
   f = stof(s, def);
   cout << "stof(\"" << s << "\", " << def << ") returned " << f << endl;
   
   s = " sdf 3.14 sdf";
   f = stof(s, def);
   cout << "stof(\"" << s << "\", " << def << ") returned " << f << endl;
   
   s = "3";
   f = stof(s, def);
   cout << "stof(\"" << s << "\", " << def << ") returned " << f << endl;
   
   s = "3.14e10";
   f = stof(s, def);
   cout << "stof(\"" << s << "\", " << def << ") returned " << f << endl;
   
   s = "3.14E10";
   f = stof(s, def);
   cout << "stof(\"" << s << "\", " << def << ") returned " << f << endl;

   s = " 3.14e10 ";
   f = stof(s, def);
   cout << "stof(\"" << s << "\", " << def << ") returned " << f << endl;
   
   s = "    ";
   f = stof(s, def);
   cout << "stof(\"" << s << "\", " << def << ") returned " << f << endl;
   
   s = "";
   f = stof(s, def);
   cout << "stof(\"" << s << "\", " << def << ") returned " << f << endl;
   }

void test_stoi()
   {
   cout << "------------------------------------------------" << endl << "Testing stoi():" << endl;

   string s;
   int i, def;

   def = 9999;

   s = "123";
   i = stoi(s, def);
   cout << "stoi(\"" << s << "\", " << def << ") returned " << i << endl;

   s = " 123 ";
   i = stoi(s, def);
   cout << "stoi(\"" << s << "\", " << def << ") returned " << i << endl;

   s = "123 asd";
   i = stoi(s, def);
   cout << "stoi(\"" << s << "\", " << def << ") returned " << i << endl;

   s = " sad 123 123 fdsaf";
   i = stoi(s, def);
   cout << "stoi(\"" << s << "\", " << def << ") returned " << i << endl;

   s = "3.1";
   i = stoi(s, def);
   cout << "stoi(\"" << s << "\", " << def << ") returned " << i << endl;

   s = "0x7b";
   i = stoi(s, def);
   cout << "stoi(\"" << s << "\", " << def << ") returned " << i << endl;

   s = "0X7B";
   i = stoi(s, def);
   cout << "stoi(\"" << s << "\", " << def << ") returned " << i << endl;
 
   s = " 0x7b ";
   i = stoi(s, def);
   cout << "stoi(\"" << s << "\", " << def << ") returned " << i << endl;
 
   s = "   ";
   i = stoi(s, def);
   cout << "stoi(\"" << s << "\", " << def << ") returned " << i << endl;

   s = "";
   i = stoi(s, def);
   cout << "stoi(\"" << s << "\", " << def << ") returned " << i << endl;


   }

void test_ishex()
   {
   cout << "------------------------------------------------" << endl << "Testing ishex():" << endl;

   string s;
   bool b;

   s = "0123456789ABCDEF";
   b = ishex(s);
   cout << "ishex(\"" << s << "\") returned " << boolalpha << b << noboolalpha << endl;

   s = "0123456789abcdef";
   b = ishex(s);
   cout << "ishex(\"" << s << "\") returned " << boolalpha << b << noboolalpha << endl;

   s = "0X0123456789ABCDEF";
   b = ishex(s);
   cout << "ishex(\"" << s << "\") returned " << boolalpha << b << noboolalpha << endl;

   s = "0x0123456789abcdef";
   b = ishex(s);
   cout << "ishex(\"" << s << "\") returned " << boolalpha << b << noboolalpha << endl;

   s = "asdf";
   b = ishex(s);
   cout << "ishex(\"" << s << "\") returned " << boolalpha << b << noboolalpha << endl;

   s = "0x123g3";
   b = ishex(s);
   cout << "ishex(\"" << s << "\") returned " << boolalpha << b << noboolalpha << endl;

   s = "  ";
   b = ishex(s);
   cout << "ishex(\"" << s << "\") returned " << boolalpha << b << noboolalpha << endl;

   s = "";
   b = ishex(s);
   cout << "ishex(\"" << s << "\") returned " << boolalpha << b << noboolalpha << endl;
   }

void test_all()
   {
   test_lstrip();
   test_rstrip();
   test_strip();
   test_stob();
   test_stof();
   test_stoi();
   test_ishex();
   }

void show_menu(void)
   {
   cout << endl << endl
	<< "Which function should be tested?" << endl
	<< "0)      All" << endl << endl
	<< "1)      lstrip()" << endl
	<< "2)      rstrip()" << endl
	<< "3)      strip()" << endl
	<< "4)      stob()" << endl
	<< "5)      stof()" << endl
	<< "6)      stoi()" << endl
	<< "7)      ishex()" << endl
	<< endl
	<< "9999    Quit" << endl;
   }

int main(int argc, char ** argv)
   {
   int choice = -1;

   while (choice != 9999)
      {
      show_menu();
      cin >> choice;
      if(!std::cin)
	 {
	 cin.clear();
	 cin.ignore(numeric_limits<streamsize>::max(),'\n');
	 }
      if (choice != 9999)
	 {
	 switch (choice)
	    {
	    case 0:
	       test_all();
	       break;
	    case 1:
	       test_lstrip();
	       break;
	    case 2:
	       test_rstrip();
	       break;
	    case 3:
	       test_strip();
	       break;
	    case 4:
	       test_stob();
	       break;
	    case 5:
	       test_stof();
	       break;
	    case 6:
	       test_stoi();
	       break;
	    case 7:
	       test_ishex();
	       break;
	    default:
	       cout << "Unrecognized choice.  Please try again." << endl;
	    }
	 choice = -1;
	 }
      }

   }

