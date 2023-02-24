class PairFrequency {
    constructor(first, second) {
        this.first = first;
        this.second = second
    }
}

function the_sortFrequency(arr, res, n) {
    let m = new Map();
    for (let i = 0; i < n; i++) {
        if (m.has(arr[i])) {
            m.set(arr[i], m.get(arr[i]) + 1);
        } else {
            m.set(arr[i], 1);
        }
    }
    m.forEach((value, key) => {
        res.push(new PairFrequency(value, key));
    })
    res.sort(function (a, b) {
        return a.first - b.first;
    })
}

let arr = [2, 5, 2, 6, - 1, 999999, 5, 8, 8, 8]
let res = [];
the_sortFrequency(arr, res, n);
res.reverse()
for (let i = 0; i < res.length - 1; i++) {
    if (res[i].first == res[i + 1].first) {
        for (let j = 0; j < res.length; j++) {
            if (res[i].second > res[j].second && res[i].first == res[j].first) {
                let temp = res[j];
                res[j] = res[i];
                res[i] = temp;
            }
        }
    }
}

console.log('\n');
for (let i = 0; i < res.length; i++) {
    for (let j = 0; j < res[i].first; j++) {
        console.log(res[i].second + " ");
    }
}