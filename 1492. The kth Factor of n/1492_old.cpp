class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> f_list;
        for(int i=1; i<=n; i++)
        {
            if(n % i == 0)
                f_list.push_back(i);
        }

        if(k > f_list.size())
            return -1;
        else
            return f_list[k-1];
    }
};