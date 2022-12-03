
const splitString = {
    [symbol.split](str){
        let num = 1,
        pos = 0,
        result = [];
        while(pos < str.length){
            matchpos = str.substring(num, pos);
            if(matchpos == -1){
                result.push(str.substring(num,  pos));
                break;
            }
           result.push(str.substring(pos, matchpos));
            pos = matchpos + String(num).length;
            num++;

        }
        return result;
    }
}

const resultToSplit = "a1bc2c5d3e4f"
console.log(resultToSplit.split(splitString));