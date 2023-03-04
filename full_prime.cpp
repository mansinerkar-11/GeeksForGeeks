 #include<iostream>
 #include<math.h>
 using namespace std;
 
class Solution{
    public:
          int fullPrime(int N){
        int r,flag=0;
        if(N==1){
            return 0;
        }
        for(int i=2;i<N;i++){
            if(N%i==0){
                return 0;
            }
       }while(N>0){
           r = N%10;
            if(r==0||r==1||r==4||r==6||r==8||r==9){
                flag=1;
            }
        
            N/=10;
       }
       if(flag==1){
            cout<<"No"<<endl;
           return 0;
       }else{
            cout<<"Yes"<<endl;
           return 1;
       }
}
 
};
 int main()
 {
    int num;
    cout<<"Enter number: ";
    cin>>num;
    Solution obj;
    obj.fullPrime(num);
    return 0;
 }