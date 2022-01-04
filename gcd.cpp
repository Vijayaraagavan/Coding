/*#include<iostream>
#include<cmath>

using namespace std;

int main(){
	
	int x,y;
	int in,out,rem;
	cout<<"enter 2 num :"<<endl;
	cin>>x;
	cin>>y;
	
	in=x;
	out=y;
	while (y!=0){
	
	rem= x%y;
	y=rem;
	x=y;
	
}
cout<<rem;
}
*/

// C++ program to find GCD of two numbers
#include <iostream>
using namespace std;
// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}
  
// Driver program to test above function
int main()
{
    int a = 30, b = 24;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
    return 0;
}
