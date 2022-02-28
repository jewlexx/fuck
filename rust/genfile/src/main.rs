use std::{
    env,
    fs::{self},
    io::Write,
};

fn main() {
    let size = env::args()
        .nth(1)
        .unwrap_or_else(|| "1024".to_string())
        .parse::<usize>()
        .unwrap();

    let mut path = env::current_dir().unwrap();
    path.push("file");

    let mut file = if !path.exists() {
        fs::File::create(&path).unwrap()
    } else {
        fs::File::open(&path).unwrap()
    };

    let vec = vec![0; size];

    file.write_all(vec.as_slice()).unwrap();
}
