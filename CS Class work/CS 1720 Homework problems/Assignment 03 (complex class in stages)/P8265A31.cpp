//P8265A31.CPP
//Mark Salisbury
//Assignment 3.1
//CS 1720 
/*
A31. Write a complete program including prototypes, a driver program, and the implementation which uses complex 
numbers without a class. This is similar to what we did first with rational numbers. The real and imaginary parts 
of the rational numbers should be of type double. Be sure to include a function print that will print a complex 
number in the usual form. Also include a function input that will allow the input of a complex number in the usual 
form. Complex numbers should be input in the form:
2.3 + 4.56i or 3.45 - 2.367i and not 2.45 + (-2.367i) 
Complex numbers should be output in the same form. Be sure to take care of the + and - sign correctly. Use this 
form in input and output for all problems dealing with the complex number class.
*/


#include <iostream.h>
#include <math.h>
#include <ctype.h>

void print(const double &, const double &);
void input(double &, double &);
void add(const double &, const double &, const double &, const double &, double &, double &);
void subtract(const double &, const double &, const double &, const double &, double &, double &);
void multiply(const double &, const double &, const double &, const double &, double &, double &);
void divide(const double &, const double &, const double &, const double &, double &, double &);
void magnitude(const double &, const double &, double &, double &);

void main(){
	double r1, i1;
	double r2, i2;
	double rresult = 0, iresult = 0;
	char answer;

	do{
		cout << "Enter a complex number: ";
		input (r1, i1);
		cout << "Enter a complex number: ";
		input(r2, i2);
		cout << "The numbers you entered were ";
		print(r1, i1);
		cout << " and "; 
		print(r2, i2);
		cout << endl;
		cout << "Is this correct? (y/n) ";
		cin >> answer;
		cin.ignore();
	} while (toupper(answer) != 'Y'); 
	
	cout << endl << "The sum of these numbers is: ";
	add(r1, i1, r2, i2, rresult, iresult);
	print(rresult, iresult);
	cout << endl << "The difference of these numbers is: ";
	subtract(r1, i1, r2, i2, rresult, iresult);
	print(rresult, iresult);
	cout << endl << "The product of these numbers is: ";
	multiply(r1, i1, r2, i2, rresult, iresult);
	print(rresult, iresult);
	cout << endl << "The quotient of these numbers is: ";
	divide(r1, i1, r2, i2, rresult, iresult);
	print(rresult, iresult);
	cout << endl << "The magnitude of the first number is: ";
	magnitude(r1, i1, rresult, iresult);
	print(rresult, iresult);
	cout << endl;

}

void print(const double & real, const double & imag){
	cout << real;
	if (imag != 0.0)
		cout << (imag > 0.0 ? " + " : " - ") 
		       << (imag > 0.0 ? imag : -1.0 * imag) << "i";
}

void input(double & real, double & imag){
	char finput[20], input[20], ainput[10];
	cin.getline(finput, 20);
	int i = 0, a = 0; 

	while (finput[i] != '\0'){
		if(finput[i] != ' ')
			input[a++] = finput[i];
		i++;
	}
	input[a] = '\0';

	i = 0, a = 0;
	real = 0;
	imag = 0;

	do{
		while (isdigit(input[i]) || input[i] == '.' || input[i] == '-'){ 
			ainput[a++] = input[i];
			ainput[a] = '\0';
			if (!isdigit(input[i+1]) && input[i+1] != '.')
				break;
			i++;
		}
		
		if (input[i+1] == 'i' && input[i]== '-'){
			a = 0;	
			imag = -1.0;
		}
		else if (input[i] == 'i' && (i == 0 || input[i-1] == '+')){
			a = 0;
			imag = 1.0;
		}
		else if (a > 0) {
			if (input[i + 1] == 'i'){
				imag = atof(ainput);
				a = 0;
			}
			else{ 
				real = atof(ainput);
				a = 0;
			}
		}
		i++;
	} while (input[i] != '\0');

}

void add(const double & real1, const double & imag1, const double & real2, const double & imag2, 
		 double & realresult, double & imagresult){
	//(a+bi) + (c+di) = (a+c) + (b+d)i
	
	realresult = real1 + real2;
	imagresult = imag1 + imag2;

}
void subtract(const double & real1, const double & imag1, const double & real2, const double & imag2, 
		 double & realresult, double & imagresult){
	//(a+bi) - (c+di) = (a-c) + (b-d)i  
	
	realresult = real1 - real2;
	imagresult =imag1 - imag2;
	
}
void multiply(const double & real1, const double & imag1, const double & real2, const double & imag2, 
		 double & realresult, double & imagresult){
	//(a+bi)*(c+di) = (ac-bd) + (ad+bc)i
	
	realresult = real1 * real2 -imag1 * imag2;
	imagresult = real1 * imag2 +imag1 * real2;
	
}
void divide(const double & real1, const double & imag1, const double & real2, const double & imag2, 
		 double & realresult, double & imagresult){
	//(a+bi)/(c+di) = (ac+bd)/(c^2+d^2) + (bc-ad)i/(c^2+d^2)   
	
	realresult = (real1 * real2 + imag1 * imag2) / (real2 * real2 + imag2 * imag2);
	imagresult = (imag1 * real2 - real1 * imag2) / (real2 * real2 + imag2 * imag2);

}

void magnitude(const double & real1, const double & imag1, double & realresult, double & imagresult){
	//magnitude(a+bi) = sqrt(a^2 + b^2)    
	realresult = sqrt(real1 * real1 + imag1 * imag1);
	imagresult = 0;

}      