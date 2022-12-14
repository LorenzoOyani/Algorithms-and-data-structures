
/**
 * Examples
 * 
 * Input: str = "aabb"
    Output: "ab"


Input: str = "aab"
Output: "a"
The two subsequence are 'a'(first) and 'a' 
(second). Note that 'b' cannot be considered 
as part of subsequence as it would be at same
index in both.
 */

function findLongestRepeatingSubseq(str){
    let n = str.length;

    let dp = new Array(n + 1);
    for(let i =0; i <= n; i++){
        dp[i] = new Array(n + 1);

        for(let j = 0; j <= n; j++){
            dp[i][j] = 0;
        }
    }

    for(let i = 1; i <= n ; i++){
        
        for( let j = 1; j <= n; j++){


            if(str[i - 1] == str[j - 1] && i !=j){
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }else{
                dp[i][j] = Math.max(dp[i][j -1], dp[j][i -1])
            }
        }
    }
    return dp[n][n];
}