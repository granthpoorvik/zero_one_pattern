#include<iostream>
using namespace std;
/*
Enter the number >10
Enter the number >5
1 
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

int main()
{    

    cout<<"Enter the number >";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                if((i+j)%2==0)
                    cout<<1<<" ";
                else
                    cout<<0<<" ";

            }
            
        }
        cout<<endl;

    }
        
}