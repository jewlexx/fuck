use raylib::prelude::*;
use std::{thread, time::Duration};

fn main() {
    let (mut rl, thread) = raylib::init()
        .size(640, 480)
        .title("Hello, World")
        .resizable()
        .build();

    let mut x = 0;

    while !rl.window_should_close() {
        let mut d = rl.begin_drawing(&thread);

        x += 1;

        d.clear_background(Color::WHITE);
        d.draw_text(&format!("{}", x), 12, 12, 20, Color::BLACK);

        thread::sleep(Duration::from_millis(16));
    }
}
