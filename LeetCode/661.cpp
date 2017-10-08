class Solution {
public:
    int dx[8]={-1,-1,0,1,1,1,0,-1};
    int dy[8]={0,1,1,1,0,-1,-1,-1};
    bool belong(int X, int Y, int a, int b){
        return a>=0 && a<X && b>=0 && b<Y;
    }
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        vector<vector<int>> ans;
        vector<int> v;
        int cont,sm;
        for(int i=0; i<M.size(); i++)
        {
            v.clear();
            for(int j=0; j<M[i].size(); j++)
            {
                cont=1;
                sm=M[i][j];
                for(int k=0; k<8; k++)
                {
                    int newX=i+dx[k];
                    int newY=j+dy[k];
                    if(belong(M.size(),M[i].size(),newX,newY)){
                        cont++;
                        sm=sm+M[newX][newY];
                    }
                }
                v.push_back(floor(sm/cont));
            }
            ans.push_back(v);
        }
        return ans;
    }
};
