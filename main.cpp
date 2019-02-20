//Program: Fizz Buzz
//Programmer: Abraham Tinajero

#include <iostream>
using namespace std;

int main() {
 int x;
 x=1;
//While initializing, i'm printing out all necessary characters.
while (x <=30 ){
 
  //The numbers to begin
  if(x % 3 == 0 && x % 5 == 0){
    cout << "FizzBuzz" << endl;
  }
  else if(x % 3 == 0){
    cout << "Fizz" << endl;
  }
  //Followed by Buzz
  else if(x % 5 == 0){
    cout << "Buzz" << endl;
  }
  //Lastly, do 15's
  else{
     cout << x << endl;
  }
  x = x + 1;

}
return 0;
}
