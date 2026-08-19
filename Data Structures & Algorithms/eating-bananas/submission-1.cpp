class Solution {
public:
bool haseaten(vector<int>& piles, int h,int e){
    int sum=0;
for(int i=0;i<piles.size();i++){
int rem=piles[i]/e;
int ch=piles[i]%e;
if(ch!=0){
    sum=sum+rem+1;
}else{
    sum+=rem;
}

}
if(sum<=h){
    return true;
}else{
    return false;
}
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(haseaten(piles,h,mid)){
                ans=mid;
           high=mid-1;
            }else{
           low=mid+1;
            }
        }
return ans;
    }
};
