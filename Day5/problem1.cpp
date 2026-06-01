# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"entr the number"<<endl;
    cin>>n;
    int temp=n;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
        else{
            continue;
        }
    }
    if(sum==temp){
        cout<<"number is perfect"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
}