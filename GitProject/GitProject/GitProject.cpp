// CMPS 4443/5373: Supplemental Software Tools
// GitHub assignment program.  
// This assignment will allow you to go through the process of working on 
// collaborative code.  Read the steps in the instructionsJohnson function 
// for more information.
// Test
#include<iostream>

using namespace std;

void instructionsJohnson();
void AbdelAitroua();

void AndrewNash();
void MatthewTrebing();


int main()
{	
	char pause;
	instructionsJohnson();
	AbdelAitroua();
	AndrewNash();
	MatthewTrebing();
	cin >> pause;
	return 0;
}

void instructionsJohnson()
{
	cout << "For this assignment you will:  \n";
	cout << "1) Fork this repository from my GitHub account to yours. \n"; 
	cout << "2) Clone this file to your local machine. \n";
	cout << "3) Add a function prototype at the top of this source file, named YourLastName. \n";
	cout << "4) Add a function definition at the bottom of the file. \n";
	cout << "   The function should include your name in cout statements and a Chuck Norris joke. \n";
	cout << "5) Add a call to your header function in main. \n";
	cout << "6) Commit the changes to the file on your local machine. \n";
	cout << "7) Push the committed changes to your remote GitHub repository. \n";
	cout << "8) Submit a Pull Request with the updated file. \n";
}

void AbdelAitroua(){
	cout << "Abdel Aitroua" << endl;
	cout << "Chuck Norris Said: Chuck Norris CAN devide by zero" << endl;
}


void AndrewNash(){
	cout << "Andrew Nash" << endl;
	cout << "Chunck Norris Chuck Norris can pick oranges from an apple tree and make the best lemonade youve ever tasted." << endl;
}

void MatthewTrebing()
{
	cout << "Matthew Trebing" << endl;
	cout << "Jack was nimble, Jack was quick, but Jack still couldn't dodge Chuck Norris' roundhouse kick." << endl;
}

