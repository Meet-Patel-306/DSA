// Last updated: 18/08/2025, 18:36:20
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l=0,h=1e9,ans=-1,i,j;

        while(l<=h)

        {

            int mid=(l+h)/2,cnt=0,j=0;

            

            for(i=0;i<bloomDay.size();i++)

            {

                if(bloomDay[i]<=mid)

                {

                    j++;

                }else

                {

                    j=0;

                }

                if(j==k)

                {

                    j=0;

                    cnt++;

                }

            }

            if(cnt>=m)

            {

                ans=mid;

                h=mid-1;

            }else{

                l=mid+1;

            }

        }

        

        return ans;
    }
};