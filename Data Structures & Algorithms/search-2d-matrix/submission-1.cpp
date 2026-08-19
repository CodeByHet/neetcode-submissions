class Solution {
public:
bool checkifexist(int t,vector<int>mt){
int l=0;
int h=mt.size()-1;
while(l<=h){
    int mid=l+(h-l)/2;
    if(t>mt[mid]){
        l=mid+1;
    }else if(t<mt[mid]){
        h=mid-1;
    }else{
        return true;
    }
}
return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int high=matrix.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(target>=matrix[mid][0] && target<=matrix[mid][matrix[mid].size() - 1]){
               return checkifexist(target,matrix[mid]);
            }else if(target>matrix[mid][0]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return false;
    }
};
