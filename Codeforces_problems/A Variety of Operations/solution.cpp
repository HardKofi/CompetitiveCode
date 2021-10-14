/* 
    since a and b are 0 initially so if we add or subtract same number from them both will be 
    eather odd or even simuntaneously and thats our 1st condition to check. 
    If one is odd and other is even or vice versa just print -1. Our 2nd condition is 
    if c and d are 0 then we didn't need any change at all so we requird 0 operations, if c equals d
    then we need only one operation. Now comes the tricky part if c is not equal to d then we only 
    requird 2 operations as we can create any number by addition or subtraction of 2 different number
    For example we are requird to make a=x and b=y then,
    with a(0)+/- number_1 +/- number_2 =x
    and  b(0)+/- number_1 +/- number_2 =y 
    so its just linear equation in 2 variables we have 2 equations and 2 variables which can be easily solved
    we can not choose both sign same(same for boths equation) as this will not satisfy the equation.
*/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	int test;
	cin>> test;

	while (test--)
	{
		long long int a=0,b=0,c,d,k; // a and b =0 accoding to question
        cin>>c>>d;
        if(abs(c-d)%2==1) cout<<-1<<"\n"; 
        else{
            if(c==0&&d==0) cout<<0<<"\n";
            else if (c==d){
            cout<<1<<"\n"; 
            }
            else cout<<2<<"\n";
        }
		
	}

	return 0;
}