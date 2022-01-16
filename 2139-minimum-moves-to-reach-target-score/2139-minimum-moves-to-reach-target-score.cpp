class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        if(maxDoubles==0)
            return target-1;
        long long d=0;
        while(target>1 && --maxDoubles>=0){
            d++;
            if(target%2!=0)
                d++;
            target=target/2;
        }
        return d+target-1;
    }
};