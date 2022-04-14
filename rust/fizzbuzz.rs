fn main() {
    for i in 0..=100 {
        let three = i % 3 == 0;
        let five = i % 5 == 0;
        if three {
            print!("Fizz");
        }
        if five {
            print!("Buzz");
        }
        if !three && !five {
            print!("{}", i)
        }
        print!("\n");
    }
}
