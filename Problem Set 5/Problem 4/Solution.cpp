#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
template<typename T>
void find(T t) 
{
    string s = to_string(t);
    reverse(s.begin(), s.end());
    cout << "Reverse : " << s << endl;
}
template<typename T>
T find(T a,T b)
{
    string s1 = to_string(a);
    string s2 = to_string(b);
    int len1 = s1.length();
    int len2 = s2.length();
    return max(len1, len2);
}
template<typename T,typename U, typename V>
T find(T a,U b, V c)
{
    if(a>= b && a>=c)
    return a;
    else if (b >= a && b >= c)
    return b;
    else
    return c;
}
int main()
{
    find(676);
    cout<<"Max Length: "<<find(564,86357)<<endl;
    cout<<"Greatest: "<<find(173,37.3,2212);
}