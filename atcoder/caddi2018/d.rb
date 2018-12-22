n = gets.to_i

as = []
n.times do |i|
  as << gets.to_i
end

if as.all?{|a| a.even? }
  ans ="second"
else
  ans = "first"
end

puts ans
