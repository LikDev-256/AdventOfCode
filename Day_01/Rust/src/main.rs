fn main() {
    let max_calories = include_str!("input.txt")
        .lines()
        .fold((0, 0), |(max_calories, now_sum), line| {
            if line.is_empty() {
                (max_calories.max(now_sum), 0)
            } else {
                (max_calories, now_sum + line.parse::<u32>().unwrap_or(0))
            }
        })
        .0;

    println!("{}", max_calories);
}