use std::{
    env,
    fs::{self},
    io::Write,
};

const BYTE: [u8; 1] = [0];

fn main() {
    let mut path = env::current_dir().unwrap();
    path.push("file");

    let mut file = if !path.exists() {
        fs::File::create(&path).unwrap()
    } else {
        fs::File::open(&path).unwrap()
    };

    file.write_all(&BYTE).unwrap();
}
