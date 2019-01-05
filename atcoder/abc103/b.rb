s = gets.chomp
t = gets.chomp

chars = s.chars
chars.size.times do |i|
  if chars.join == t
    puts "Yes"
    exit
  else
    char = chars.pop
    chars.unshift(char)
  end
end

puts "No"
