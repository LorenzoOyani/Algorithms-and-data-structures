function sortByVal(a, b) {
    if (a[1] == b[1]) {
        return a[0] - b[0];

    }

    return b[1] - a[1];
}

function sortByFreq(arr, n) {
    let res = [];

    let m = new Map();

    let v = [];

    for (let i = 0; i < n; i++) {
        if (m.has(arr[i])) {
            m.set(arr[i], m.get(arr[i] + 1));
        } else {
            m.set(arr[i], 1);
        }

    }
    for (let [key, value] of m) {
        v.push([key, value]);

    }
    v.sort(sortByVal);

    for (let i = 0; i < n; ++i) {
        while (v[i][1]--) {
            res.push(v[i][0]);
        }
    }
    return res;
}

let array = [2, 5, 2, 6, -1, 999999, 5, 8, 8, 8]
let n = a.length;
let res = [];
res = sortByFreq(arr, n)

for (let i = 0; i < n; i++) {
    document.write(res[i] + " ");
}