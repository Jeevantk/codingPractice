#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
    long n;
    cin>>n;
    long k;
    cin>>k;
    vector<long> x_coords;
    vector<long> y_coords;
    
    for(long i=0;i<k;i++)
    {
        long num;
        cin>>num;
        x_coords.push_back(num);
    }
    
    for(long i=0;i<k;i++)
    {
        long num;
        cin>>num;
        y_coords.push_back(num);
    }
    
    long X1=1;
    long X2=n;
    long X3=1;
    long X4=n;
    
    long Y1=1;
    long Y2=1;
    long Y3=n;
    long Y4=n;
    
    long num_moves=0;
    for (long i=0;i<k;i++)
    {
        long moves1=abs(x_coords[i]-X1+y_coords[i]-Y1);
        long moves2=abs(X2-x_coords[i]+y_coords[i]-Y2);
        long moves3=abs(x_coords[i]+Y3-y_coords[i]-X3);
        long moves4=abs(-x_coords[i]-y_coords[i]+X4+Y4);

        long min=moves1;
        if(moves2<min)
        {
            min=moves2;
        }
        if(moves3<min)
        {
            min=moves3;
        }
        if(moves4<min)
        {
            min=moves4;
        }
        
        num_moves+=min;
    }
    
    cout<<num_moves;
    
}