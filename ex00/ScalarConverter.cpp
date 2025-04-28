

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::~ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter & other) { (void)other; }

ScalarConverter& ScalarConverter::operator=(const ScalarConverter & other) { (void)other; return *this; }


// int ScalarConverter::parseType(std::string & value)
// {
//     // 4 types
//     if (value.length() <= 3 && )

// }

// void ScalarConverter::convert(std::string & value)
// {
//     str = value;
//     int type = parseType(value);

//     switch (type)
//     {
//     case CHARTYPE:
//         convertToChar(str);
//         break;
//     case INTTYPE:
//         convertToInt(str);
//         break;
//     case FLOTYPE:
//         convertToFloat(str);
//         break;
//     case DOUTYPE:
//         convertToDouble(str);
//         break;

//     default:
//         break;
//     }
// }

// void ScalarConverter::convertToChar(std::string & value)
// {
//     if (value[0] != '\'' || (value.length() - 1) != '\'' )
//     {
//         std::cout << "char: impossible\n";
//         return ;
//     }
//     if (!isprint(value[1]))
//     {
//         std::cout << "char: Non displayable\n";
//         return ;
//     }

//     char c = value[1];
//     int i = static_cast<int>(c);
//     float f = static_cast<float>(c);
//     double d = static_cast<int>(c);

//     std::cout << "char: " << c << '\n';
//     std::cout << "int: " << i << '\n';
//     std::cout << "float: " << f << '\n';
//     std::cout << "double: " << d << '\n';

// }

// bool isChar(int c)
// {
//     if (c > 0 && c < 127)
//         return 1; //s
//     return 0; // f
// }


// void ScalarConverter::convertToInt(std::string & value)
// {
//     std::istringstream issC(value);
//     std::istringstream issI(value);
//     std::istringstream issF(value);
//     std::istringstream issD(value);
//     int i;
//     float f;
//     double d;
//     char c;

//     // char handle
//     if (!(issC >> c) || !(issC.eof()) || c > 127 || c < 0)
//         std::cout << "char: impossible\n";
//     else if (c >= 0 && c <= 13)
//         std::cout << "char: Non displayable\n";
//     else
//         std::cout << "char: " << c << '\n';
    
//     // int handle
//     if (!(issI >> i) || !(issI.eof()))
//         std::cout << "int: impossible\n";
//     else
//         std::cout << "int: " << i << '\n';
    

//     // Float handle
//     if (!(issF >> f) || !(issF.eof()))
//         std::cout << "float: impossible\n";
//     else
//         std::cout << "float: " << f << '\n';

//     // Double handle
//     if (!(issD >> d) || !(issD.eof()))
//         std::cout << "double: impossible\n";


    
// }

void handleChar(std::string value)
{
    char c;
    int i;
    float f;
    double d;

    std::istringstream iss(value);

// U Nedd another way to check if u got one char
    if (!(iss >> c) || (c >= 127 || c < 0)) //
        std::cout << "char: impossible\n";
    // else if (!(iss >> c) || (c >= 0 && c <= 13))
    else if ((c >= 0 && c <= 13))
        std::cout << "char: Non displayable [" << c << "]\n";
    else
    {
        std::cout << "char: " << c << '\n';
    }


    i = static_cast<int>(c);
    f = static_cast<float>(c);
    d = static_cast<double>(c);

    std::cout << "int: " << i << '\n';
    std::cout << "float: " << f << '\n';
    std::cout << "double: " << d << '\n';


    iss.clear(); //

}

void ScalarConverter::convert(std::string value)
{

    //////
    if (value.length() >= 3 && value[0] == '\'' && value[2] == '\'')
        std::cout << "Lenght is Bigger than [3]\n"; // char in  s-quotes
    

    handleChar(value);

    // int handle
    // if (!(issI >> i))
    //     std::cout << "int: impossible\n";
    // else
    //     std::cout << "int: " << i << '\n';
    

    // // Float handle
    // if (!(issF >> f) || !issF.eof())
    //     std::cout << "float: impossible\n";
    // else
    //     std::cout << "float: " << static_cast<float>(f) << '\n';

    // // Double handle
    // if (!(issD >> d))
    //     std::cout << "double: impossible\n";
    // else 
    //     std::cout << "double: " << d << '\n';
}


// 2nd convert 
// void ScalarConverter::convert(std::string value)
// {

// }

// void ScalarConverter::convert(std::string & value)
// {
//     str = value;
//     // int type = parseType(value);

//     // check Syntax Errors :
//         // * input: 'c' 42 02.55 5.3f nan nanf ..

// // 77 c 77.0f 77.0
// // 

//     convChar = convertToChar(str);

//     convInt = convertToInt(str);

//     convFloat = convertToFloat(str);

//     convDouble = convertToDouble(str);

// }

// //// char handeling

// int charSyntaxError(std::string & value)
// {

// }

// char ScalarConverter::convertToChar(std::string & value)
// {
//     charSyntaxError();
// }

/*

#include <sstream>
#include <string>

std::string str = "123";
std::istringstream iss(str);
int value;
iss >> value;


*/