// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using std::string;

// Employee class definition
class Employee
{
public:
   /* Declare a constructor that has one parameter for each data member */
   Employee(string, string, int);
   /* Declare a set method for the employee's first name */
   void setFirstName(string);
   /* Declare a get method for the employee's first name */
   string getFirstName();
   /* Declare a set method for the employee's last name */
   void setLastName(string);
   /* Declare a get method for the employee's last name */
   string getLastName();
   /* Declare a set method for the employee's monthly salary */
   void setMonthlySalary(int);
   /* Declare a get method for the employee's monthly salary */
   int getMonthlySalary();
private:
   /* Declare a string data member for the employee's first name */
   string firstName;
   /* Declare a string data member for the employee's last name */
   string lastName;
   /* Declare an int data member for the employee's monthly salary */
   int monthlySalary;
}; // end class Employee


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
