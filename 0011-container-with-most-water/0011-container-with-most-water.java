class Solution {
    public int maxArea(int[] height) {
        int i=0,j=height.length-1,maxArea=0;
        while(i<=j){
            int l=Math.min(height[j],height[i]);
            int b=j-i;
            int area=l*b;

            maxArea=Math.max(area,maxArea);
            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxArea;
    }
}