class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int can=0; 
        for(int i : nums){
            if(c==0){
                can=i;
            }
            if(i==can){
                c++;
            }else{
                c--;
            }
        }
        return can;
    }
};  