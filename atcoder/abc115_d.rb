# https://beta.atcoder.jp/contests/abc115/tasks/abc115_d 

# OPTIMIZE: too slow. need to handle 50
def burger(level)
  return "P" if level.zero?
  level_minus_one = burger(level - 1)
  "B" + level_minus_one + "P" + level_minus_one + "B"
end

def eat_count(n, x)
  burger(n)[0..x].count("P")
end

input = gets.chomp
n, x = input.split(" ").map(&:to_i)

puts eat_count(n, x)
