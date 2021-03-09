/*Firstly take  the element to be inserted Then go for the position at which this element is to be inserted Then shift the array elements from this position 
to one position forward, and do this for all the other elements next to position.
Insert the element  now at the position ,as this is now empty.*/


#include <iostream>
using namespace std;

int main()

{

    int n;
    cin>>n;

    int array[1000];

    for(int i=0;i<n;i++){
    cin>>array[i];
    }

    int element;
    cin>>element;

    cout<<"Initial array:\n";
    for(int i=0;i<n;i++){
    cout<<array[i]<<" ";
    }
    cout<<"\n";

    int position;
    cin>>position;

    for(int i=n-1;i>=position-1;i--){
      array[i+1]=array[i];
    }

    array[position-1]=element;

    cout<<"Final array:\n";
    for(int i=0;i<=n;i++){
      cout<<array[i]<<" ";
    }
    return 0;
}
 /*Input : 5
  1 2 3 4 5
  6-element
  Output : 
  Initial array 
  1 2 3 4 5
  3-position
  Final array 
  1 2 6 3 4 5
  
  Input : 5
  5 4 3 2 1
  6-element
  Output : 
  Initial array 
  5 4 3 2 1
  4-position
  Final array 
  5 4 3 6 2 1
  
  Time complexity:O(n)
  Space complexity:O(n)
*/
