class Solution {
public:
    int maxProfit(vector<int>& prices) {
         // Initialize ans with the same size as prices
        // for(int i=0; i<prices.size(); i++){
        //     int a = prices[i];
        //     int maxi=a;
        //     for(int j=i+1; j<prices.size(); j++){
        //         if(prices[j]>maxi){
        //             maxi = prices[j];
        //         }
        //     }
        //     ans[i] = maxi;
        // }

       

        vector<int> ans(prices.size(), 0);
        int maxi=0;
        for(int i =prices.size()-1; i>=0;i--){
            maxi = max(prices[i],maxi);
                
            ans[i]=maxi;
        }

         int ansi=0;

        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
            ansi = max(ansi, abs(prices[i]-ans[i]));
        }
        return ansi;
    }
};