class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>banklist(wordList.begin(),wordList.end());
        unordered_set<string>visited;
        queue<string>q;
        q.push(beginWord);
        visited.insert(beginWord);
        int count=1;
        while(!q.empty()){
            int n =q.size();
            while(n--){
            string front =q.front();
            q.pop();
            if(front==endWord){
                return count;
            }
            for(int i=0; i<front.length(); i++){
                string neighbour =front;
                for(char ch ='a'; ch<='z'; ch++){
                        if(ch==front[i])continue;
                        neighbour[i] =ch;
                
                if(visited.find(neighbour)==visited.end()&& banklist.find(neighbour)!=banklist.end()){
                    visited.insert(neighbour);
                    q.push(neighbour);
                }
                }
            }
        }
        count++;


        }
        return 0;
    }
};
