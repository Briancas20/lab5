//testing procedure
//Brian
#include<iostream>
using namespace std;

int  mult2 (int a,int b);
int main()
{
    
#ifdef TEST_MODE
 int n = 4;
 int arr[] =  {3,4,12,5,7,34,6,18,10000,5000};
 cout<<"begin test...\n";
for (int i = 0;i<3;i++){
  int result = mult2(arr[i*3+1],arr[i*3+1]);
  if(result !=arr[i*3+2])
  cout<<"Error in mult2 \n";
}  
  // int result = mult2(2,3);
  // if(result !=6)
  // cout<<"Error in mult2 \n";
  //   cout<<"end test...\n";
#else
    int a,b;
    cin>>a>>b;
    cout<< mult2(a,b);
#endif
    cout <<endl;
    return 0;
}

int mult2(int a,int b)
{
    return a * b;
}
