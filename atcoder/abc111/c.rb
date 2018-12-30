_n = gets.to_i
as = gets.chomp.split(" ").map(&:to_i)

even = Hash.new(0)
odd = Hash.new(0)
as.each.with_index do |a, i|
  if i % 2 == 0
    even[a] += 1
  else
    odd[a] += 1
  end
end

even_values = even.values.sort.reverse
odd_values = odd.values.sort.reverse
# even_max = even.key(even_values.first)
# odd_max = odd.key(odd_values.first)
even_max = even.key(even_values.first)
odd_max = odd.key(odd_values.first)

count = 0
if even_max == odd_max
  count += odd_values[1, odd_values.length].reduce(0) {|a,e| a+=e}
  count += even_values[1, even_values.length].reduce(0) {|a,e| a+=e}
  count += even_values.first
else
  count += odd_values[1, odd_values.length].reduce(0) {|a,e| a+=e}
  count += even_values[1, even_values.length].reduce(0) {|a,e| a+=e}
end

puts count
