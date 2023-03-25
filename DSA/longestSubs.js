function longestPalSubstr(str) {
  let n = str.length;
  let substr = " ";
  let longest = " ";
  let subrev = "";
  for (let i = 0; i < n; i++) {
    let j = n - 1;
    while (i < j) {
      if (str[i] === str[j] && longest.length < j - i + 1) {
        substr = str.substring(i, j + 1);
        subrev = substr.split(" ").reverse().join(" ");

        if (substr === subrev) {
          longest = substr;
        }
      }
      j--;
    }
  }
  if (longest.length === 0) {
    longest = str[0];
  }
  console.log("longest sustring palindrome is : " + longest);
  return longest.length;
}
let str = "forgeeksskeegfor";
console.log("Length is: " + longestPalSubstr(str));
