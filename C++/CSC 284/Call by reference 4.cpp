#include <iostream>;
using namespace std;
void HM(int *n1,int *n2,int *n3,int *max)
{
if(*n1&gt;*n2&amp;&amp;*n1&gt;*n3)
{
*max=*n1;
}
else if(*n2&gt;*n1&amp;&amp;*n2&gt;*n3)
{
*max=*n2;
}
else
{
*max=*n3;
}
}
int main()
{
int h,k,m,ma;
cout&lt;&lt;&quot;Enter marks for Hamim ,Kader and Masud&quot;&lt;&lt;endl;
cin&gt;&gt;h&gt;&gt;k&gt;&gt;m;
HM(&amp;h,&amp;k,&amp;m,&amp;ma);
cout&lt;&lt;&quot;The Highest Mark is &quot;&lt;&lt;ma;
return 0;
}
