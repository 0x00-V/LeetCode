class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {

        map<char,int>map;
        pair<char,int> secondLargest;
        priority_queue<pair<char,int> >pq;
        string result = "";
        
        for(int i=0;i<s.size();i++) map[s[i]]++;

        for(auto i:map)pq.push(i);
        
        while(!pq.empty())
        {
            auto largest = pq.top();
            pq.pop();
            int len = min(repeatLimit, largest.second);
            for(int i=0;i<len;i++){
                result += largest.first;
            }

            if(largest.second - len > 0){ 
                if(!pq.empty()){
                    secondLargest = pq.top();
                    pq.pop();
                    result += secondLargest.first;
                }
                else{
                    return result;
                }

                if(secondLargest.second - 1>0) pq.push({secondLargest.first, secondLargest.second-1});
                pq.push({largest.first, largest.second-len});
            }
        }
        return result;
    }
};