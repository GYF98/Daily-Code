// Lab 2: GradeBookTest.cpp
// Test program for modified GradeBook class.
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main()
{
    string name;
   // create a GradeBook object; pass a course name and instructor name
   GradeBook gradeBook("CS101 Introduction to C++ Programming","Sam Smith" );

   // display welcome message and instructor's name
   gradeBook.displayMessage();

   /* write code to change instructor�s name and output changes */

   cout<<"\nChanging instructor name to ";
   getline(cin,name);
   gradeBook.setInstructorName(name);
   cout<<endl;
   gradeBook.displayMessage();

   return 0; // indicate successful termination
} // end main


/**************************************************************************
 * (C) Copyright 1992-2005 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
