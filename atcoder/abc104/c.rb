d, g = gets.split(" ").map(&:to_i)

ps = []
d.times do |i|
  p, c = gets.split(" ").map(&:to_i)
  ps << [p, c]
end

# 1023.to_s(2).chars

use = []
"10110".chars.each_with_index do |c, i|
  use << i if c == "1"
end

require 'irb'
binding.irb
