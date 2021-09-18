/*
C++ is a general purpopse programming and have OOPs concept. C++ is so powerful and fast.
If you are building an architecture related to performance optimization, then you probably
writing it in C++. 
*/

/*
C++ Concepts:

1. C++ is a compiled language
2. There is two process in C++, first is compilation means, C++
   source code will be translated into a machine language, and
   then linking. Linking is a bunch of code that we compiled
   into one executable file.
3. C++ can be used for OOPs and Generic Programming.
*/

// The including process is called preprocessor directives

#include <iostream>
#include <climits>
#include <float.h>
#include <cmath>

#define DEF 10
#define str(x) #x
#define TABLE_SIZE 100
#define glue(a,b) a ## b

void SizeOf()
{
    std::cout << sizeof(short) << std::endl;                    // Output: 2 bytes or 16 bits
    std::cout << sizeof(int) << std::endl;                      // Output: 4 bytes or 32 bits
    std::cout << sizeof(long) << std::endl;                     // Output: 4 bytes or 32 bits
    std::cout << sizeof(long long) << std::endl;                // Output: 8 bytes or 64 bits
    std::cout << sizeof(unsigned short) << std::endl;           // Output: 2 bytes or 16 bits 
    std::cout << sizeof(unsigned int) << std::endl;             // Output: 4 bytes or 32 bits 
    std::cout << sizeof(unsigned long) << std::endl;            // Output: 4 bytes or 32 bits 
    std::cout << sizeof(unsigned long long) << std::endl;       // Output: 8 bytes or 64 bits 

    // Note: I have test this on Windows 10 with 64 Bits architecture
}

void SizeLimitsMIN()
{
    std::cout << SHRT_MIN << std::endl;         // Output: -32768
    std::cout << INT_MIN << std::endl;          // Output: -2147483648
    std::cout << LONG_MIN << std::endl;         // Output: -2147483648
    std::cout << LLONG_MIN << std::endl;        // Output: -9223372036854775808
}

void SizeLimitsMAX()
{
    std::cout << SHRT_MAX << std::endl;         // Output: 32767
    std::cout << INT_MAX << std::endl;          // Output: 2147483647
    std::cout << LONG_MAX << std::endl;         // Output: 2147483647
    std::cout << LLONG_MAX << std::endl;        // Output: 9223372036854775807
}

void SizeOfLimitsUnsigned()
{
    std::cout << USHRT_MAX << std::endl;        // Output: 65535
    std::cout << UINT_MAX << std::endl;         // Output: 4294967295
    std::cout << ULONG_MAX << std::endl;        // Output: 4294967295
    std::cout << ULLONG_MAX << std::endl;       // Output: 18446744073709551615
}

void FloatDigits()
{
    std::cout << FLT_DIG << std::endl;      // Output: 6    --> which means in float we can store up to 6 digits
    std::cout << DBL_DIG << std::endl;      // Output: 15   --> which means in double we can store up to 15 digits
    std::cout << LDBL_DIG << std::endl;     // Output: 18   --> which means in double we can store up to 18 digits
}

int main()
{
    double x = 5.0 / 2.0;

    // Basically in C++, int data types has 8 integral types
    /*
    1. short
    2. int
    3. long
    4. long long
    5. unsigned short
    6. unsigned int
    7. unsigned long
    8. unsigned long long

    short --> int --> long --> long long
    */
    
    // To know the bytes size and limits on every single integral data type, you can use
    // the <climits> library


    std::cout << x << std::endl;    // Output: 2.5
    
    SizeOf();
    SizeLimitsMIN();
    SizeLimitsMAX();
    SizeOfLimitsUnsigned();

    // In C++,if you want to print the false statement, you can simply type std::boolalpha
    bool found = false;
    std::cout << std::boolalpha << found << std::endl; // Output: false
                                                       // The output is showing false instead of 0

    // Floating point number and floating data type
    float f = 10.0 / 3;
    f *= 10000000000;
    double d = 7.7E4;   // 7.7E4 is equal to 7.7 x 10^4
    long double ld;

    std::cout << f << std::endl; // Output: 3.33333e+010     --> how to fixed this?? we used the std::fixed
    std::cout << std::fixed << f << std::endl; // Output: 33333331968.000000
    // But the result is not showing the right result
    // Now we use the <float.h> library to see how many digits we can trust in every floating data type

    FloatDigits();

    // To encounter big digits, we used higher data type to store a big digits of number
    // we do the same like float f = 10.0 / 3; then we multiply it by 10000000000
    // Let's see what we got

    double fDouble = 10.0 / 3;
    fDouble *= 10000000000;
    std::cout << std::fixed << fDouble << std::endl; // Output: 33333333333.333336 --> see? It's more precise than float

    std::cout << d << std::endl; // Output: 77000

    // 3 Types of constant
    // Constant number means that we can't change the number a.k.a read only

    // No. 1 is prefixing a data type with const
    const int constant = 99;
    std::cout << constant << std::endl;      // Output: 

    // No.2 is using enum{}
    enum { enumeration = 100 };
    std::cout << enumeration << std::endl;

    // No.3 is using define
    // To use define, we declare it outside the main and the function, after including the library
    int def = DEF;
    std::cout << def << std::endl;  // Output: 10 --> because the value define by DEF is 10

    // PREPROCESSOR DIRECTIVE (#define, #undef)
    // Ex:
    /*
    #define TABLE_SIZE 100;
    The value of TABLE_SIZE is 100, you can assigned the value without using the = operator

    you can declare the TABLE_SIZE in main program or declare outside the main program like this,

    int table1[TABLE_SIZE];
    ^~ this equals to int table1[100];

    to print the value, you can simply type cout << table1 << endl;

    define can also work with parameters to define function macros:

    #define getmax(a, b) (a > b ? a : b)

    int x = 5, y;
    y = getmax(x, 2);
    cout << y << endl; // Output: 5
    cout << getmax(7, x) << endl;   // Output: 7

    Defined macros aren't affected by block structure. A macro lasts until it is undifined with
    #undef preprocessor directive:

    #define TABLE_SIZE 100  --> assigning value 100 to TABLE_SIZE
    #undef TABLE_SIZE       --> undefine the value from TABLE_SIZE
    #define TABLE_SIZE 500  --> assigning the value again to TABLE_SIZE after undefining it

    So, the point is, if you want to change the value, you have to undefine it first, and then
    assigned it again

    Function macro definitions accept two special operators (# and ##) in the replacement sequence:
    The operator #, followed by a parameter name, is replaced by a string literal that contains the
    argument passed (as if enclosed between double quotes)
    Example:

    #define str(x) #x       --> #x can be #y or #z depends on your parameter variable, if it x then it's #x
    cout << str(test);      --> this code equals to cout << "test";

    The operator ## concatenates two arguments leaving no blank spaces between them:

    #define glue(a, b) a ## b
    glue(c,out) << "test";  --> this code equals to cout << "test";
    */

    std::cout << str(Hello Paramaters) << std::endl;
    std::glue(co,ut) << "Hello Glue" << std::endl;
    
    // NUMERIC FUNCTIONS
    // No. 1, Square Root
    std::cout << sqrt(25) << std::endl;     // Output: 5

    // Special value of floating point data type:
    /*
    1. NAN (Not A Number)
    2. INF (Infinity)
    3. -INF (-Infinity)
    */
    std::cout << sqrt(-25) << std::endl;     // Output: nan

    // No. 2, Power
    std::cout << pow(9, 999) << std::endl;   // Output: inf
    std::cout << pow(-9, 999) << std::endl;  // Output: -inf

    std::cout << NAN << std::endl;          // Output: nan
    std::cout << INFINITY << std::endl;     // Output: inf
    std::cout << -INFINITY << std::endl;     // Output: -inf

    // No.3, Remainder
    std::cout << remainder(10, 3) << std::endl;     // Output: 1.000000
    std::cout << 10 % 3 << std::endl;               // Output: 1

    // The modulus operator that cannot work in some situation is:
    // std::cout << 10 % 3.25 << std:::endl;        --> this are the code that modulus operator cannot work
    // To encounter this problem, we use the remainder() function
    std::cout << remainder(10, 3.25) << std::endl;  // Output: 0.250000
    std::cout << fmod(10, 3.25) << std::endl;       // Output: 0.250000

    // No.3, fmax
    std::cout << fmax(10, 3) << std::endl;       // Output: 10.000000
    std::cout << fmin(10, 3) << std::endl;       // Output: 3.000000

    // No.4, ceiling
    std::cout << ceil(fmin(10, 3.25)) << std::endl;     // Output: 4.000000

    // No.5, floor
    std::cout << floor(fmin(10, 3.25)) << std::endl;    // Output: 3.000000

    // No.6, trunc
    std::cout << trunc(-1.5) << std::endl;              // Output: -1.000000

    std::cout << floor(-1.5) << std::endl;              // Output: -2.000000

    // No.7, round
    std::cout << round(-1.5) << std::endl;              // Output: -2.000000
    std::cout << round(-1.49) << std::endl;             // Output: -1.000000

    return 0;
    // The return 0 means, computer understand 0 as an ok, or the program works well without an error
    // Also return is an output
}

// int main() explanation:
/*
int is a return type. It is a short for integer, Integer is a number without any fractional part.
And int main is related to return 0; statement. So, if in main you using the return type::int, you
need to return something. It is 0. In return 0, computer understand that the program works well.
But if you are not writing the return 0 statement, the C++ will implicitly return 0. But, I suggest
you to always write a return 0; statement.
*/

// std:: explanation
/*
the std:: is a namespace. It is made to orgranize any naming convention and to prevent naming conflicts.
*/

// cout & cin explanation
/*
cout is an object. It is from ostream class. ostream is stand for output stream class. As we said that
C++ is an OOPs programming language.

cin is also an object. Cin is a part of istream class.
*/

// << operator
/*
cout << "Hello World";
^~~~~~~~~^~~~~~~~~~~~ cout and "Hello World" is and operand
while the << sign is an operator. Operator is like a doctor doing an operation.
So << is taking data (in this example is "Hello World"), and it send to cout
object which means it show "Hello World" to the console.
*/

// endl is a manipulator

// Actually using namespace std; is a declaration to using a naming convention
// If you declare it outside the main function, then it is a global variable,
// but if you declare it only in the specific function, then it is called local
// variable.

/*
How to run a C++ program in CMD in Windows

1. Open CMD
2. Go to your file directory
3. Type "g++ file_name.cpp" 
4. Then press Enter
5. After that, it will generate an .exe program. Usually it generate a.exe
6. Then just simply type the .exe name, just type "a" in the terminal
*/

/*
Keyword:

1. Manipulator
2. namespace
3. C++ class
*/