n = gets.to_i

(n..999).each do |i|
  s = i.to_s
  if s[0] == s[1] && s[0] == s[2]
    puts s
    exit
  end
end
