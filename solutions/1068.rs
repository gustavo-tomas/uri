use std::io::Read;
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
  let mut input = String::new();
  let stdin = std::io::stdin();
  let mut handle = stdin.lock();
  
  handle
    .read_to_string(&mut input)
    .expect("Deu merda");

  let mut res: Vec<&str> = input.split("\n").collect();
  res.pop();
  
  for r in res {
    let mut tik = 0;
    let mut correct = true;

    for i in r.chars() {
      if i == '(' {
        tik += 1;
      }

      if i == ')' {
        tik -= 1;
      }

      if tik < 0 {
        correct = false;
      }
    }

    if tik > 0 {
      correct = false;
    }

    if correct {
      println!("correct");
    } else {
      println!("incorrect");
    }
  }
}