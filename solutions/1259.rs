use std::{io, process::exit};

// Read integer
fn read_int() -> i32 {
  let mut input_text = String::new();
  io::stdin()
    .read_line(&mut input_text)
    .expect("Deu merda");

  let trimmed = input_text.trim();
  match trimmed.parse::<i32>() {
    Ok(i) => return i,
    Err(..) => exit(1),
  };
}

// Read float
fn read_float() -> f64 {
  let mut input_text = String::new();
  io::stdin()
    .read_line(&mut input_text)
    .expect("Deu merda");

  let trimmed = input_text.trim();
  match trimmed.parse::<f64>() {
    Ok(i) => return i,
    Err(..) => exit(1),
  };
}

fn main() {

  // :)
  let mut n = read_int();
  let mut even = vec![];
  let mut odd = vec![];
  
  while n > 0 {
    let num = read_int();
    if num % 2 == 0 {
      even.push(num);
    } else {
      odd.push(num);
    }
    n -= 1;
  }

  even.sort();
  odd.sort();
  odd.reverse();

  for e in even {
    println!("{}", e);
  }

  for o in odd {
    println!("{}", o);
  }
}
