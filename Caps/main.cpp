#include <bits/stdc++.h>

using namespace std;

ifstream fin("caps.in");
ofstream fout("caps.out");

long long k,q,n,i,j,v[1000005],maxim,len,putere,cnt;
char sir[1000005],caps[1000005],S[1000005],C[1000005],aux[1000005];

int main()
{
    fin>>k>>q;
    fin.ignore();
    fin.getline(sir,3005);
    for(i=1;i<=q;i++)
    {
        fin>>v[i];
        if(v[i]>maxim)
            maxim=v[i];
    }
    putere=0;
    while(k*pow(4,putere)<maxim)
    {
        if(k*pow(4,putere)<maxim)
            putere++;
    }
    for(i=0;i<putere;i++)
    {
        strcpy(aux,sir);
        len=strlen(sir);
        for(j=0;j<len;j++)
        {
            if(sir[j]>='A' && sir[j]<= 'Z')
                caps[j]=sir[j]+32;
            else
                caps[j]=sir[j]-32;
        }
        strcpy(S,strcat(aux,caps));
        strcpy(C,strcat(caps,sir));
        strcpy(sir,strcat(S,C));
    }
    for(i=1;i<=q;i++)
    {
        cnt=0;
        for(j=0;j<v[i];j++)
            if(sir[j]==sir[v[i]-1])
                cnt++;
        fout<<sir[v[i]-1]<<" "<<cnt<<endl;
    }
    fin.close();
    fout.close();
    return 0;
}
