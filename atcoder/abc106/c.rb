s = gets.chomp
k = gets.to_i

s.match(/^1+/)
if $& && $&.length >= k
  puts 1
else
  s.match(/[2-9]/)
  puts $&
end

