 if n=5
 the pascel triangle is  like : 
          1
		1   1
	1     2      1
  1    3     3    1 
1    4    6    4     1


3-types  question may ask : 

1st->way) givrn row and column like



row = 5
col =3  then formula if (row-1 
                            C
                              col-1)
                              4 C 2- is the answer
                              
                              
function of ncr






function(n,r){
	int res=1;
	for(int i=0;i<r;i++){
		res = res * (n-i);
		res = res/i+1;
	}
	return res;
}





















to print wholen passcal triangle
--------------------------
class Solution {
public :
void myFunction(int row,vector<vector<int>>&ans){
    vector<int>temp;
    temp.push_back(1);
    int res=1;
    for(int col=1;col<row;col++){
        res = res * (row-col);
        res = res/col;
        temp.push_back(res);
    }
    ans.push_back(temp);
}
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            myFunction(i,ans);
        }
        return ans;

    }
};
