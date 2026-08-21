class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> w;
        
        for(int x{0}; x < strs.size(); x++)
        {
            for(int y{0}; y < strs.size(); y++)
            {
                if(strs.at(x).size() != strs.at(y).size())
                {
                    continue;
                }

                std::sort(strs.at(x).begin(), strs.at(x).end());
                std::sort(strs.at(y).begin(), strs.at(y).end());

                if(strs.at(x)==strs.at(y))
                {
                    w.push_back(strs.at(x));
                }
                else
                {
                    continue;
                }
            }   
		}

        return w;
    }
};
