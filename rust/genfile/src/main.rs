use clap::Parser;
use indicatif::ProgressBar;
use std::{env, fs, io::Write};

#[derive(Parser, Debug)]
#[clap(author, version, about, long_about = None)]
struct Args {
    /// Number of units to write
    #[clap(default_value = "1024")]
    size: String,

    /// The unit to write in [b, kb, mb, gb]
    #[clap(short, long, default_value = "kb")]
    unit: String,
}

fn main() {
    let args: Args = Args::parse();
    let unit = args.unit;
    let mut size = args.size.parse::<usize>().unwrap();

    if unit == "kb" {
        size *= 1024;
    } else if unit == "mb" {
        size *= 1024 * 1024;
    } else if unit == "gb" {
        size *= 1024 * 1024 * 1024;
    }

    let mut path = env::current_dir().unwrap();
    path.push("file");

    let mut file = if !path.exists() {
        fs::File::create(&path).unwrap()
    } else {
        fs::File::open(&path).unwrap()
    };

    let bar = ProgressBar::new(size as u64);

    for _ in 0..((size / (1024 * 1024)) as usize) {
        let vec = vec![0; 1024 * 1024];
        file.write_all(vec.as_slice()).unwrap();
        bar.inc((1024 * 1024) as u64);
    }

    let vec = vec![0; (size % (1024 * 1024)) as usize];
    file.write_all(vec.as_slice()).unwrap();
    bar.inc((size % (1024 * 1024)) as u64);
}
