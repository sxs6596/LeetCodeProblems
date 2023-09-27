class Solution {
public:
    int trap(vector<int>& height) {
            // define the size of the height array. 
    int n = height.size();
       // define the left max vector. 
      vector<int>leftmax(n); 
    // define the right max vector. 
      vector<int>rightmax(n); 

    // define the trapped water. 
    int trapped_water = 0;
    trapped_water = 0;
    leftmax[0] = height[0];
    for(int i = 1; i<n;i++){
      leftmax[i] = max(leftmax[i-1], height[i]);
    }
    rightmax[n-1] = height[n-1];
    for(int i = n-2;i>=0;i--){
      rightmax[i] = max(rightmax[i+1], height[i]);
    }
    for(int j = 0;j<n;j++){
     trapped_water+= min(leftmax[j], rightmax[j]) - height[j];
    }
    return trapped_water; 
  }
};