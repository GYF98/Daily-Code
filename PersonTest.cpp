// PersonTest.cpp
// Test application for the Person class

#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"

int main()
{
   Person person = ( "John", "Smith", 19 );

   cout << "Created " << getFirstName() << " " << getLastName() << ", age "
	  << getAge() << endl;

   person.setAge = person.getAge() + 1;
   cout << "Happy Birthday to " << person.getFirstName() << " "
	  << person.getLastName() << endl;
   getchar();
   return 0;
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
