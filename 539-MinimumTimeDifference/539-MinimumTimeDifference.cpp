// Last updated: 18/08/2025, 18:37:42
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minu;
        for(int i=0;i<timePoints.size();i++){
            int h=stoi(timePoints[i].substr(0,2));
                       int m=stoi(timePoints[i].substr(3));
             int tMin=h*60 + m;
                                  minu.push_back(tMin);
            }
        sort(minu.begin(),minu.end());
        int mD=INT_MAX;
        for(int i=0;i<minu.size()-1;i++){
            int D=minu[i+1]-minu[i];
            if(mD>D) mD=D;
            }
        mD = min(mD, 24 * 60 - minu.back() + minu.front());
        return mD;
    }
};