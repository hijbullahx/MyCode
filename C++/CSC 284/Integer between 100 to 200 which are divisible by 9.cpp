#include <iostream>
using namespace std;
inline double divisibleBy (int num)
{
return (num % 9 == 0);
}
int main()
{
int startNum = 100;
int endNum = 200;
int countNum = 0;
int sumOfNum = 0;
for(int num = 100; num < endNum; num++)
{
if(divisibleBy(num))
{
sumOfNum += num;
countNum++;
}
}
cout << endl << "The numbers divisible by 9: " << endl;
for(int num = 100; num < endNum; num++)
{
if(divisibleBy(num))
{
cout << num << " ";
}
}
cout <<endl << "The sum of the numbers divisible by 9 is: " << sumOfNum << endl;
cout << "The count of numbers divisible by 9 is: " << countNum << endl;

}

