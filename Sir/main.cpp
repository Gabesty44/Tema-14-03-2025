#include <bits/stdc++.h>

using namespace std;

ifstream fin("sir.in");
ofstream fout("sir.out");

long long binomial(int n, int k)
{
    if(k>n-k)
        k=n-k;
    long long res=1;
    for(int i=0;i<k;i++)
    {
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
int main()
{
    int P,U,N;
    fin>>P>>N>>U;
    fout<<binomial(N-1,U-1);
    fin.close();
    fout.close();
    return 0;
}
