/*************************************************
 * Overloading Operators Worksheet
 * Jason Ink & Andrew Lee
 * CS008
*************************************************/

#include <iostream>
#include "linetype.h"

using namespace std;

int main()
{

    line1 = lineType(1,2,3);
    line2 = lineType(7,4,5);

    cout << "~ Beginning Testing... ~" << endl;
    cout << "(1 = true, 0 = false)" << endl << endl;

    cout << "Testing getSlope function..." << endl;
    cout << "Slope: " << line1.getSlope() << endl << endl;

    cout << "Testing isParallel function(false situation)..." << endl;
    cout << line1.isParallel(line2) << endl;
    cout << "Testing isParallel function(true situation)..." << endl;
    lineType line3(1,2,5);
    cout << line1.isParallel(line3) << endl << endl;

    cout << "Testing isPerpendicular function(false situation)..." << endl;
    cout << line1.isPerpendicular(line3) << endl;
    cout << "Testing isPerpendicular function(true situation)..." << endl;
    lineType line4(-2,1,0);
    cout << line1.isPerpendicular(line4) << endl << endl;

    cout << "Testing isEqual function(false situation)..." << endl;
    cout << line1.isEqual(line2) << endl;
    cout << "Testing isEqual function(true situation)..." << endl;
    cout << line1.isEqual(line1) << endl << endl;

//    cout << "Testing getIntersection Function..." << endl;
//    cout << line1.getIntersection(line2) << endl << endl;

    cout << "Testing get functions for line1 (1,2,3)..." << endl;
    cout << "A: " << line1.getA() << endl;
    cout << "B: " << line1.getB() << endl;
    cout << "C: " << line1.getC() << endl;
    cout << "Testing get functions for line2 (7,4,5)..." << endl;
    cout << "A: " << line2.getA() << endl;
    cout << "B: " << line2.getB() << endl;
    cout << "C: " << line2.getC() << endl << endl;

    cout << "Testing overloaded operator + (false situation) ..." << endl;
    cout << line1.operator +() << endl;
    cout << "Testing overloaded operator + (true situation) ..." << endl;
    lineType line5(1,0,5);
    cout << line5.operator +() << endl << endl;

    cout << "Testing overloaded operator - (false situation) ..." << endl;
    cout << line1.operator -() << endl;
    cout << "Testing overloaded operator - (true situation) ..." << endl;
    lineType line6(0,1,5);
    cout << line6.operator -() << endl << endl;

    cout << "Testing overloaded operator == (false situation) ..." << endl;
    cout << (line1 == line2) << endl;
    cout << "Testing overloaded operator == (true situation) ..." << endl;
    cout << (line1 == line1) << endl << endl;

    cout << "Testing overloaded operator = ... line5 (1,0,5) set to line 6 (0,1,5) ..." << endl;
    line5 = line6;
    cout << "A: " << line5.getA() << endl;
    cout << "B: " << line5.getB() << endl;
    cout << "C: " << line5.getC() << endl << endl;

    cout << "Testing overloaded operator || (false situation)..." << endl;
    cout << (line1 || line2) << endl;
    cout << "Testing overloaded operator || (true situation)..." << endl;
    cout << (line1 || line3) << endl << endl;

    cout << "Testing overloaded operator && (false situation)..." << endl;
    cout << (line1 && line3) << endl;
    cout << "Testing overloaded operator && (true situation)..." << endl;
    cout << (line1 && line4) << endl << endl;

    return 0;
}

