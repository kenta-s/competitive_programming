s = gets.chomp

count = 0
w_count = 0

s.chars.each.with_index(1) do |char, i|
  if char == "W"
    w_count += 1
    count += i - w_count
  end
end

puts count
