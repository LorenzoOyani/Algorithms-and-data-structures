function palindrome(str) {
    str = str.match (/[a-z0-9]/ig);
    let originalStr = str.join('').toLowerCase();
    let reversedStr = str.reverse.join('').toLowerCase();

    if ( originalStr === reversedStr)
        return true;

        return false;
}

console.log(palindrome(" 12eye"));