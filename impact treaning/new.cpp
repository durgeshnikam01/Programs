// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int k;
//     cin >> k;
//     if(k<0 || k>n){
//         cout << "Invalid value of k";
//     }else{
//         int b[n]={0};
//         int i=0;
//         int main_max;
//         while(i<k){
//             int max=INT_MIN;
//             int ind;
//             for(int j=0;j<n;j++){
//                 if(arr[j]>max && b[j]==0){
//                     max=arr[j];
//                     ind=j;
//                 }
//             }
//             main_max=arr[ind];
//             b[ind]=1;
//             i++;
//         }
//         cout << main_max;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     if(isprime(n))
//     cout << "Prime Number" ;
//     else
//     cout << "Not a Prime Number" ;


// #include<bits/stdc++.h>
// using namespace std;

// class Palin {
//     public:
//     string s;

//     void process() {
//         int l = s.length(), flag = 0;

//         for (int i = 0, j = l - 1; i <= j; i++, j--) {
//             if (s[i] != s[j]) {
//                 flag = 1;
//                 break;
//             }
//         }

        
//         if (flag == 0) {
//             cout << "Palindrome" << endl;
//         } else {
//             cout << "Not a Palindrome" << endl;
//         }
//     }
// };

// int main() {
//     Palin p;
//     cout << "Enter a string: ";
//     cin >> p.s;
//     p.process();
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
class palin{
    public:
    string s;
    palin(string str){
        this->s=str;
    }
    void process(){
        int l=s.length(),flag=0;
        for(int i=0,j=l-1;i<=j;i++,j--){
            if(s[i]!=s[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"Palindrome"<<endl;
        }else{
            cout<<"Not a Palindrome"<<endl;
        }
    }
};