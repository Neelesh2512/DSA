#include <bits/stdc++.h>
using namespace std;

int bintodec(int n)
{
    int ans = 0;
    int i=0;
    
    while(n)
    {
        int dig = n%10;
        n = n/10;
        ans = ans+dig*pow(2,i);
        i++;
    }    
    return ans;
}

void dectobasesix(int num)
{
    string ans = "";
    
    while(num)
    {
        int dig = num%6;
        num = num/6;
        ans = ans+to_string(dig);
    }
    
    reverse(ans.begin(),ans.end());
    
    cout<<ans;
}

int main() {
	
    int n;
    cin>>n;
    
    int ans = bintodec(n);
    cout<<"Base 2 :"<<ans;
    cout<<endl;
    cout<<"Base 6 : ";
    dectobasesix(ans);

	return 0;
}