// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string firstname, string lastname, int salary)
{
	if (salary < 0)
		salary = 0;
	else
		monthlySalary = salary/12;

	firstName = firstname;
	lastName = lastname;
}
/* Define a set function for the first name data member. */
void Employee::setFirstName(string firstname)
{
	firstName = firstname;
}
/* Define a get function for the first name data member. */
string Employee::getFirstName()
{
	return firstName;
}
/* Define a set function for the last name data member. */
void Employee::setLastName(string lastname)
{
	lastName = lastname;
}
/* Define a get function for the last name data member. */
string Employee::getLastName()
{
	return lastName;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setMonthlySalary(int salary)
{
	if (salary >= 0)
		monthlySalary = salary;
	else
		monthlySalary = monthlySalary;
}
/* Define a get function for the monthly salary data member. */
int Employee::getMonthlySalary()
{
	return monthlySalary;
}
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
