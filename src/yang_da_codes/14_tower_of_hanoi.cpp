// Date : 28 sep 2023
// By : Nayan Parmar

#include <iostream>
using namespace std;

void towerOfHanoi(int n, int src, int aux, int dest)
{
  if (n == 1)
  {
    cout << "Move disk 1 from " << src << " to " << dest << endl;
    return;
  }

  towerOfHanoi(n - 1, src, dest, aux);
  cout << "Move disk " << n << " from " << src << " to " << dest << endl;
  towerOfHanoi(n - 1, aux, src, dest);
}

int main()
{
  cout << "----------------------------------------------------------" << endl;

  int n;
  cout << "Enter the number of disks: ";
  cin >> n;

  towerOfHanoi(n, 1, 2, 3);

  return 0;
  cout << "\n----------------------------------------------------------" << endl;
  return 0;
}
