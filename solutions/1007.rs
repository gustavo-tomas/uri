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
  let a = read_int();
  let b = read_int();
  let c = read_int();
  let d = read_int();
  println!("DIFERENCA = {}", (a * b - c * d));
}