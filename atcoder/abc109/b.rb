n = gets.to_i
words = []
n.times do
  words << gets.chomp
end

last_c = nil
used = []
words.each do |w|
  if used.include?(w)
    puts "No"
    exit
  elsif last_c && last_c != w[0]
    puts "No"
    exit
  else
    used << w
    last_c = w[-1]
  end
end

puts "Yes"
