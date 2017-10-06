class Solution {
public:
    string countAndSay(int n) {
        vector<string> v={"1","11","21","1211","111221"};
        int cont=5;
        while(cont<n)
        {
            string aux=v[cont-1];
            int cont2=1;
            char c=aux[0];
            string ans="";
            for(int i=1; i<aux.size(); i++)
            {       
                if(c==aux[i]) cont2++;
                else{
                    ans=ans+to_string(cont2)+c;
                    cont2=1;
                    c=aux[i];
                }
            }
            ans=ans+to_string(cont2)+c;
            v.push_back(ans);
            cont++;
        }
        return v[n-1];
    }
};
