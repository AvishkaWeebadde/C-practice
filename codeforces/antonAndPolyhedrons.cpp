#include<iostream>
using namespace std;

int main()
{
    int n, count{0};
    string polygon;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> polygon;
        
        if(polygon == "Tetrahedron") count += 4;
        else if(polygon == "Cube") count += 6;
        else if(polygon == "Octahedron") count += 8;
        else if(polygon == "Dodecahedron") count += 12;
        else if(polygon == "Icosahedron") count += 20;
        
    }
    
    cout << count;
    
    return 0;
}