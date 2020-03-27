// Safa Shubbar. sshubbar@kent.edu
//CPP implementation for building a function that takes an array of non-negative integers and an integer, 
//if the array of integers is [1,2,3] we might say it represents the integer 123. 
//The function should add an integer to the number represented by that array but still output an array.

#include <iostream> 
using namespace std; 

const int SizeArray = 10; // The size of the array


// function for adding number to array 
/*
n is the used size of arrays //[1, 2, 3] -> n = 3
[5, 6, 7, 8] -> n = 4

*/
void incrementArray(int *a, int *b, int n) 
{ 
    int rem = 0, temp = 0;
    for (int i = n - 1; i>= 0; --i){
       
        rem = a[i] + b[i] + rem;
        temp = rem % 10;
        rem /= 10;
        a[i] = temp;
        
    }
}

// driver code 
int main() 
{ 
    
	int Input_array[SizeArray];
	int Number_array[SizeArray];
	int s;
	
	// Fill both arrays with 0's 
	for(int i = 0; i < SizeArray; i++)
	{
	    Input_array[i] = 0;
	    Number_array[i] = 0;
    }
    cout << "What is the size of the array??" << endl;
    cin >> s;
    cout << "Please enter the array of non-negative integers of size " << s<< " using single space between numbers" <<endl;
 
	for(int i = SizeArray-s ; i <= SizeArray- 1; i++){
	   cin >> Input_array[i];
	  
	}
	
	for(int i = SizeArray-s ; i <= SizeArray- 1; i++)
	
	{
	   // if the array contains any negative intergers exit the program!
	   if (Input_array[i] < 0 )
	   {
	        cout << "Error.. the array contains negative integer(s)"<< endl;
	        cout << "End of program .. Good Bye!!";
	         exit(1); 
	  
	   }
	   
	   else
	   
	   {
	   	
        	cout<<endl;
            int c;
            
            cout << "Please enter the number to sum it with the array: ";
            cin >> c;
            
                
            //Convert the number to an array!!
               int number = c;
            for (int i = SizeArray - 1; i >=  0; i--) {
                Number_array[i] = number % 10;
                number /= 10;
            }
        
            // call the incrementArray function to sum the arrays
            
          	incrementArray(Input_array, Number_array, SizeArray); 
          	
            cout<< endl<< "The result of sum the array and the number is: ";
        	for (int i = SizeArray-s; i <= SizeArray- 1; i++) 
        	cout << Input_array[i] << " "; 
        
        	return 0; 
	       
	    }
    }
    
}