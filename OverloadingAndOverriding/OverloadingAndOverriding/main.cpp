#include <iostream>
#include "Animal.h"
#include "Bird.h"
#include "Parrot.h"
#include "Eagle.h"
#include "Crow.h"

using namespace std;

int main() {
  
	Crow crow = Crow();
	cout << "Pure Literal check....."<<"  "<< crow.getName() << endl;
	return 0;
}
