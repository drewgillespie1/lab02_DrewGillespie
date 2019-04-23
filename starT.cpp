//StarT.cpp
//4/23/19
//Drew Gillespie 9547183
//This file creates a T out of the * character when you give it the
//width and height paremeters. If the width or height are too small
//it will not output. If the width is even, it will not output.
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void assertEquals(string expected, string actual, string message);
string starT(int width, int height);
void runTests(void);



string starT(int width, int height)
{
  string result="";
  if (height>=2){
    if (width>=3){
      if (width%2==1){
	for (int i=1;i<=width;i++){
	  result += "*";
	}
        result +="\n";
	int n_o_singlestar = height-1;
	for (int i=1; i<=n_o_singlestar;i++){
	  int n_o_s=(width-1)/2;
	  for(int i=1; i<=n_o_s;i++){
	    result += " ";
	  }
	  result += "*";
	  
	  for(int i=1; i<=n_o_s;i++){
	    result += " ";
	  }
	  result += "\n";
	}}
      else{
	return "";
      }
    }
    else{return "";}
  }
  else {return "";}

	   
  return result;
}



void runTests(void) {


    string starT34Expected = 
    "***\n"
    " * \n"
    " * \n"
    " * \n" ;
    string starT53Expected =     
    "*****\n"
    "  *  \n"
    "  *  \n" ;
    string starT72Expected =     
    "*******\n"
    "   *   \n";
  
  assertEquals(starT34Expected,starT(3,4),"starT(3,4)");


  assertEquals(starT53Expected,starT(5,3),"starT(5,3)");


  assertEquals(starT72Expected,starT(7,2),"starT(7,2)");

  assertEquals("",starT(1,2),"starT(1,2)");
  assertEquals("",starT(5,1),"starT(5,1)");
  assertEquals("",starT(4,2),"starT(4,2)");
  assertEquals("",starT(6,2),"starT(6,2)");
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

  if (argc !=3){
    cerr<<"no\n";
    exit(1);
  }
  int w = atoi(argv[1]);
  int h = atoi(argv[2]);

  if ( w ==-1 && h==-1 ){
    
    string starT34Expected = 
    "***\n"
    " * \n"
    " * \n"
    " * \n" ;
    string starT53Expected =     
    "*****\n"
    "  *  \n"
    "  *  \n" ;
    string starT72Expected =     
    "*******\n"
    "   *   \n";
    
    assertEquals(starT34Expected,starT(3,4), "starT(3,4)");
    assertEquals(starT53Expected,starT(5,3), "starT(5,3)");
    assertEquals(starT72Expected,starT(7,2), "starT(7,2)");
    assertEquals("",starT(1,2),"starT(1,2)");
    assertEquals("",starT(5,1),"starT(5,1)");
    assertEquals("",starT(4,2),"starT(4,2)");
    assertEquals("",starT(6,2),"starT(6,2)");
    

  }
  else{
  cout << starT( w,h);
  }
  return 0;
}



