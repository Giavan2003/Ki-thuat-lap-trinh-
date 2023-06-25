 #include<iostream>
 using namespace std ; 
 int main()
 {
 	int n , A[100]; 
 	cin >> n ; 
 	for(int i =0 ; i< n ; i++ )
 	    cin >> A[i];
 	int min = A[0];
 	for(int i = 0 ; i< n; i++ )
 	    {
          if(A[i]<min)
          {
          	min = A[i];
		  }
		  	
        }
    cout << "min = "<< min;
    return 0 ;
         
 }
