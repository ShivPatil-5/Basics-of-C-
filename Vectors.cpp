#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector <int> vector1;
  vector <int> vector2;

  vector1.push_back(10); 
  vector1.push_back(20);

  cout << "\nElements in Vector 1 are : " << vector1.at(0) << " " << vector1.at(1) << endl;
  cout << "Elements in Vector 1 are : " << vector1.size() << endl;

  vector2.push_back(100); 
  vector2.push_back(200);

  cout << "\nElements in Vector 2 are : " << vector2.at(0) << " " << vector2.at(1) << endl;
  cout << "Elements in Vector 2 are : " << vector2.size() << endl;

  //here Vector of Vector i.e. 2D vector has been declared
  vector <vector<int>> vector2d;

  /*
    the push_back function stores a copy in the vector 1 and 2 in the vector2d
    which will result in same outcome whenever we will print it out,
    eventhough we might have done changes in vector 1 or 2.  
  */
  vector2d.push_back(vector1);
  vector2d.push_back(vector2);

  cout << "\nVector 1 in Vector 2d has values : " << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << endl;
  cout << "Vector 2 in Vector 2d has values : " << vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << endl;

  vector1.at(0) = 1000;

  cout << "\nElements in Vector 1 are : " << vector1.at(0) << " " << vector1.at(1) << endl;

  cout << "\nVector 1 in Vector 2d has values : " << vector2d.at(0).at(0) << " " << vector2d.at(0).at(1) << endl;
  cout << "Vector 2 in Vector 2d has values : " << vector2d.at(1).at(0) << " " << vector2d.at(1).at(1) << endl;

  return 0;
}
