class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> a;
        vector<int> b;

        int n = nums.size();
        
        for(int i = 0; i < n; i++){
            if(nums[i]>=0){
                a.push_back(nums[i]);
            }else{
                b.push_back(nums[i]);
            }
        }

        int x = a.size();
        int y = b.size();

        if(b.size() == 0){
            for(int i = 0; i<x;i++){
                a[i] = a[i]*a[i];
            }
            return a;
        }
        if(a.size()==0){
            for(int i = 0; i<y;i++){
                b[i] = b[i]*b[i];
            }
            reverse(b.begin(),b.end());
            return b;
        }
        
        int i = 0,j = 0,k = 0;

        for(int i = 0; i < x; i++) {
            a[i] = a[i] * a[i];
        }
        for(int i = 0; i<y;i++){
            b[i] = b[i]*b[i];
        }
        reverse(b.begin(),b.end());

        vector<int> f(n);

        while(i<x&&j<y){
            if(a[i]<b[j]){
                f[k] = a[i];
                i++;k++;
            }else{
                f[k] = b[j];
                j++;k++;
            }
        }

        while(i<x){
            f[k] = a[i];i++;k++;
        }

        while(j<y){
            f[k] = b[j];j++;k++;
        }

        return f;
    }
};