var input = require('fs').readFileSync('input.txt', 'utf8');
var lines = input.split('\n');

function prime(x){
    if(x === 1) return 0;
    if(x % 2 === 0) return (x === 2) ? 1 : 0;   
    for(let i=3; i<=Math.sqrt(x); i++){
        if(x % i === 0) return 0;
    }
    return 1;
}

function prime_list(n){
    let primes = [], i = 2;
    while(n > 0){
        if(prime(i)){
            primes.push(i);
            n--;
        }
        i++;
    }
    return primes;
}

var n = parseInt(lines.shift());
while(n > 0){
    let people = [];
    let primes = prime_list(n-1);
    
    for(let i=1; i<=n; i++) people.push(i);
    
    let curr = 0, k = 0;
    while(people.length > 1){
        curr = (curr + primes[k++] - 1) % people.length;
        people.splice(curr,1);
    }
    
    console.log(people[0]);
    var n = parseInt(lines.shift());
}