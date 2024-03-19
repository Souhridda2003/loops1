#include<iostream>
using namespace std;

int main(){
    cout<<"enter the limit: ";
    int n;
    cin>>n;
    int a=4;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a+=3;
    }
}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n;
// 	cin >> n;
// 	int start = 4, d = 3;
// 	while (n--) {
// 		cout << start << " ";
// 		start += 3;
// 	}
// }

