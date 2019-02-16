s = gets.chomp.chars
t = gets.chomp.chars


ans = "z" * s.size
restorable = false

(0..(s.size-t.size)).each do |i|
  chars = s[i,t.size]
  valid = true

  chars.each_with_index do |c, j|
    if c == t[j] || c == "?"
      next
    else
      valid = false
    end
  end

  if valid
    restorable = true
    tmp = s[0...i] + t + s[i+t.size..-1]
    ans = [tmp.join.gsub("?", "a"), ans].min
  end
end

if !restorable
  ans = "UNRESTORABLE"
end

puts ans
