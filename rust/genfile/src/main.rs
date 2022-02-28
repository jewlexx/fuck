use std::{
    env,
    fs::{self},
    io::Write,
};

#[allow(dead_code)]
const BYTE: [u8; 1] = [0];
#[allow(dead_code)]
const KILOBYTE: [u8; 1024] = [0; 1024];
#[allow(dead_code)]
const MEGABYTE: [u8; 1024 * 1024] = [0; 1024 * 1024];

fn main() {
    let mut path = env::current_dir().unwrap();
    path.push("file");

    let mut file = if !path.exists() {
        fs::File::create(&path).unwrap()
    } else {
        fs::File::open(&path).unwrap()
    };

    file.write_all(&MEGABYTE).unwrap();
}
