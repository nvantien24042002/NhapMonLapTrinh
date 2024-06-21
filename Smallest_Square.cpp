#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
    cin >> n;
    int min_x = 101, max_x = -1, min_y = 101, max_y = -1;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        
        // Cap nhat gia tri cuc tri
        min_x = min(min_x, x);
        max_x = max(max_x, x);
        min_y = min(min_y, y);
        max_y = max(max_y, y);
    }
    // Tinh do dai canh hinh vuong
    int dodai =max(max_x - min_x, max_y - min_y);
    
    // Tinh dien tich canh hinh vuong
    int S=dodai*dodai;
    
    cout<<S<<"\n";
    
    return 0;

}
