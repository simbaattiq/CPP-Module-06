

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>


#include <sstream>
#include <string>

enum 
{
    CHARTYPE,
    INTTYPE,
    FLOTYPE,
    DOUTYPE,
    UNKNOWN,
};


class ScalarConverter
{
public:
    // Member Vars
    static std::string str;
    static char convChar;
    static int convInt;
    static float convFloat;
    static double convDouble;


private:

    // Canonical Ortho
    ScalarConverter(void);
    ~ScalarConverter(void);
    ScalarConverter(const ScalarConverter& other);
    ScalarConverter& operator=(const ScalarConverter& other);

    // Conversion utils
    static int parseType(std::string & value); ////


    static void  convertToChar(std::string & value);
    static void  convertToInt(std::string & value);
    static void convertToFloat(std::string & value);
    static void convertToDouble(std::string & value);

    // Display
    static void displayResults(void);


public:
    static void convert(std::string value);

};



#endif