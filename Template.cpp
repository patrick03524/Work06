#include <iostream>
#define min(x,y) (x<y? x:y)

using namespace std;

template <typename T>
T min (const T t1, const T t2)
{
    return t1<t2? t1:t2;
}

int main()
{
    cout<<min(15,24)<<endl;
    return 0;
}
