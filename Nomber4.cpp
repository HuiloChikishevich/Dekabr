#include <iostream>
#include <cstdlib>

int compare(const void * x1, const void * x2)
{
  return (  *(double*)x2-*(double*)x1 );
}
void quicksort(double arr[], int n) {
  qsort(arr, n, sizeof(arr[0]), compare);
}

int main ()
{
  int n = 0, k=0;
  std::cin >> n;
  std::cin >> k;
  double m[n] = {-1};
  for(int i = 0; i<n; i++)
    std::cin >> m[i];
  quicksort(m, n);
  //std::cout<< m[n];
  for ( int x = 0; x < n; x++)
      std::cout << m[x] << " ";
  std::cout << "\n m = "<< m[n-k] << '\n';
  return 0;
}
