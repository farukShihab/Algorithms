#include<iostream>
#include<vector>
using namespace std;
#define endl '\n'                             //Sieve algorith to find Prime numbers upto 100000000 under 1 second
#define ll long long int


vector<int>primes;
bool a[100000000];
int n=100000000;


void findPrimes()
{
    a[0]=a[1]=true;
    primes.push_back(2);
    for(int i=3;i<n;i+=2){
        if(a[i]==false){
            primes.push_back(i);
            if(i*(ll)i<(ll)n)
            for(int j=i*i;j<=n;j+=i*2)
                a[j]=true;
        }
    }


}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    findPrimes();
    int Size=primes.size();
    int i=0;
    while(i<Size){
        cout<<primes[i]<<endl;
        i++;
    }

    return 0;

}
