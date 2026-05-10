#include <iostream>
using namespace std;

class vars_cant_be_modified
{
private:
  int var;
public:
int var_public;
  int getvar() const/* This promises not to modify the actual entities int the use that are in the class ie the variables */
  {
    // var = 4; cant do this
    // var_public = 10; cant even modify public variables also
    return var;}
};

class nothing_can_be_modified
{
private:
  int *var;
public:
int *var_public;
  const /* pointer to a const int the int cannot be modified through this pointer*/ int* const /* and this const states that the actual pointer returned cannot be modified */ getvar() const/* This promises not to modify the actual entities int the use that are in the class ie the variables */
  {
    // var = 4; cant do this
    // var_public = 10; cant even modify public variables also
    return var;}
};



int main() {

  // why use const because what we we need to pass variable as const in the get
  nothing_can_be_modified obj;
  obj.getvar();


  return 0;
}