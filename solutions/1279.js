var input = require('fs').readFileSync('input.txt', 'utf8');
var lines = input.split('\n');

const leapYear = year => {
  // 400 or 4 but not 100
  let num = Number(year.slice(-2));
  if (Number(year.slice(-4)) % 400 === 0 || num % 4 === 0 && num % 100 !== 0) {
    return true;
  }
  return false;
};

const huluYear = year => {
  // 5
  if (year.slice(-1) === '0' || year.slice(-1) === '5') {
    let sum = 0;
    // 3
    for (let i = 0; i < year.length; i++) {
      sum += Number(year[i]);
    }
    // 15
    if (sum % 3 === 0) {
      return true;
    }
  }
  return false;
};

const buluYear = year => {
  // leap
  if (leapYear(year)) {
    // 5
    if (year.slice(-1) === '0' || year.slice(-1) === '5') {
      // 11
      let sum = 0;
      for (let i = 0; i < year.length; i++) {
        sum += i % 2 ? -Number(year[i]) : Number(year[i]);
      }
      // 55
      if (sum % 11 === 0) {
        return true;
      }
    }
  }
  return false;
};

let first = true;
lines.forEach(year => {
  if (year.length > 0) {
    let eventful = false;
    if (!first) console.log("");
    if (leapYear(year)) {
      eventful = true;
      console.log("This is leap year.");
    }
    if (huluYear(year)) {
      eventful = true;
      console.log("This is huluculu festival year.");
    }
    if (buluYear(year)) {
      eventful = true;
      console.log("This is bulukulu festival year.");
    }
    if (!eventful) {
      console.log("This is an ordinary year.");
    }
    first = false;
  }
});