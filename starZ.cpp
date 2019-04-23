// starZ.cpp   A demonstration of ASCII Art printing C characters
// Drew Gillespie 9547183
// 4/23/19
// The programs makes a Z using the character *. It takes on only the width
// parameter. It makes use of the variables for space before and after the
// singular * that makes up the diagonal in the Z. Inputting -1 runs a series
// of test.
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void assertEquals(string expected, string actual, string message);
string starZ(int width);
void runTests(void);




string starZ(int width)
{
  string result="";
  if (width>=3){
    int height=width-2;
    for(int i=1;i<=width;i++){
      result += "*";
    }
    result += "\n";
    int n_whitebefore=width-2;
    int n_whiteafter=1;
    for (int i=1;i<=height;i++){
      for(int i=1;i<=n_whitebefore;i++){
	result += " ";
      }
      result += "*";
      for(int i=1; i<=n_whiteafter;i++){
	result += " ";
      }
      result += "\n";
      n_whiteafter=n_whiteafter+1;
      n_whitebefore=n_whitebefore-1;
    }
    for(int i=1;i<=width;i++){
      result += "*";
    }
    result += "\n";
      
  }
  else{return "";}
  
    
  return result;
}

// Test-Driven Development; check expected results against actual

void runTests(void) {


  string starZ3Expected = 
    "***\n"
    " * \n"
    "***\n";
  
  assertEquals(starZ3Expected,starZ(3),"starZ(3)");

  string starZ4Expected = 
    "****\n"
    "  * \n"
    " *  \n"
    "****\n";
  
  assertEquals(starZ4Expected,starZ(4),"starZ(4)");

  assertEquals("",starZ(0),"starZ(0)");
  assertEquals("",starZ(2),"starZ(2)");
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
  if (argc !=2){
    cerr<<"Usage: "<<argv[0]<<" width";
    exit(1);
  }
  int w=atoi(argv[1]);
  if (w==-1){

    string starZ3Expected = 
    "***\n"
    " * \n"
    "***\n";
  
  assertEquals(starZ3Expected,starZ(3),"starZ(3)");

  string starZ4Expected = 
    "****\n"
    "  * \n"
    " *  \n"
    "****\n";
  
  assertEquals(starZ4Expected,starZ(4),"starZ(4)");

  assertEquals("",starZ(0),"starZ(0)");
  assertEquals("",starZ(2),"starZ(2)");
  }
  else{cout<<starZ(w);
  }



  return 0;
}
