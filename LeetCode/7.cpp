class Solution {
public:
    int reverse(int x) {
        if(x>(1<<31)-1 || x<-1*((1<<31)-1)) return 0;
        string aux="";
        if(x<0) aux=to_string(x).substr(1,aux.size()-2);
        else aux=to_string(x);
        std::reverse(aux.begin(), aux.end());
        long long aux2;
        if(x<0) aux2 = -1*stoll(aux);
        else aux2=stoll(aux);
        if(aux2>(1<<31)-1 || aux2<-1*((1<<31)-1)) return 0;
        return aux2;
    }
};
