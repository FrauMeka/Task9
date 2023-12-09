
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double arr[2][3];
    for(int i=0; i<2; ++i)
    {
        for (int j=0;j<3; ++j)
        {
            cin>>arr[i][j];
        }
    }
    double det=arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0];
    double detX=arr[0][2]*arr[1][1]-arr[0][1]*arr[1][2];
    double detY=arr[0][0]*arr[1][2]-arr[0][2]*arr[1][0];
    
    double x= detX/ det;
    double y= detY/det;
    
    
    cout<<fixed<<setprecision(4)<<x<<endl;
     
    cout<<fixed<<setprecision(4)<<y;
    return 0;
}