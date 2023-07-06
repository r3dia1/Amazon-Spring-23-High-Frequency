class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> f_list_head;
        vector<int> f_list_tail;
        for(int i=1; i<=sqrt(n); i++)
        {
            if(n % i == 0)
            {
                if(i == n/i)
                    f_list_head.push_back(i);
                else
                {
                    f_list_head.push_back(i);
                    f_list_tail.push_back(n/i);
                }
            }
        }
    
        int length = f_list_head.size();
        int t_length = length + f_list_tail.size();

        if(k > t_length)
            return -1;
        else
        {
            if(k <= length)
                return f_list_head[k-1];
            else
                return f_list_tail[t_length - k];
        }
    }
};