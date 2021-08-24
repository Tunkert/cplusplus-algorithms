#include <iostream>
#include <cmath>

using namespace std;

double pythag(double a, double b);

double pythag(double a, double b)
{
  double sumOfSquares = a * a + b * b;
  double c;
  c = sqrt(sumOfSquares);
  return c;
}

int main()
{
  double a = 3;
  double b = 4;

  double solution;
  solution = pythag(a, b);

  cout << solution << endl;

  return 0;
}
