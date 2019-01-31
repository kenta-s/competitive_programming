s = gets.chomp.chars
k = gets.to_i

str = s[0,k].join
s.size.times do |i|
  tmp = s[i, k].join
  break if tmp.length < k
  str = tmp < str ? tmp : str
end

if str.length < k
  cands = []
  chars = str.chars
  while first = chars.shift
    cands << first
    chars.size.times do |i|
      if cands[-1]
        cands << cands[-1] + chars[i]
      else
        cands << chars[i]
      end
    end
  end
  puts cands[k-1]
else
  puts str
end
