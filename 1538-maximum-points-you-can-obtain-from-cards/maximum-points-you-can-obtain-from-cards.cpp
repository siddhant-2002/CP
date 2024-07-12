class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int left=0;
        int right=0;
        int maxi=0;

        int n = cardPoints.size();

        for(int i=0;i<k;i++){
            left+=cardPoints[i];
        }
        maxi=left;

        int j=n-1;

        for(int i=k-1;i>=0;i--){
            left-=cardPoints[i];
            right+=cardPoints[j];
            j--;

            maxi = max(maxi, left+right);
        }

        return maxi;
    }
};