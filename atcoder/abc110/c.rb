s = gets.chomp
t = gets.chomp

done = []
s.length.times do |i|
  next if done.include?(t[i])
  orig = s[i]
  s.gsub!(t[i], "!")
  s.gsub!(orig, t[i])
  s.gsub!("!", orig)
  done << t[i]
end

if s == t
  puts "Yes"
else
  puts "No"
end
