function replaceRegex(str, before, after){
    if(before.charCodeAt(0) <=90){
        after = after.slice(0, 1).toUpperCase() + after.slice(1);

        return str.replace(new RegExp(before, 'gi'), after);
    }


}

console.log(replace("my name is Lorenzo", 'tom', 'jerry'));