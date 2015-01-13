#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,bool> edges;
    int n,m,N1,N2;

    cin>>n>>m;
    if(m!=n-1) //First Condition: Number of Links=Number of Nodes-1 
    {
        cout<<"NO"<<endl;
        return 0;
    }
    while(m!=0)
    {
        m--;
        cin>>N1>>N2;

        if(edges[N1] && edges[N2]) //Asumming the graph is given as it builds
        {
            cout<<"NO"<<endl;
            return 0;
        }
      edges[N1]=true;
       edges[N2]=true;
    }


    cout<<"YES"<<endl;

    return 0;
}
