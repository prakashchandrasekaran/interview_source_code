// Sample code

#include <iostream>
using namespace std;

int main()
{
 int a[10] = {1,5,3,6,7,2,10,9,8,4};
 int length = 10;
 std::cout << "Starting" << std::endl;
 
 for(int i=1;i<length;i++)
 {
  int j = i-1;
  int k = a[i];
  while(j >= 0 && a[j] > k)
  {
   a[j+1] = a[j];
   j--;
  }
  a[j+1] = k;
 }
 
 for(int i=0;i<length;i++)
 {
  std::cout << a[i] << std::endl;
 }
 
}