n = gets.to_i
d, x = gets.split(" ").map(&:to_i)
as = []
n.times do
  as << gets.to_i
end

count = 0
n.times do |i|
  d.times.with_index(1) do |j|
    tmp = j * as[i] + 1
    count += 1 if tmp <= d
  end
end

puts count + x
