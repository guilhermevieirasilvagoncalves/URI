#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    
    int T;
    cin >> T;
    while(T--){
        string n;
        cin >> n;
        vector<char> nums(n.size());
        vector<char>::iterator itr = nums.begin();
        char menor = '9';
        int idx = 0;
        for (int i = 0; i < n.size(); i++)
        {   
            if(n[i] != '0' && n[i] < menor){
                menor = n[i];
                idx = i;

            }
            nums[i] = n[i];
        }
        cout << menor;
        itr += idx;
        nums.erase(itr);

        //cout << idx << endl;
        //int x = (int)menor - 48;
        // itr += x;
        // nums.erase(itr);
        
        //cout << "aaa";
        sort(nums.begin(),nums.end());

        for (int j = 0; j < nums.size(); j++)
        {
            cout << nums[j];
        }
        cout << endl;
        

        // string final;
        // int k;
        // for (k = 0; k < nums.size(); k++){
        //     if(nums[k] == menor){
        //         break;
        //     }
        // }

        // for (int j = 0; j < nums.size(); j++)
        // {
        //     if(final[0] != '0'){
        //         final += nums[j];
        //     }
        //     else{
        //         final[0] = menor;
        //         itr += k;
        //         nums.erase(itr);
        //         final += '0';
        //         final += nums[j];
        //     }

        // }
        // //cout << menor << endl;
        
        // cout << final << endl;
        // nums.clear();
        
    }
}
