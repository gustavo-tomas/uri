var input = require('fs').readFileSync('stdin', 'utf8');
var lines = input.replace(/\r/g, "").split('\n').filter(l => l.length > 0);
var n = parseInt(lines.shift());

while (n > 0) {
  const students = [];
  while (n > 0) {
    const line = lines.shift().split(" ").filter(l => l.length > 0);
    students.push(line);
    n--;
  }
  students.sort((a, b) => {
    if (a[0] === b[0])
      return 0;
    return a[0] < b[0] ? -1 : 1;
  });
  students.sort((a, b) => {
    if (a[1] === b[1])
      return 0;
    return a[1] < b[1] ? -1 : 1;
  });
  students.sort((a, b) => {
    return parseInt(a[2]) - parseInt(b[2]);
  });
  students.forEach(student => console.log(student[0]));
  n = parseInt(lines.shift());
}
