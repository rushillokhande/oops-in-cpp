#include<iostream>
using namespace std;
int main()
{
float total=0;
float a;
cout<<"enter numbers you want to print :";
cin>>a;
float arr[a];
for (int i = 0; i < a; i++) {
  cin>>arr[i];
}
for (int i = 0; i < a; i++) {
  total+=arr[i];
}
cout<<"total is:"<<total;

total=total/a;
cout<<"average is: "<<total;
}



#include<iostream>
using namespace std;
int main(){
int a,total=0,avg=0;
cout<<"enter the numbers you want :";
cin>>a;
int b=a;
cout<<"enter"<<a<<"elements";
while(a>0){
cin>>c;
total+=c;
a--;
}
avg=total/b;
cout<<"sum is :"<<total;
cout<<"avg is :"<<avg;



} 



#include<iostream>
using namespace std;
int main(){
int a ,n,i;
int sum=0,avg=0;
    cout<<"enter number of elements :";
    cin>>n;
    for (int i = 0; i < n; i++) {
        cout<<"enter number of elements :" <<i+1;
        cin>>}a;
        sum+=a;
    }
    avg=sum/n;
    cout<<"sum is :"<<sum;
    cout<<"avg is :"<<avg;
    return 0;
    


    

    }
