
const swapDigits = (number)=>{
    const digitsArr = number.toString().split("");
    console.log(digitsArr);
    const digitArrLength = digitsArr.length;
    const ans =  digitArrLength % 2 == 0?
                digitsArr.reduce((acc, curr, arr, index)=>{
                    if((index + 1) % 2 == 0){
                        acc += curr + arr[index + 1]
                        return acc;
                    } else{
                        return acc;
                    }

                   
                }, " ") :
                digitsArr.reduce((acc, curr, arr, index)=>{
                    if(index ==0){
                        acc += acc + curr;
                        return acc
                    } else if ((index + 1) % 2 ==0){
                        acc +=  arr[index + 1] + curr; 
                        return acc;
                    }else{
                        return acc;
                    }
                       
                    
                }, "");

                return  Number(ans);
}

console.log(swapDigits(5647318));