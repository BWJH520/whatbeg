#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

//快速计算法，
//代码优点：全整形计算。
//时间复杂度：O(min(m,n-m))
//空间复杂度：O(1)

int cal(int n, int m)
{
    int i,a,b,p;
    if(n<m)
	{
		i=m;
		m=n;
		n=i;
	}
    p=1;
    a=n-m<m?n-m:m;
    b=n-m>m?n-m:m;
    for(i=1; i<=a; i++)
        p+=p*b/i;
    return p;
}

int main()
{
	int n,m;
	cin>>m>>n;
	cout<<cal(m,n)<<endl;
	return 0;
}
