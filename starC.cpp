// starC.cpp   A demonstration of ASCII Art printing C characters
//Drew Gillespie 9547183
//4/23/19
// Makes a C using the character *. Specifies Height and Width. If height
// is less than 3 or width is less than 2, returns empty string. -1 -1
// for height and width returns tests.

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void assertEquals(string expected, string actual, string message);
string starC(int width, int height);
void runTests(void);

// Write starC per specifictions in the lab writeup
// so that internal tests pass, and submit.cs system tests pass


string starC(int width, int height)
{
  string result="";
  if (width>=2){
    if (height>=3){
      int n_o_middle=height-2;
      int n_o_white=width-1;
      for (int i=1;i<=width;i++){
	result += "*";
      }
      result += "\n";
      for (int i=1;i<=n_o_middle;i++){
	result += "*";
	for(int i=1; i<=n_o_white;i++){
	  result += " ";
	}
	result += "\n";
      }
            for (int i=1;i<=width;i++){
	result += "*";
      }
      result += "\n";
    }
    else{result += "";}
  }
  else{result += "";}

	
  return result;
}

// Test-Driven Development; check expected results against actual

void runTests(void) {

  // The following line works because in C and C++ when string literals
  // are separated only by whitespace (space, tab, newline), they 
  // automatically get concatenated into a single string literal

  string starC34Expected = 
    "***\n"
    "*  \n"
    "*  \n"
    "***\n";
  
  assertEquals(starC34Expected,starC(3,4),"starC(3,4)");

  string starC53Expected =     
    "*****\n"
    "*    \n"
    "*****\n";

  
  assertEquals(starC53Expected,starC(5,3),"starC(5,3)");

  assertEquals("",starC(2,1),"starC(2,1)");
  assertEquals("",starC(2,2),"starC(2,2)");

  string starC23Expected =     
    "**\n"
    "* \n"
    "**\n";
  
  assertEquals(starC23Expected,starC(2,3),"starC(2,3)");
}

// Test harness

void assertEquals(string expected, string actual, string message="") {
  if (expected==actual) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl << "   Expected:[\n" << expected << "] actual = [\n" << actual << "]\n" << endl;
  }
}


// Main function

int main(int argc, char *argv[])
{
  if (argc!=3){
    cerr<<"Usage: "<<argv[0]<<" width height";
    exit(1);
  }
  int w=atoi(argv[1]);
  int h=atoi(argv[2]);
  if (w==-1 && h==-1){
    



  
  string starC34Expected = 
    "***\n"
    "*  \n"
    "*  \n"
    "***\n";
  
  assertEquals(starC34Expected,starC(3,4),"starC(3,4)");

  string starC53Expected =     
    "*****\n"
    "*    \n"
    "*****\n";

  
  assertEquals(starC53Expected,starC(5,3),"starC(5,3)");

  assertEquals("",starC(2,1),"starC(2,1)");
  assertEquals("",starC(2,2),"starC(2,2)");

  string starC23Expected =     
    "**\n"
    "* \n"
    "**\n";
  
  assertEquals(starC23Expected,starC(2,3),"starC(2,3)");
  }
  else{ cout<<starC(w,h);}


  return 0;
}
