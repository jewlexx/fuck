use clap::Parser;
use std::{env, fs, io::Write};

#[derive(Parser, Debug)]
#[clap(author, version, about, long_about = None)]
struct Args {
    /// Number of units to write
    #[clap(default_value_t = 1024)]
    size: usize,

    /// The unit to write in
    #[clap(short, long, default_value = "mb")]
    unit: String,
}

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
