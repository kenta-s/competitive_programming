# d, g = gets.split(" ").map(&:to_i)
# 
# ps = []
# d.times do |i|
#   p, c = gets.split(" ").map(&:to_i)
#   ps << [p, c]
# end
# 
# # 1023.to_s(2).chars
# 
# use = []
# "10110".chars.each_with_index do |c, i|
#   use << i if c == "1"
# end
# 
# require 'irb'
# binding.irb

d, g = gets.split(" ").map(&:to_i)
ps = []
d.times do |i|
  # ps << gets.split(" ").map(&:to_i)
  p, b = gets.split(" ").map(&:to_i)
  ps << [(i+1)*100, p, b]
end

# hoge = []
# count = Float::INFINITY
# ps.each_with_index do |e,i|
#   score = e[0] * (i + 1) + e[1]
#   if g <= score
#     count = [count, e[0].min
#   end
# end

count = Float::INFINITY
(1..1024).each do |n|
  # break if d < n
  break if d**2 <= n
  use = []
  n.to_s(2).chars.reverse.each_with_index do |c, i|
    use << i if c == "1"
  end
  puts "tmp use: #{use.inspect}"
  tmp = ps.values_at(*use)
  tmp_count = tmp.reduce(0){|a,e|a+=e[1]}
  # puts "tmp_count: #{tmp_count}"
  score = tmp.reduce(0){|a,e|a+=(e[0] * e[1] + e[2])}
  puts "tmp_score: #{score}"
  if g <= score && tmp_count < count
    count = tmp_count
  end
end

puts "first count: #{count}"

score = 0
tmp_count = 0
while score < g
  score += ps[-1][0]
  tmp_count += 1
end

if tmp_count < count
  count = tmp_count
end

puts count

# require 'irb'
# binding.irb
