n = gets.to_i
as = gets.split(" ").map(&:to_i)

tmp = 0
table = {}
as.sort!
n.times do |i|
  table[as[i]] ||= 0
  table[as[i]] += 1

  if table[as[i]] == as[i]
    tmp += as[i]
  end
end

puts as.size - tmp
