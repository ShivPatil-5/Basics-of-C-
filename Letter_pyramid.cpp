#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter a string" << endl;
    string ex;
    getline(cin,ex);

    int counter = 0;
    for(int a=1; a<=ex.length(); a++)
    {
        for(int space =(ex.length() -counter -1); space>=0; space--)
        {
            cout << " ";
        }

        for(int i=0; i<a; i++)
        {
            cout << ex.at(i);
        }

        for(int j = counter-1; j>=0; j--)
        {
            cout << ex.at(j);
        }

        cout << endl;

        counter++;
    }

    return 0;
}