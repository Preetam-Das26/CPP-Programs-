#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {



        vector<int>vec;

        
        vector<int>::iterator itr=nums.begin();
        while(itr<(nums.end()-1))
        {

            if(*itr!=*(itr+1))
            vec.push_back(*itr);

            

            itr++;
           
        }
        vec.push_back(*itr);
        nums.clear();

        int k=vec.size();
        //cout<<k;
        for(int i=0;i<k;i++)
        nums.push_back(vec[i]);

        

        return k;
        


        
    }
};
