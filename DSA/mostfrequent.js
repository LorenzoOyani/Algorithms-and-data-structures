function mostFrequent(arr, n) {
    let maxCount = 0;
    let mostfrequent_num;
    for(let i = 0; i < n; i++){
        let count = 0;
        for(let j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
            
            }
            if(maxCount > count){
                maxCount = count;
                mostfrequent_num = arr[i]
        }
    }
    return mostfrequent_num;
}

let arr = [40, 50, 30, 40, 50, 30, 30]
let n = arr.length
console.log(mostFrequent(arr, n));