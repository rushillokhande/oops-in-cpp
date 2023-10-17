
/*
#include <iostream>
using namespace std;

int calculate(int, int);

int main()
{
    int base, power, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive integer): ";
    cin >> power;

    result = calculate(base, power);
    cout << " Result : " << result;

    return 0;
}

int calculate(int base, int power)
{
    if (power != 0)
        return (base*calculate(base, power-1));
    else
        return 1;
} 

#include <iostream>
#include <cmath>
using namespace std;

int main () {
  double base, power, result;
	
  cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive integer): ";
    cin >> power;

  result = pow(base, power);
	
  cout << "result :" << result;
	
  return 0;
}  



#include <iostream>
#include <cmath>
using namespace std;

int main () {
  double base, power, result=1;
	
  cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive integer): ";
    cin >> power;
    for(int i=0;i<power;i++){
    result=result*base;
    
    }
    cout<<"result is :"<<result;
    return 0;
    }
    
    */
