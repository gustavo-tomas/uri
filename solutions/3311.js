var input = require('fs').readFileSync('stdin', 'utf8');
var names = input.replace(/\r/g, "").split('\n').filter(name => name.length > 0);
names.shift();

const comp = (a, b) => {
  if (a[0] < b[0])
    return -1;
  return 1;
};

const sorted_names = names.sort(comp);
sorted_names.forEach(name => console.log(name));
