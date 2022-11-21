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

fn main() {
  let n = read_int();
  
  for _ in 0..n {
    let mut line = String::new();
    io::stdin()
      .read_line(&mut line)
      .expect("Deu merda");

    let mut words: Vec<&str> = line.split(|c| c == ' ' || c == '\n').collect();
    words.pop();

    words.sort_by(|a, b|
      b.chars().count().cmp(&a.chars().count()));
    
      for i in 0..words.len() {
        if i < words.len() - 1 {
          print!("{} ", words[i]);
        } else {
          println!("{}", words[i]);
        }
      }
  }
}