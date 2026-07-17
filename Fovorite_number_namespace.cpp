#include <iostream>

using namespace std; //using the entire namespace directive can create new naming conflicts
/* You can also use
   using std::cout;
   using std::cin;
   using std::endl;
   this will specifically use these names from the name space
*/

int main()
{
    int FavNo;
    cout <<"enter a number between 1 to 100 : ";

    cin >> FavNo;

    cout << "Amazing That's my favorite number too!"<< endl;
    cout <<"No really!, "<< FavNo <<" is my favorite number too"<< endl;
    
    return 0;
}