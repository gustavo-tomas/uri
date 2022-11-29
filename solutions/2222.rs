use std::{io, process::exit, collections::HashSet};

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

fn main() {

  let q = read_int();
  for _ in 0..q {
    let n = read_int();
    let mut vec: Vec<HashSet<i32>> = vec![];
    for _ in 0..n {
      let line = read_line_int();
      let set = (&line[1..]).iter().cloned().collect();
      vec.push(set);
    }
    
    let q = read_int();
    for _ in 0..q {
      let line = read_line_int();
      let op = line[0];
      let s1 = line[1] - 1;
      let s2 = line[2] - 1;
      let set1 = HashSet::from(vec[s1 as usize].to_owned());
      let set2 = HashSet::from(vec[s2 as usize].to_owned());

      if op == 1 {
        let inter = set1.intersection(&set2);
        println!("{}", inter.collect::<Vec<&i32>>().len());
      } else {
        let un = set1.union(&set2);
        println!("{}", un.collect::<Vec<&i32>>().len());
      }
    }
  }
}
