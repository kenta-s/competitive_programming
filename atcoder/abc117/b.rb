n = gets.to_i
ls = gets.split(" ").map(&:to_i)

longest = ls.max
if ls.reduce(0){|a,e| a+=e} - longest > longest
  puts "Yes"
else
  puts "No"
end
