#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    char c{};
    do
    {
      cout << "\n--------------" << endl;
      cout << "P - Print List" << endl;
      cout << "A - Add number" << endl;
      cout << "M - Dsiplay mean of numbers" << endl;
      cout << "S - Display smallest number" << endl;
      cout << "L - Display largest number" << endl;
      cout << "Q - Quit" << endl;
      cout << "Enter your choice : ";
      cin >> c;
      
      if(c=='p' || c=='P')
      {
        if(vec.size()!=0)
        {
         cout << "List of numbers [ ";
         for(int i=0; i<vec.size(); i++)
         {   
          cout << vec.at(i) << " ";
         }
         cout << "]" << endl;
        }

        else 
        cout << "list of numbers - []"<< endl;
      }

      else if(c=='a' || c=='A')
      {
        cout << "Enter a number to add in the list : ";
        int input;
        cin >> input;
        vec.push_back(input);
      }

      else if(c=='m' || c=='M')
      {
        int sum,mean;
        for(int i=0; i<vec.size(); i++)
        {
            sum += vec.at(i);
        }
        mean = sum/vec.size();
        cout << "Mean of the list is : " << mean << endl;
      }

      else if(c=='s' || c=='S')
      {
        int s;
        for(int i=0; i<vec.size(); i++)
        {
            if(vec.at(i)<s)
             s = vec.at(i);
        }
        cout << "smallest number in the list is : " << s << endl;
      }

      else if(c=='l' || c=='L')
      {
        int l;
        for(int i=0; i<vec.size(); i++)
        {
            if(vec.at(i)>l)
             l = vec.at(i);
        }
        cout << "Largest number in the list is : " << l << endl;
      }

      else
       cout << "Unknown selection, Please try again later...." << endl;
    }
    while(c!='q' && c!='Q');

    cout << "Thank you";

    return 0;

}