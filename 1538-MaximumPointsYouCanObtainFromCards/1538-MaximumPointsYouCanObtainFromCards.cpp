// Last updated: 19/08/2025, 19:27:19
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int maxScore = 0;
        for(int i = 0;i<k;i++){
            maxScore += cardPoints[i];
        }
        int left = maxScore,rigth=0;
        for(int i = 0;i<k;i++){
            left-=cardPoints[k-1-i];
            rigth+=cardPoints[n-1-i];
            maxScore = max(maxScore,left+rigth);
        }
        return maxScore;
    }
};