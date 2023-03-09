
// Brute force

function printSubStr(str, low, high){
    for( i =low; i <=high; i++){
        document.write(str[i]);
    }
}


function longestPalSubstr(str){

    let max_length = 1, start = 0 , flag;
    let n = str.length;
    for( let i = 0; i <= str.length; i++ ){

        for( let j = i; j <=str.length; j++ ){
            flag = 1;
        }
        
    }
    // check for palindrome...
    for(let k =0; k < (j - i + 1 ) / 2; k++){
        if(str[i +  k] != str[j - k])
            flag = 0;
    }

    if(flag != 0 && (j - i + 1) > max_length ){
        start = i;
        max_length = j - i + 1;
    }

    document.write("Longest palindrome subString is:  ");
    printSubStr(str, start, start + max_length -1);
    return max_length;
}