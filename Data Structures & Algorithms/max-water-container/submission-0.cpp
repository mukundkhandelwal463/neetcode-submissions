class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int start =0;
        int end = n-1;
        int max_water = 0;
        while(start<=end){
            int wid = end -start;
            int hig = min(heights[start],heights[end]);
            int water = wid * hig;
            max_water= max(max_water,water);
            if (heights[start]<heights[end]){
                start++;
            }else{
                end--;
            }
        }
        return max_water;
    }
};
