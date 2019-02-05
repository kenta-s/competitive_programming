n = gets.to_i
as = gets.split(" ").map(&:to_i)

sum = 0
prev = 0
n.times do |i|
  sum += (prev - as[i]).abs
  prev = as[i]
end
sum += as[-1].abs

require 'irb'

prev = 0
n.times do |i|
  if i+1 == as.size
    puts sum - (prev - as[i]).abs - as[i].abs + prev.abs
  elsif prev < as[i+1] && as[i+1] < as[i]
    puts sum - (as[i+1] - as[i]).abs * 2
  elsif prev > as[i+1] && as[i+1] > as[i]
    puts sum - (as[i+1] - as[i]).abs * 2
  elsif prev < as[i] && as[i] > as[i + 1]
    puts sum - (prev - as[i]).abs * 2
  elsif prev > as[i] && as[i] < as[i + 1]
    puts sum - (prev - as[i]).abs * 2
  else
    puts sum
  end

  prev = as[i]
end
