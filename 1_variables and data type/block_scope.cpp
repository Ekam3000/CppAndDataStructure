#include <iostream>
int main() {
  
  // You can actually make an inner scope block anywhere in a function.
  // Let's do it to show how scope works.
  
  // In the initial, outer scope:
  int x = 2;
  std::cout << "Outer scope value of x (should be 2): " << x << std::endl;
  
  // Create an inner scope and make a new variable with the name "x".
  // This is not an error! We can redeclare x because of the inner scope.
  // Also, make an extra variable named "y".
  {
    int x = 3;
    int y = 4;
    std::cout << "Inner scope vaue of x (should be 3): " << x << std::endl;
    std::cout << "Inner scope vaue of y (should be 4): " << y << std::endl;
  }
  
  // Now that the inner block has closed, the inner x and y are gone.
  // The original x variable is still on the stack, and it has its old value:
  std::cout << "Outer scope value of x (should be 2): " << x << std::endl;
  
  // We can't refer to y here, because it doesn't exist in this scope at all!
  // If you un-comment this line, there will be a compile error.
  // std::cout << "This line causes an error because y doesn't exist: " << y << std::endl;
  
  return 0;
}