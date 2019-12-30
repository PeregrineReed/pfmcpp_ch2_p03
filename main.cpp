#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
 Declarations Tasks
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 int
 char
 bool
 float
 double
 unsigned int
 void
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int zero = 0;
    int one = 1;
    int two = 2;
    char word = 'w';
    char letter = 'l';
    char character = 'h';
    bool cool = true;
    bool school = false;
    bool ruleCoolSchool = true;
    float fraction = 1.2f;
    float withDecimal = 3.4f;
    float ingPointNumber = 5.6f;
    double a = 0.1;
    double b = 1.2;
    double c = 3.4;
    unsigned int positive = 2;
    unsigned int notNegative = 3;
    unsigned int three = 3;
    
    ignoreUnused(number, zero, one, two, word, letter, character, cool, school, ruleCoolSchool, fraction, withDecimal, ingPointNumber, a, b, c, positive, notNegative, three); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int addNumbers(int num1, int num2)
{
  ignoreUnused(num1, num2);
  return {};
}
/*
 2)
 */
int subtractNumbers(int num1, int num2)
{
  ignoreUnused(num1, num2);
  return {};
}
/*
 3)
 */
bool truthy(bool truth = true)
{
  ignoreUnused(truth);
  return {};
}
/*
 4)
 */
void nullAndVoid(int zero = 0, float zeroPointZero = 0.f)
{
  ignoreUnused(zero, zeroPointZero);
}
/*
 5)
 */
int count(int start = 0, int increment = 1, int end = 10)
{
  ignoreUnused(start, increment, end);
  return {};
}
/*
 6)
 */
int multiply(int num1, int num2, int num3 = 3)
{
  ignoreUnused(num1, num2, num3);
  return {};
}
/*
 7)
 */
float fractions(float float1, float float2, float pi = 3.14f)
{
  ignoreUnused(float1, float2, pi);
  return {};
}
/*
 8)
 */
char abcs(char a = 'a', char b = 'b', char c = 'c')
{
  ignoreUnused(a, b, c);
  return {};
}
/*
 9)
 */
bool isTodayWednesday()
{
  return {};
}
/*
 10)
 */
void sayNothing()
{
  isTodayWednesday();
}
int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
    //1)
    addNumbers(1,2); FIXME add some space around your params so they're more readable
    //2)
    subtractNumbers(6,5); FIXME add some space around your params so they're more readable
    //3)
    truthy();
    //4)
    nullAndVoid(1);
    //5)
    count(5,5,100); FIXME add some space around your params so they're more readable
    //6)
    multiply(12,12); FIXME add some space around your params so they're more readable
    //7)
    fractions(1.2f, 3.4f);
    //8)
    abcs('z');
    //9)
    isTodayWednesday();
    //10)
    sayNothing();
    std::cout << "good to go!" << std::endl;
    return 0;    
}
