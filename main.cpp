
#include <iostream>
using namespace std;

int main() {
    int start,end;
    cout<<"enter your start range";
    cin>>start;
    cout<<"Enter your end range";
    cin>>end;
    int target_sum;
    cout<<"enter your target sum";
    cin>>target_sum;

    for(int i=start;i<=end;i++)
    {
        for(int j=i+1;j<=end;j++)
        {
            if(j+i==target_sum)
            {
                cout << "(" << i << ", " << j << ")" << endl;
            }
        }
    }
    return 0;
}
