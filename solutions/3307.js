var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n').slice(1, -1);

lines.forEach(num => {
  let a = parseFloat(num);
  let r = Math.sqrt(a / (4.0 * 3.14));
  if (r < 12) {
    console.log("vermelho = R$", (a * 0.09).toFixed(2));
  } else if (r >= 12 && r <= 15) {
    console.log("azul = R$", (a * 0.07).toFixed(2));
  } else {
    console.log("amarelo = R$", (a * 0.05).toFixed(2));
  }
});
