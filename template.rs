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

// Read integers in a line
fn read_line_int() -> Vec<i32> {
  let mut line = String::new();
  io::stdin().read_line(&mut line).expect("Failed to read line");

  let inputs: Vec<i32> = line.split_whitespace()
    .map(|x| x.parse().expect("Not an integer!"))
    .collect();

  return inputs;
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
}
