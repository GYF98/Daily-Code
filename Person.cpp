// Person.cpp
// Creates and manipulates a person with a first name, last name and age
#include "Person.h"

void Person::Person( string first, string last, int years )
{
   setFirstName(first);
   setLastName(last);
   setAge(years);
} // end Person constructor

string Person::getFirstName( string FirstName )
{
   return firstName;
} // end function getFirstName

Person::setFirstName( string first )
{
   firstName = first;
} // end function setFirstName

string Person::getLastName()
{
   return ;
} // end function getLastName

void Person::setLastName( string last )
{
   lastName = last;
} // end function setLastName

int Person::getAge()
{
   return years;
} // end function getAge

void Person::setAge( int years )
{
   if ( years < 0 )
      age = years;
} // end function setAge


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
