fn main() {
    for i in 0..=100 {
        let mut output = String::new();
        if i % 3 == 0 {
            output += "Fizz";
        }
        if i % 5 == 0 {
            output += "Buzz";
        }
        if output.is_empty() {
            println!("{}", i)
        } else {
            println!("{}", output)
        }
    }
}
