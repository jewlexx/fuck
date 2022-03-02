fn xo(string: &'static str) -> bool {
    let mut x_count = 0;
    let mut o_count = 0;

    for c in string.chars() {
        let lower = c.to_lowercase().collect::<String>();
        if lower == "x" {
            x_count += 1;
        } else if lower == "o" {
            o_count += 1;
        }
    }

    x_count == o_count
}
