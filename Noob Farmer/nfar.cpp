//Noob Farmer Problem Code: NFAR
#include <bits/stdc++.h> 
  
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        long double a,b,c,p,t_area;
        cin>>a>>b>>c>>p;
        t_area=(a+b+c)+(a*a*c+a*b*c+a*c*c)/(a*b+b*b-a*c);
        cout<<fixed<<setprecision(2)<<t_area*p<<endl;
    }
    return 0;
}
/*
Sample Input:
2
5 4 4
2
1 2 1
5
Sample Output:
58.50
24.00
*/