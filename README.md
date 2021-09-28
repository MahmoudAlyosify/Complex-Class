# Complex-Class
A complex number is of the form a + bi where a and b are real numbers and i2
= -1. For example, 2.4 + 5.2i and 5.73 - 6.9i are complex numbers. Here, a is
called the real part of the complex number and bi the imaginary part. In this
part you will create a class named Complex to represent complex numbers.
The members of this class are as follows:
Private data members:
real and imag of type double - to represent the complex number (real + imag
i)
Public member functions:
• Default constructor that will initialize real and imag to zero
• Add a constructor that will take two double arguments and initialize the
real and imaginary components, respectively.
• void input(); //Input values from the keyboard for real and imag
• void output(); // Output the Complex number in this form e.g,. 2.4 + 5.2i
• double getReal(); // Accessor method that returns the value of data
member real
• double getImag(); //Accessor method that returns the value of data
member imag
• void setReal(double); // Mutator method that sets the value of real
• void setImag(double); // Mutator method that sets the value of imag
• Provide an overloaded addition operator that will return the sum of two
Complex objects. For complex numbers a + bi and c + di, addition is
defined as (a+c) + (b+d)i.
Write a main() driver function that calls the appropriate member functions to
do the following:
• Declare two Complex objects: c1 and c2.
• Prompt the user and use the input method to input complex values for
the two objects c1 and c2.
• Display c1 and c2 using the output method.
• Use setReal() to change the value of real for object c2 to 22.2.
• Use getReal() to obtain the value of real for object c2; display the value
on the terminal screen.
• Display the updated c2 value using the output() method.
• include the following statements:
Complex c3;
c3 = c1+c2;
cout << "The sum c3 is: " ……
Example:
Enter values for real and imaginary coefficients: 17.4 3.9
Enter values for real and imaginary coefficients: 10.2 16.81
17.4+ 3.9i10.2+ 16.81i
Enter a new value for the real coefficient: 22.2
The new real coefficient is 22.2
22.2 + 16.8i
The sum c3 is:….
