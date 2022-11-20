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

// Check if num is prime
fn is_prime(num: i32) -> &'static str {
  let mut i = 2;
  while i * i <= num {
    if num % i == 0 {
      return "Not Prime";
    }
    i += 1;
  }
  return "Prime";
}

fn main() {

  let mut q = read_int();
  while q > 0 {
    let num = read_int();
    println!("{}", is_prime(num));
    q -= 1;
  }
}
