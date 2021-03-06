#include <iostream>

using namespace std;

// Does not work with negative integers and takes no input
// Does not check if proper values

class MyInteger{
	
	public:
		void setMyNumber(int num){myNumber = num;}
		int getMyNumber(){return myNumber;}
		int operator[](int index);
	
	private:
		int myNumber;	
};

int main( ){
    
    MyInteger a;
    const int idxSize = 5;
    int idxArray[idxSize] = {-1,3,2,1,0};
    
    a.setMyNumber(418);
    cout <<"The number set is: " 
    << a.getMyNumber() << endl;
   
    cout << "Testing with various indices..." << endl;
    
    for(int i = 0; i < idxSize; i++)
    {
        cout << "Trying with index: " << idxArray[i] << endl;
        cout << a[idxArray[i]] << endl;
    } 
    
    a.setMyNumber(0);
  
    cout <<"The number set is: " 
    << a.getMyNumber() << endl;
    
     cout << "Testing with various indices..." << endl;
    
    for(int i = 0; i < idxSize; i++)
    {
        cout << "Trying with index: " << idxArray[i] << endl;
        cout << a[idxArray[i]] << endl;
    }  
}

 int MyInteger:: operator[](int index){
	
	int temp = myNumber, count = 0, size = 0;
	bool validIndex = false;
	
	if(temp == 0)
	{
	    size = 1;
	}
	else
	{
	    while(temp > 0)
	    {
	        temp /= 10;
	        size += 1;
	    }
	}
	    
	temp = myNumber;
	
	while(temp >= 0 && count < size )
	{
	    if(count == index)
	    {
	        temp %= 10;
	        validIndex = true;
	        break;
	    }
	   count += 1;
	   temp /= 10;
	}
	
	if(!validIndex)
	    temp = -1;
	 
     return temp;
}