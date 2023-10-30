class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited;
        visited.resize(V,false);
        
        list<int> queue;
        vector<int> ans;
        
        visited[0]=true;
        queue.push_back(0);
        int s;
        
        while(!queue.empty()){
            s=queue.front();
            ans.push_back(s);
            queue.pop_front();
            
            for(auto adjacent: adj[s]){
                if(!visited[adjacent]){
                    visited[adjacent] = true;
                    queue.push_back(adjacent);
                }
            }
            
        }
        return ans;
    }
};
