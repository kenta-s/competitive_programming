s = gets.chomp

if s[0] == "A" && s[2..-2].count("C") == 1
  if s.count("A") == 1 && s.count("C") == 1
    s = s.sub("A", "a").sub("C","c")
    s.match(/[a-z]*/)
    if $& == s
      ans = "AC"
    else
      ans = "WA"
    end
  else
    ans = "WA"
  end
else
  ans = "WA"
end

puts ans
