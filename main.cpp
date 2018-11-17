#include <iostream>
using namespace std;

int chocolate_bars(int bars, int coupons)
{
    if (coupons >= 7)
    {
       return chocolate_bars( bars+coupons/7, coupons - 7*(coupons/7) + coupons/7);
    }
    return bars;
}
int main()
{
  cout << "Please enter your money" << endl;
  int bars, coupons;
  cin >> bars;
  coupons = bars;
  cout << chocolate_bars(bars, coupons);
}
